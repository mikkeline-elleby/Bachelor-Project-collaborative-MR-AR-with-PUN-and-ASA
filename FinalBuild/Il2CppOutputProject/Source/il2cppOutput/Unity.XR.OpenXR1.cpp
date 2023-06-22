#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRFeature,System.Boolean>
struct Func_2_t78F1CD6BE32660DBEEC045DEBBE134470250B7AB;
// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRFeature,System.Int32>
struct Func_2_t0A801B86039F6321711382DBF7ABE368BBCC1A25;
// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRFeature,System.String>
struct Func_2_tA378341F61416931933EB9D89FCDB35C0A35FA53;
// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature,System.Boolean>
struct Func_2_t7022C3ACB9D0A4754D0EAD253C36332DDB6A35FD;
// System.Func`2<System.String,System.String>
struct Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A;
// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding,System.Collections.Generic.IEnumerable`1<System.String>>
struct Func_2_t7E8A32344018227D2F16B40CC36DDDFE54080102;
// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding,System.Boolean>
struct Func_2_t1C5516912B1D89016AB6BE2EC2B3BB57A15BB96C;
// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/DeviceConfig,System.String>
struct Func_2_tC86B6AA216DF7AA52AE7A803914B2E6304154DF1;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.XR.OpenXR.Input.Haptic>
struct InputProcessor_1_t440F6898F2CB5FA8F8C8C5E99D083C4FDBB8A06C;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>
struct InputProcessor_1_tABF07DE71C259EA74DBFF87F0516FBCEDBA40E81;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.XR.PoseState>
struct InputProcessor_1_tEA1D419B3D446BFE4B77F1D70B6F7D4C11005368;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>
struct InputProcessor_1_t5D94DB4CAE796E92FE59120B19897BE7A4580E04;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tC797B512F2641A0AB0844215B781FCBB24FC8EFA;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_t97A3DFD1D319E367F13E1723DF8FCF389D67C4F2;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>
struct InputProcessor_1_t2B5820D8FCAD8C7864ECD8C574B87CFED83A96CA;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t6331523A19E51FB87CA899920C03B10A48A562B0;
// System.Collections.Generic.List`1<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding>
struct List_1_t9E127897AEC2B39D662240E51C3924EC17C19AE8;
// System.Collections.Generic.List`1<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionConfig>
struct List_1_tA396D5F0B3AA6DDDC4343F281F3F8104D80FD408;
// System.Collections.Generic.List`1<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionMapConfig>
struct List_1_t32E30A0BD9E9BE5A271C9428B22B7DD0E0D28BA2;
// System.Collections.Generic.List`1<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/DeviceConfig>
struct List_1_t053AC621F4C2B8D2BDBBFCEBECB02D0B1C6A6745;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.XR.OpenXR.Input.Haptic>[]
struct InputProcessor_1U5BU5D_tA1C277057C882CB1D26081A2C83CC61BC6CB5CC5;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>[]
struct InputProcessor_1U5BU5D_t13E281AFAFB00FB6270C630A454FC686A3C9DFA8;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.XR.PoseState>[]
struct InputProcessor_1U5BU5D_t2A860AEBD7D61DBBE8C02E6A6D3F73DEAA5751BC;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>[]
struct InputProcessor_1U5BU5D_t7482B36593149DD210C0EBC0A2A6318FB3F29930;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tE570C3D0B2C8F6ECE9058972450FE9624F6AAD62;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_t4E7F1C676ED9874F3A93CFB93A154797EF363BC2;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>[]
struct InputProcessor_1U5BU5D_t17D43D53477F87726CEC5E1CE6B5437D27AE8232;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.XR.OpenXR.Input.HapticControl
struct HapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.InputSystem.InputControl
struct InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA;
// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
struct OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43;
// UnityEngine.XR.OpenXR.OpenXRRestarter
struct OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944;
// UnityEngine.InputSystem.XR.PoseControl
struct PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17;
// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t271CA458D56BCA875642853132733D774B009A96;
// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.OpenXR.WaitForRestartFinish
struct WaitForRestartFinish_t1E531A0B84387E912CDA4C5079FE2D1D00C1FDC6;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.InputSystem.XR.XRController
struct XRController_tB2474121816D6124DF5CF8739FED669945C52778;
// UnityEngine.InputSystem.XR.XRControllerWithRumble
struct XRControllerWithRumble_tAECE062A3E616AC023DA89DA07003DB0D43EDEC2;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F;
// UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c
struct U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF;
// UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c
struct U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5;
// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding
struct ActionBinding_t659CB6F4241434629DC1CD8ACC9A3CAE8D27D3B2;
// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionConfig
struct ActionConfig_t369A0AD8D90D166FA237468147267699CF53B57F;
// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionMapConfig
struct ActionMapConfig_t7A4E65BA5E4A61EC2C706E91C78E8C81AC230663;
// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/DeviceConfig
struct DeviceConfig_tBC37C5EA2384BCB69BD0153C3E1387E4DB5461BF;
// UnityEngine.XR.OpenXR.OpenXRLoaderBase/<>c
struct U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3;
// UnityEngine.XR.OpenXR.OpenXRLoaderBase/ReceiveNativeEventDelegate
struct ReceiveNativeEventDelegate_t34641E86FBD0380CE83C7C3827A33D9D531991D7;
// UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25
struct U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43;
// UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__24
struct U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_t2DD20E2036281B0023F5DD0E7FFC9635B4C088F2;
// UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__26
struct U3CRestartCoroutineU3Ed__26_tC49307D9D8268F189EE679F671D7819D2C729749;
// UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController
struct ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeEvent_t94138199EE1CC201C255637BA0005DC42F64E440_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForRestartFinish_t1E531A0B84387E912CDA4C5079FE2D1D00C1FDC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674;
IL2CPP_EXTERN_C String_t* _stringLiteral0D74755D51876350D4B4382E014E2E93AD3D3B73;
IL2CPP_EXTERN_C String_t* _stringLiteral0F5B3EFDF6C5EC21CBEAF753BF5996D79FF36071;
IL2CPP_EXTERN_C String_t* _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A;
IL2CPP_EXTERN_C String_t* _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4;
IL2CPP_EXTERN_C String_t* _stringLiteral3695EBDA6F8B5C617BDA3771BFB4AC68FB956407;
IL2CPP_EXTERN_C String_t* _stringLiteral46C52D35A125250F5FBD7AAB8CD2F6E82177916E;
IL2CPP_EXTERN_C String_t* _stringLiteral4ADB212528F8CF625764142B108030A0499510F0;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9B28579DAB706CEF903A85854B98A08280D27D;
IL2CPP_EXTERN_C String_t* _stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA5B233166AA50A8488D3B97E0B5A1D09EA4905;
IL2CPP_EXTERN_C String_t* _stringLiteral6A8CECB369E64DA7E1FBB6FDE079801EFD1EBFEB;
IL2CPP_EXTERN_C String_t* _stringLiteral767FF60B240D13D0E7862196C1340B1049EF4B4B;
IL2CPP_EXTERN_C String_t* _stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456;
IL2CPP_EXTERN_C String_t* _stringLiteral890FDBCF037770EED7A1937DEF697FFC44FBF0B3;
IL2CPP_EXTERN_C String_t* _stringLiteral8C0A1E9BF9118A96D440F9C412F1CA49D661D0EE;
IL2CPP_EXTERN_C String_t* _stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590;
IL2CPP_EXTERN_C String_t* _stringLiteral9E98EC4F7D85E6AB585D718D9BEDBB163E42B54C;
IL2CPP_EXTERN_C String_t* _stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF;
IL2CPP_EXTERN_C String_t* _stringLiteralA1B168A27A20FBC71F68A13C1177A7928C95537F;
IL2CPP_EXTERN_C String_t* _stringLiteralB5CCD6D3CB93DC1BEDD79DB8A4B75174089A3455;
IL2CPP_EXTERN_C String_t* _stringLiteralB65ECF98859F9960AF3A135B1DB157C6A9E64500;
IL2CPP_EXTERN_C String_t* _stringLiteralBAB78FE52E1FDB7FF399F8778E6696CD0042FF45;
IL2CPP_EXTERN_C String_t* _stringLiteralC2934AD2E30B910F9A57BA805ABFCC02C5AE59DB;
IL2CPP_EXTERN_C String_t* _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567;
IL2CPP_EXTERN_C String_t* _stringLiteralD9F573449435626A96C594EA43095A22DF995F84;
IL2CPP_EXTERN_C String_t* _stringLiteralE0C07794D9D8D1547EF130F005ABD901FE8F5136;
IL2CPP_EXTERN_C String_t* _stringLiteralE2F88218C8B7313CA69F05634BDB224484349ABF;
IL2CPP_EXTERN_C String_t* _stringLiteralF6CFDC1274B766A282F7B3F8F7CCC8BDF8038D7B;
IL2CPP_EXTERN_C String_t* _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisAxisControl_tA997FF52442F7B08C7E13B7028393B4117248680_m393D62A7199F4ECF21B55FD1C2DDB1D5B8C38813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisHapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C_m722FA03702F56653290DA54FAEDA642FA62350E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisIntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4_m79707C5EA0CD69CA2484E7CC0B3B291670BBC793_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisPoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17_mA16003670FD70C6D0ED6AB4984C3A3C97EAEFC49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisQuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48_m4A9B7A0F3BDE9673B05A4E6BEB8EE6D7D1CD4F96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector2Control_t271CA458D56BCA875642853132733D774B009A96_mFF8A48F6C9239AE81110CD7B5B5F63046BCAFC1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE_mD26314BFCC94ED995E96101D60D84A729E5F91AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPauseAndRetryInitializationCoroutineU3Ed__25_System_Collections_IEnumerator_Reset_mFB4DCDED33676B67D4FEB0D56E5C3205FF999ACD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_System_Collections_IEnumerator_Reset_m93A3117F09CA7E5606917E5932559BA7B7027016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRestartCoroutineU3Ed__26_System_Collections_IEnumerator_Reset_m9DA7F824B5C91E74A72FC6C4A3D6BF6CDFD4B17C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c
struct U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF_StaticFields
{
public:
	// UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c::<>9
	U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF * ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c::<>9__7_0
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * ___U3CU3E9__7_0_1;
	// System.Func`2<System.String,System.String> UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c::<>9__7_1
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * ___U3CU3E9__7_1_2;
	// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRFeature,System.Boolean> UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c::<>9__7_2
	Func_2_t78F1CD6BE32660DBEEC045DEBBE134470250B7AB * ___U3CU3E9__7_2_3;
	// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRFeature,System.String> UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c::<>9__7_3
	Func_2_tA378341F61416931933EB9D89FCDB35C0A35FA53 * ___U3CU3E9__7_3_4;
	// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRFeature,System.Boolean> UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c::<>9__7_4
	Func_2_t78F1CD6BE32660DBEEC045DEBBE134470250B7AB * ___U3CU3E9__7_4_5;
	// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRFeature,System.String> UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c::<>9__7_5
	Func_2_tA378341F61416931933EB9D89FCDB35C0A35FA53 * ___U3CU3E9__7_5_6;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF_StaticFields, ___U3CU3E9__7_1_2)); }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * get_U3CU3E9__7_1_2() const { return ___U3CU3E9__7_1_2; }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A ** get_address_of_U3CU3E9__7_1_2() { return &___U3CU3E9__7_1_2; }
	inline void set_U3CU3E9__7_1_2(Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * value)
	{
		___U3CU3E9__7_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF_StaticFields, ___U3CU3E9__7_2_3)); }
	inline Func_2_t78F1CD6BE32660DBEEC045DEBBE134470250B7AB * get_U3CU3E9__7_2_3() const { return ___U3CU3E9__7_2_3; }
	inline Func_2_t78F1CD6BE32660DBEEC045DEBBE134470250B7AB ** get_address_of_U3CU3E9__7_2_3() { return &___U3CU3E9__7_2_3; }
	inline void set_U3CU3E9__7_2_3(Func_2_t78F1CD6BE32660DBEEC045DEBBE134470250B7AB * value)
	{
		___U3CU3E9__7_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF_StaticFields, ___U3CU3E9__7_3_4)); }
	inline Func_2_tA378341F61416931933EB9D89FCDB35C0A35FA53 * get_U3CU3E9__7_3_4() const { return ___U3CU3E9__7_3_4; }
	inline Func_2_tA378341F61416931933EB9D89FCDB35C0A35FA53 ** get_address_of_U3CU3E9__7_3_4() { return &___U3CU3E9__7_3_4; }
	inline void set_U3CU3E9__7_3_4(Func_2_tA378341F61416931933EB9D89FCDB35C0A35FA53 * value)
	{
		___U3CU3E9__7_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_4_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF_StaticFields, ___U3CU3E9__7_4_5)); }
	inline Func_2_t78F1CD6BE32660DBEEC045DEBBE134470250B7AB * get_U3CU3E9__7_4_5() const { return ___U3CU3E9__7_4_5; }
	inline Func_2_t78F1CD6BE32660DBEEC045DEBBE134470250B7AB ** get_address_of_U3CU3E9__7_4_5() { return &___U3CU3E9__7_4_5; }
	inline void set_U3CU3E9__7_4_5(Func_2_t78F1CD6BE32660DBEEC045DEBBE134470250B7AB * value)
	{
		___U3CU3E9__7_4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_5_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF_StaticFields, ___U3CU3E9__7_5_6)); }
	inline Func_2_tA378341F61416931933EB9D89FCDB35C0A35FA53 * get_U3CU3E9__7_5_6() const { return ___U3CU3E9__7_5_6; }
	inline Func_2_tA378341F61416931933EB9D89FCDB35C0A35FA53 ** get_address_of_U3CU3E9__7_5_6() { return &___U3CU3E9__7_5_6; }
	inline void set_U3CU3E9__7_5_6(Func_2_tA378341F61416931933EB9D89FCDB35C0A35FA53 * value)
	{
		___U3CU3E9__7_5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_5_6), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c
struct U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5_StaticFields
{
public:
	// UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c::<>9
	U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature,System.Boolean> UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c::<>9__9_0
	Func_2_t7022C3ACB9D0A4754D0EAD253C36332DDB6A35FD * ___U3CU3E9__9_0_1;
	// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/DeviceConfig,System.String> UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c::<>9__9_1
	Func_2_tC86B6AA216DF7AA52AE7A803914B2E6304154DF1 * ___U3CU3E9__9_1_2;
	// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding,System.Boolean> UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c::<>9__9_2
	Func_2_t1C5516912B1D89016AB6BE2EC2B3BB57A15BB96C * ___U3CU3E9__9_2_3;
	// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding,System.Collections.Generic.IEnumerable`1<System.String>> UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c::<>9__9_3
	Func_2_t7E8A32344018227D2F16B40CC36DDDFE54080102 * ___U3CU3E9__9_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5_StaticFields, ___U3CU3E9__9_0_1)); }
	inline Func_2_t7022C3ACB9D0A4754D0EAD253C36332DDB6A35FD * get_U3CU3E9__9_0_1() const { return ___U3CU3E9__9_0_1; }
	inline Func_2_t7022C3ACB9D0A4754D0EAD253C36332DDB6A35FD ** get_address_of_U3CU3E9__9_0_1() { return &___U3CU3E9__9_0_1; }
	inline void set_U3CU3E9__9_0_1(Func_2_t7022C3ACB9D0A4754D0EAD253C36332DDB6A35FD * value)
	{
		___U3CU3E9__9_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5_StaticFields, ___U3CU3E9__9_1_2)); }
	inline Func_2_tC86B6AA216DF7AA52AE7A803914B2E6304154DF1 * get_U3CU3E9__9_1_2() const { return ___U3CU3E9__9_1_2; }
	inline Func_2_tC86B6AA216DF7AA52AE7A803914B2E6304154DF1 ** get_address_of_U3CU3E9__9_1_2() { return &___U3CU3E9__9_1_2; }
	inline void set_U3CU3E9__9_1_2(Func_2_tC86B6AA216DF7AA52AE7A803914B2E6304154DF1 * value)
	{
		___U3CU3E9__9_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5_StaticFields, ___U3CU3E9__9_2_3)); }
	inline Func_2_t1C5516912B1D89016AB6BE2EC2B3BB57A15BB96C * get_U3CU3E9__9_2_3() const { return ___U3CU3E9__9_2_3; }
	inline Func_2_t1C5516912B1D89016AB6BE2EC2B3BB57A15BB96C ** get_address_of_U3CU3E9__9_2_3() { return &___U3CU3E9__9_2_3; }
	inline void set_U3CU3E9__9_2_3(Func_2_t1C5516912B1D89016AB6BE2EC2B3BB57A15BB96C * value)
	{
		___U3CU3E9__9_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5_StaticFields, ___U3CU3E9__9_3_4)); }
	inline Func_2_t7E8A32344018227D2F16B40CC36DDDFE54080102 * get_U3CU3E9__9_3_4() const { return ___U3CU3E9__9_3_4; }
	inline Func_2_t7E8A32344018227D2F16B40CC36DDDFE54080102 ** get_address_of_U3CU3E9__9_3_4() { return &___U3CU3E9__9_3_4; }
	inline void set_U3CU3E9__9_3_4(Func_2_t7E8A32344018227D2F16B40CC36DDDFE54080102 * value)
	{
		___U3CU3E9__9_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_3_4), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding
struct ActionBinding_t659CB6F4241434629DC1CD8ACC9A3CAE8D27D3B2  : public RuntimeObject
{
public:
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding::interactionProfileName
	String_t* ___interactionProfileName_0;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding::interactionPath
	String_t* ___interactionPath_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding::userPaths
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___userPaths_2;

public:
	inline static int32_t get_offset_of_interactionProfileName_0() { return static_cast<int32_t>(offsetof(ActionBinding_t659CB6F4241434629DC1CD8ACC9A3CAE8D27D3B2, ___interactionProfileName_0)); }
	inline String_t* get_interactionProfileName_0() const { return ___interactionProfileName_0; }
	inline String_t** get_address_of_interactionProfileName_0() { return &___interactionProfileName_0; }
	inline void set_interactionProfileName_0(String_t* value)
	{
		___interactionProfileName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactionProfileName_0), (void*)value);
	}

	inline static int32_t get_offset_of_interactionPath_1() { return static_cast<int32_t>(offsetof(ActionBinding_t659CB6F4241434629DC1CD8ACC9A3CAE8D27D3B2, ___interactionPath_1)); }
	inline String_t* get_interactionPath_1() const { return ___interactionPath_1; }
	inline String_t** get_address_of_interactionPath_1() { return &___interactionPath_1; }
	inline void set_interactionPath_1(String_t* value)
	{
		___interactionPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactionPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_userPaths_2() { return static_cast<int32_t>(offsetof(ActionBinding_t659CB6F4241434629DC1CD8ACC9A3CAE8D27D3B2, ___userPaths_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_userPaths_2() const { return ___userPaths_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_userPaths_2() { return &___userPaths_2; }
	inline void set_userPaths_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___userPaths_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userPaths_2), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionMapConfig
struct ActionMapConfig_t7A4E65BA5E4A61EC2C706E91C78E8C81AC230663  : public RuntimeObject
{
public:
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionMapConfig::name
	String_t* ___name_0;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionMapConfig::localizedName
	String_t* ___localizedName_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/DeviceConfig> UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionMapConfig::deviceInfos
	List_1_t053AC621F4C2B8D2BDBBFCEBECB02D0B1C6A6745 * ___deviceInfos_2;
	// System.Collections.Generic.List`1<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionConfig> UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionMapConfig::actions
	List_1_tA396D5F0B3AA6DDDC4343F281F3F8104D80FD408 * ___actions_3;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionMapConfig::desiredInteractionProfile
	String_t* ___desiredInteractionProfile_4;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionMapConfig::manufacturer
	String_t* ___manufacturer_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionMapConfig::serialNumber
	String_t* ___serialNumber_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ActionMapConfig_t7A4E65BA5E4A61EC2C706E91C78E8C81AC230663, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_localizedName_1() { return static_cast<int32_t>(offsetof(ActionMapConfig_t7A4E65BA5E4A61EC2C706E91C78E8C81AC230663, ___localizedName_1)); }
	inline String_t* get_localizedName_1() const { return ___localizedName_1; }
	inline String_t** get_address_of_localizedName_1() { return &___localizedName_1; }
	inline void set_localizedName_1(String_t* value)
	{
		___localizedName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedName_1), (void*)value);
	}

	inline static int32_t get_offset_of_deviceInfos_2() { return static_cast<int32_t>(offsetof(ActionMapConfig_t7A4E65BA5E4A61EC2C706E91C78E8C81AC230663, ___deviceInfos_2)); }
	inline List_1_t053AC621F4C2B8D2BDBBFCEBECB02D0B1C6A6745 * get_deviceInfos_2() const { return ___deviceInfos_2; }
	inline List_1_t053AC621F4C2B8D2BDBBFCEBECB02D0B1C6A6745 ** get_address_of_deviceInfos_2() { return &___deviceInfos_2; }
	inline void set_deviceInfos_2(List_1_t053AC621F4C2B8D2BDBBFCEBECB02D0B1C6A6745 * value)
	{
		___deviceInfos_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceInfos_2), (void*)value);
	}

	inline static int32_t get_offset_of_actions_3() { return static_cast<int32_t>(offsetof(ActionMapConfig_t7A4E65BA5E4A61EC2C706E91C78E8C81AC230663, ___actions_3)); }
	inline List_1_tA396D5F0B3AA6DDDC4343F281F3F8104D80FD408 * get_actions_3() const { return ___actions_3; }
	inline List_1_tA396D5F0B3AA6DDDC4343F281F3F8104D80FD408 ** get_address_of_actions_3() { return &___actions_3; }
	inline void set_actions_3(List_1_tA396D5F0B3AA6DDDC4343F281F3F8104D80FD408 * value)
	{
		___actions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actions_3), (void*)value);
	}

	inline static int32_t get_offset_of_desiredInteractionProfile_4() { return static_cast<int32_t>(offsetof(ActionMapConfig_t7A4E65BA5E4A61EC2C706E91C78E8C81AC230663, ___desiredInteractionProfile_4)); }
	inline String_t* get_desiredInteractionProfile_4() const { return ___desiredInteractionProfile_4; }
	inline String_t** get_address_of_desiredInteractionProfile_4() { return &___desiredInteractionProfile_4; }
	inline void set_desiredInteractionProfile_4(String_t* value)
	{
		___desiredInteractionProfile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___desiredInteractionProfile_4), (void*)value);
	}

	inline static int32_t get_offset_of_manufacturer_5() { return static_cast<int32_t>(offsetof(ActionMapConfig_t7A4E65BA5E4A61EC2C706E91C78E8C81AC230663, ___manufacturer_5)); }
	inline String_t* get_manufacturer_5() const { return ___manufacturer_5; }
	inline String_t** get_address_of_manufacturer_5() { return &___manufacturer_5; }
	inline void set_manufacturer_5(String_t* value)
	{
		___manufacturer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manufacturer_5), (void*)value);
	}

	inline static int32_t get_offset_of_serialNumber_6() { return static_cast<int32_t>(offsetof(ActionMapConfig_t7A4E65BA5E4A61EC2C706E91C78E8C81AC230663, ___serialNumber_6)); }
	inline String_t* get_serialNumber_6() const { return ___serialNumber_6; }
	inline String_t** get_address_of_serialNumber_6() { return &___serialNumber_6; }
	inline void set_serialNumber_6(String_t* value)
	{
		___serialNumber_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serialNumber_6), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/UserPaths
struct UserPaths_t57F18688D146648166E86A36C1C71DDAB8152BE5  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.OpenXR.OpenXRLoaderBase/<>c
struct U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3_StaticFields
{
public:
	// UnityEngine.XR.OpenXR.OpenXRLoaderBase/<>c UnityEngine.XR.OpenXR.OpenXRLoaderBase/<>c::<>9
	U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRFeature,System.Boolean> UnityEngine.XR.OpenXR.OpenXRLoaderBase/<>c::<>9__31_0
	Func_2_t78F1CD6BE32660DBEEC045DEBBE134470250B7AB * ___U3CU3E9__31_0_1;
	// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRFeature,System.Int32> UnityEngine.XR.OpenXR.OpenXRLoaderBase/<>c::<>9__31_1
	Func_2_t0A801B86039F6321711382DBF7ABE368BBCC1A25 * ___U3CU3E9__31_1_2;
	// System.Func`2<UnityEngine.XR.OpenXR.Features.OpenXRFeature,System.String> UnityEngine.XR.OpenXR.OpenXRLoaderBase/<>c::<>9__31_2
	Func_2_tA378341F61416931933EB9D89FCDB35C0A35FA53 * ___U3CU3E9__31_2_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__31_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3_StaticFields, ___U3CU3E9__31_0_1)); }
	inline Func_2_t78F1CD6BE32660DBEEC045DEBBE134470250B7AB * get_U3CU3E9__31_0_1() const { return ___U3CU3E9__31_0_1; }
	inline Func_2_t78F1CD6BE32660DBEEC045DEBBE134470250B7AB ** get_address_of_U3CU3E9__31_0_1() { return &___U3CU3E9__31_0_1; }
	inline void set_U3CU3E9__31_0_1(Func_2_t78F1CD6BE32660DBEEC045DEBBE134470250B7AB * value)
	{
		___U3CU3E9__31_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__31_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__31_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3_StaticFields, ___U3CU3E9__31_1_2)); }
	inline Func_2_t0A801B86039F6321711382DBF7ABE368BBCC1A25 * get_U3CU3E9__31_1_2() const { return ___U3CU3E9__31_1_2; }
	inline Func_2_t0A801B86039F6321711382DBF7ABE368BBCC1A25 ** get_address_of_U3CU3E9__31_1_2() { return &___U3CU3E9__31_1_2; }
	inline void set_U3CU3E9__31_1_2(Func_2_t0A801B86039F6321711382DBF7ABE368BBCC1A25 * value)
	{
		___U3CU3E9__31_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__31_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__31_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3_StaticFields, ___U3CU3E9__31_2_3)); }
	inline Func_2_tA378341F61416931933EB9D89FCDB35C0A35FA53 * get_U3CU3E9__31_2_3() const { return ___U3CU3E9__31_2_3; }
	inline Func_2_tA378341F61416931933EB9D89FCDB35C0A35FA53 ** get_address_of_U3CU3E9__31_2_3() { return &___U3CU3E9__31_2_3; }
	inline void set_U3CU3E9__31_2_3(Func_2_tA378341F61416931933EB9D89FCDB35C0A35FA53 * value)
	{
		___U3CU3E9__31_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__31_2_3), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25
struct U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::pauseTimeInSeconds
	float ___pauseTimeInSeconds_2;
	// UnityEngine.XR.OpenXR.OpenXRRestarter UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::<>4__this
	OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_pauseTimeInSeconds_2() { return static_cast<int32_t>(offsetof(U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43, ___pauseTimeInSeconds_2)); }
	inline float get_pauseTimeInSeconds_2() const { return ___pauseTimeInSeconds_2; }
	inline float* get_address_of_pauseTimeInSeconds_2() { return &___pauseTimeInSeconds_2; }
	inline void set_pauseTimeInSeconds_2(float value)
	{
		___pauseTimeInSeconds_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43, ___U3CU3E4__this_3)); }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__24
struct U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_t2DD20E2036281B0023F5DD0E7FFC9635B4C088F2  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__24::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__24::pauseTimeInSeconds
	float ___pauseTimeInSeconds_2;
	// UnityEngine.XR.OpenXR.OpenXRRestarter UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__24::<>4__this
	OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_t2DD20E2036281B0023F5DD0E7FFC9635B4C088F2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_t2DD20E2036281B0023F5DD0E7FFC9635B4C088F2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_pauseTimeInSeconds_2() { return static_cast<int32_t>(offsetof(U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_t2DD20E2036281B0023F5DD0E7FFC9635B4C088F2, ___pauseTimeInSeconds_2)); }
	inline float get_pauseTimeInSeconds_2() const { return ___pauseTimeInSeconds_2; }
	inline float* get_address_of_pauseTimeInSeconds_2() { return &___pauseTimeInSeconds_2; }
	inline void set_pauseTimeInSeconds_2(float value)
	{
		___pauseTimeInSeconds_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_t2DD20E2036281B0023F5DD0E7FFC9635B4C088F2, ___U3CU3E4__this_3)); }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__26
struct U3CRestartCoroutineU3Ed__26_tC49307D9D8268F189EE679F671D7819D2C729749  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Boolean UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__26::shouldShutdown
	bool ___shouldShutdown_2;
	// UnityEngine.XR.OpenXR.OpenXRRestarter UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__26::<>4__this
	OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * ___U3CU3E4__this_3;
	// System.Boolean UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__26::shouldRestart
	bool ___shouldRestart_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__26_tC49307D9D8268F189EE679F671D7819D2C729749, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__26_tC49307D9D8268F189EE679F671D7819D2C729749, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_shouldShutdown_2() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__26_tC49307D9D8268F189EE679F671D7819D2C729749, ___shouldShutdown_2)); }
	inline bool get_shouldShutdown_2() const { return ___shouldShutdown_2; }
	inline bool* get_address_of_shouldShutdown_2() { return &___shouldShutdown_2; }
	inline void set_shouldShutdown_2(bool value)
	{
		___shouldShutdown_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__26_tC49307D9D8268F189EE679F671D7819D2C729749, ___U3CU3E4__this_3)); }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_shouldRestart_4() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__26_tC49307D9D8268F189EE679F671D7819D2C729749, ___shouldRestart_4)); }
	inline bool get_shouldRestart_4() const { return ___shouldRestart_4; }
	inline bool* get_address_of_shouldRestart_4() { return &___shouldRestart_4; }
	inline void set_shouldRestart_4(bool value)
	{
		___shouldRestart_4 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.XR.OpenXR.Input.Haptic>>
struct InlinedArray_1_tF9A5C434311130D86696D5E758A08A8B3F975007 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t440F6898F2CB5FA8F8C8C5E99D083C4FDBB8A06C * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tA1C277057C882CB1D26081A2C83CC61BC6CB5CC5* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF9A5C434311130D86696D5E758A08A8B3F975007, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF9A5C434311130D86696D5E758A08A8B3F975007, ___firstValue_1)); }
	inline InputProcessor_1_t440F6898F2CB5FA8F8C8C5E99D083C4FDBB8A06C * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t440F6898F2CB5FA8F8C8C5E99D083C4FDBB8A06C ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t440F6898F2CB5FA8F8C8C5E99D083C4FDBB8A06C * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF9A5C434311130D86696D5E758A08A8B3F975007, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tA1C277057C882CB1D26081A2C83CC61BC6CB5CC5* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tA1C277057C882CB1D26081A2C83CC61BC6CB5CC5** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tA1C277057C882CB1D26081A2C83CC61BC6CB5CC5* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Int32>>
struct InlinedArray_1_t3975DE8FDB16D9954E63D66CA3912230140BE049 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tABF07DE71C259EA74DBFF87F0516FBCEDBA40E81 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t13E281AFAFB00FB6270C630A454FC686A3C9DFA8* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3975DE8FDB16D9954E63D66CA3912230140BE049, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3975DE8FDB16D9954E63D66CA3912230140BE049, ___firstValue_1)); }
	inline InputProcessor_1_tABF07DE71C259EA74DBFF87F0516FBCEDBA40E81 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tABF07DE71C259EA74DBFF87F0516FBCEDBA40E81 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tABF07DE71C259EA74DBFF87F0516FBCEDBA40E81 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3975DE8FDB16D9954E63D66CA3912230140BE049, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t13E281AFAFB00FB6270C630A454FC686A3C9DFA8* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t13E281AFAFB00FB6270C630A454FC686A3C9DFA8** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t13E281AFAFB00FB6270C630A454FC686A3C9DFA8* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.XR.PoseState>>
struct InlinedArray_1_tA045EEC42C9E290627A30B2C91D374D17D03538B 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tEA1D419B3D446BFE4B77F1D70B6F7D4C11005368 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t2A860AEBD7D61DBBE8C02E6A6D3F73DEAA5751BC* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tA045EEC42C9E290627A30B2C91D374D17D03538B, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tA045EEC42C9E290627A30B2C91D374D17D03538B, ___firstValue_1)); }
	inline InputProcessor_1_tEA1D419B3D446BFE4B77F1D70B6F7D4C11005368 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tEA1D419B3D446BFE4B77F1D70B6F7D4C11005368 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tEA1D419B3D446BFE4B77F1D70B6F7D4C11005368 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tA045EEC42C9E290627A30B2C91D374D17D03538B, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t2A860AEBD7D61DBBE8C02E6A6D3F73DEAA5751BC* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t2A860AEBD7D61DBBE8C02E6A6D3F73DEAA5751BC** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t2A860AEBD7D61DBBE8C02E6A6D3F73DEAA5751BC* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>
struct InlinedArray_1_t5CCF7F61A9A990644A612EF7FD9BF5E84957C246 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t5D94DB4CAE796E92FE59120B19897BE7A4580E04 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t7482B36593149DD210C0EBC0A2A6318FB3F29930* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t5CCF7F61A9A990644A612EF7FD9BF5E84957C246, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t5CCF7F61A9A990644A612EF7FD9BF5E84957C246, ___firstValue_1)); }
	inline InputProcessor_1_t5D94DB4CAE796E92FE59120B19897BE7A4580E04 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t5D94DB4CAE796E92FE59120B19897BE7A4580E04 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t5D94DB4CAE796E92FE59120B19897BE7A4580E04 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t5CCF7F61A9A990644A612EF7FD9BF5E84957C246, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t7482B36593149DD210C0EBC0A2A6318FB3F29930* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t7482B36593149DD210C0EBC0A2A6318FB3F29930** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t7482B36593149DD210C0EBC0A2A6318FB3F29930* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t8135010B8D8001565931433B4FF0A3948925A9FD 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tC797B512F2641A0AB0844215B781FCBB24FC8EFA * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tE570C3D0B2C8F6ECE9058972450FE9624F6AAD62* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8135010B8D8001565931433B4FF0A3948925A9FD, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8135010B8D8001565931433B4FF0A3948925A9FD, ___firstValue_1)); }
	inline InputProcessor_1_tC797B512F2641A0AB0844215B781FCBB24FC8EFA * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tC797B512F2641A0AB0844215B781FCBB24FC8EFA ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tC797B512F2641A0AB0844215B781FCBB24FC8EFA * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8135010B8D8001565931433B4FF0A3948925A9FD, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tE570C3D0B2C8F6ECE9058972450FE9624F6AAD62* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tE570C3D0B2C8F6ECE9058972450FE9624F6AAD62** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tE570C3D0B2C8F6ECE9058972450FE9624F6AAD62* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_t8C2FE779707E28D9A7EEA2A88ECC33B298F34994 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t97A3DFD1D319E367F13E1723DF8FCF389D67C4F2 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t4E7F1C676ED9874F3A93CFB93A154797EF363BC2* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8C2FE779707E28D9A7EEA2A88ECC33B298F34994, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8C2FE779707E28D9A7EEA2A88ECC33B298F34994, ___firstValue_1)); }
	inline InputProcessor_1_t97A3DFD1D319E367F13E1723DF8FCF389D67C4F2 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t97A3DFD1D319E367F13E1723DF8FCF389D67C4F2 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t97A3DFD1D319E367F13E1723DF8FCF389D67C4F2 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8C2FE779707E28D9A7EEA2A88ECC33B298F34994, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t4E7F1C676ED9874F3A93CFB93A154797EF363BC2* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t4E7F1C676ED9874F3A93CFB93A154797EF363BC2** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t4E7F1C676ED9874F3A93CFB93A154797EF363BC2* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>
struct InlinedArray_1_tD55C396A76293977CF928018673D1D888B7A99B9 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t2B5820D8FCAD8C7864ECD8C574B87CFED83A96CA * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t17D43D53477F87726CEC5E1CE6B5437D27AE8232* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD55C396A76293977CF928018673D1D888B7A99B9, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD55C396A76293977CF928018673D1D888B7A99B9, ___firstValue_1)); }
	inline InputProcessor_1_t2B5820D8FCAD8C7864ECD8C574B87CFED83A96CA * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t2B5820D8FCAD8C7864ECD8C574B87CFED83A96CA ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t2B5820D8FCAD8C7864ECD8C574B87CFED83A96CA * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD55C396A76293977CF928018673D1D888B7A99B9, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t17D43D53477F87726CEC5E1CE6B5437D27AE8232* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t17D43D53477F87726CEC5E1CE6B5437D27AE8232** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t17D43D53477F87726CEC5E1CE6B5437D27AE8232* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58 
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;

public:
	inline static int32_t get_offset_of_m_InterfaceName_0() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58, ___m_InterfaceName_0)); }
	inline String_t* get_m_InterfaceName_0() const { return ___m_InterfaceName_0; }
	inline String_t** get_address_of_m_InterfaceName_0() { return &___m_InterfaceName_0; }
	inline void set_m_InterfaceName_0(String_t* value)
	{
		___m_InterfaceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterfaceName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceClass_1() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58, ___m_DeviceClass_1)); }
	inline String_t* get_m_DeviceClass_1() const { return ___m_DeviceClass_1; }
	inline String_t** get_address_of_m_DeviceClass_1() { return &___m_DeviceClass_1; }
	inline void set_m_DeviceClass_1(String_t* value)
	{
		___m_DeviceClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Manufacturer_2() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58, ___m_Manufacturer_2)); }
	inline String_t* get_m_Manufacturer_2() const { return ___m_Manufacturer_2; }
	inline String_t** get_address_of_m_Manufacturer_2() { return &___m_Manufacturer_2; }
	inline void set_m_Manufacturer_2(String_t* value)
	{
		___m_Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Manufacturer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Product_3() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58, ___m_Product_3)); }
	inline String_t* get_m_Product_3() const { return ___m_Product_3; }
	inline String_t** get_address_of_m_Product_3() { return &___m_Product_3; }
	inline void set_m_Product_3(String_t* value)
	{
		___m_Product_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Product_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Serial_4() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58, ___m_Serial_4)); }
	inline String_t* get_m_Serial_4() const { return ___m_Serial_4; }
	inline String_t** get_address_of_m_Serial_4() { return &___m_Serial_4; }
	inline void set_m_Serial_4(String_t* value)
	{
		___m_Serial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58, ___m_Version_5)); }
	inline String_t* get_m_Version_5() const { return ___m_Version_5; }
	inline String_t** get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(String_t* value)
	{
		___m_Version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capabilities_6() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58, ___m_Capabilities_6)); }
	inline String_t* get_m_Capabilities_6() const { return ___m_Capabilities_6; }
	inline String_t** get_address_of_m_Capabilities_6() { return &___m_Capabilities_6; }
	inline void set_m_Capabilities_6(String_t* value)
	{
		___m_Capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Capabilities_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
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


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.XR.OpenXR.WaitForRestartFinish
struct WaitForRestartFinish_t1E531A0B84387E912CDA4C5079FE2D1D00C1FDC6  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single UnityEngine.XR.OpenXR.WaitForRestartFinish::m_Timeout
	float ___m_Timeout_0;

public:
	inline static int32_t get_offset_of_m_Timeout_0() { return static_cast<int32_t>(offsetof(WaitForRestartFinish_t1E531A0B84387E912CDA4C5079FE2D1D00C1FDC6, ___m_Timeout_0)); }
	inline float get_m_Timeout_0() const { return ___m_Timeout_0; }
	inline float* get_address_of_m_Timeout_0() { return &___m_Timeout_0; }
	inline void set_m_Timeout_0(float value)
	{
		___m_Timeout_0 = value;
	}
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent
struct InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B 
{
public:
	// System.Boolean UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent::success
	bool ___success_0;
	// System.String UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent::runtime
	String_t* ___runtime_1;
	// System.String UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent::runtime_version
	String_t* ___runtime_version_2;
	// System.String UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent::plugin_version
	String_t* ___plugin_version_3;
	// System.String UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent::api_version
	String_t* ___api_version_4;
	// System.String[] UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent::available_extensions
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___available_extensions_5;
	// System.String[] UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent::enabled_extensions
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___enabled_extensions_6;
	// System.String[] UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent::enabled_features
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___enabled_features_7;
	// System.String[] UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent::failed_features
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___failed_features_8;

public:
	inline static int32_t get_offset_of_success_0() { return static_cast<int32_t>(offsetof(InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B, ___success_0)); }
	inline bool get_success_0() const { return ___success_0; }
	inline bool* get_address_of_success_0() { return &___success_0; }
	inline void set_success_0(bool value)
	{
		___success_0 = value;
	}

	inline static int32_t get_offset_of_runtime_1() { return static_cast<int32_t>(offsetof(InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B, ___runtime_1)); }
	inline String_t* get_runtime_1() const { return ___runtime_1; }
	inline String_t** get_address_of_runtime_1() { return &___runtime_1; }
	inline void set_runtime_1(String_t* value)
	{
		___runtime_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runtime_1), (void*)value);
	}

	inline static int32_t get_offset_of_runtime_version_2() { return static_cast<int32_t>(offsetof(InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B, ___runtime_version_2)); }
	inline String_t* get_runtime_version_2() const { return ___runtime_version_2; }
	inline String_t** get_address_of_runtime_version_2() { return &___runtime_version_2; }
	inline void set_runtime_version_2(String_t* value)
	{
		___runtime_version_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runtime_version_2), (void*)value);
	}

	inline static int32_t get_offset_of_plugin_version_3() { return static_cast<int32_t>(offsetof(InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B, ___plugin_version_3)); }
	inline String_t* get_plugin_version_3() const { return ___plugin_version_3; }
	inline String_t** get_address_of_plugin_version_3() { return &___plugin_version_3; }
	inline void set_plugin_version_3(String_t* value)
	{
		___plugin_version_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___plugin_version_3), (void*)value);
	}

	inline static int32_t get_offset_of_api_version_4() { return static_cast<int32_t>(offsetof(InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B, ___api_version_4)); }
	inline String_t* get_api_version_4() const { return ___api_version_4; }
	inline String_t** get_address_of_api_version_4() { return &___api_version_4; }
	inline void set_api_version_4(String_t* value)
	{
		___api_version_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___api_version_4), (void*)value);
	}

	inline static int32_t get_offset_of_available_extensions_5() { return static_cast<int32_t>(offsetof(InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B, ___available_extensions_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_available_extensions_5() const { return ___available_extensions_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_available_extensions_5() { return &___available_extensions_5; }
	inline void set_available_extensions_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___available_extensions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___available_extensions_5), (void*)value);
	}

	inline static int32_t get_offset_of_enabled_extensions_6() { return static_cast<int32_t>(offsetof(InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B, ___enabled_extensions_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_enabled_extensions_6() const { return ___enabled_extensions_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_enabled_extensions_6() { return &___enabled_extensions_6; }
	inline void set_enabled_extensions_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___enabled_extensions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enabled_extensions_6), (void*)value);
	}

	inline static int32_t get_offset_of_enabled_features_7() { return static_cast<int32_t>(offsetof(InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B, ___enabled_features_7)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_enabled_features_7() const { return ___enabled_features_7; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_enabled_features_7() { return &___enabled_features_7; }
	inline void set_enabled_features_7(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___enabled_features_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enabled_features_7), (void*)value);
	}

	inline static int32_t get_offset_of_failed_features_8() { return static_cast<int32_t>(offsetof(InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B, ___failed_features_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_failed_features_8() const { return ___failed_features_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_failed_features_8() { return &___failed_features_8; }
	inline void set_failed_features_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___failed_features_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___failed_features_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent
struct InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B_marshaled_pinvoke
{
	int32_t ___success_0;
	char* ___runtime_1;
	char* ___runtime_version_2;
	char* ___plugin_version_3;
	char* ___api_version_4;
	char** ___available_extensions_5;
	char** ___enabled_extensions_6;
	char** ___enabled_features_7;
	char** ___failed_features_8;
};
// Native definition for COM marshalling of UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent
struct InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B_marshaled_com
{
	int32_t ___success_0;
	Il2CppChar* ___runtime_1;
	Il2CppChar* ___runtime_version_2;
	Il2CppChar* ___plugin_version_3;
	Il2CppChar* ___api_version_4;
	Il2CppChar** ___available_extensions_5;
	Il2CppChar** ___enabled_extensions_6;
	Il2CppChar** ___enabled_features_7;
	Il2CppChar** ___failed_features_8;
};

// UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedBinding
struct SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F 
{
public:
	// System.UInt64 UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedBinding::actionId
	uint64_t ___actionId_0;
	// System.String UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedBinding::path
	String_t* ___path_1;

public:
	inline static int32_t get_offset_of_actionId_0() { return static_cast<int32_t>(offsetof(SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F, ___actionId_0)); }
	inline uint64_t get_actionId_0() const { return ___actionId_0; }
	inline uint64_t* get_address_of_actionId_0() { return &___actionId_0; }
	inline void set_actionId_0(uint64_t value)
	{
		___actionId_0 = value;
	}

	inline static int32_t get_offset_of_path_1() { return static_cast<int32_t>(offsetof(SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F, ___path_1)); }
	inline String_t* get_path_1() const { return ___path_1; }
	inline String_t** get_address_of_path_1() { return &___path_1; }
	inline void set_path_1(String_t* value)
	{
		___path_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedBinding
struct SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F_marshaled_pinvoke
{
	uint64_t ___actionId_0;
	char* ___path_1;
};
// Native definition for COM marshalling of UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedBinding
struct SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F_marshaled_com
{
	uint64_t ___actionId_0;
	Il2CppChar* ___path_1;
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


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.XR.InputDeviceCharacteristics
struct InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputDeviceCommand
struct InputDeviceCommand_tBA7404132CBAC1E564F79E5B8B6A258527976AD3 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputDeviceCommand::type
					FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___type_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___type_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_5_OffsetPadding[4];
					// System.Int32 UnityEngine.InputSystem.LowLevel.InputDeviceCommand::sizeInBytes
					int32_t ___sizeInBytes_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___sizeInBytes_5_OffsetPadding_forAlignmentOnly[4];
					int32_t ___sizeInBytes_5_forAlignmentOnly;
				};
			};
		};
		uint8_t InputDeviceCommand_tBA7404132CBAC1E564F79E5B8B6A258527976AD3__padding[8];
	};

public:
	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(InputDeviceCommand_tBA7404132CBAC1E564F79E5B8B6A258527976AD3, ___type_4)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_type_4() const { return ___type_4; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___type_4 = value;
	}

	inline static int32_t get_offset_of_sizeInBytes_5() { return static_cast<int32_t>(offsetof(InputDeviceCommand_tBA7404132CBAC1E564F79E5B8B6A258527976AD3, ___sizeInBytes_5)); }
	inline int32_t get_sizeInBytes_5() const { return ___sizeInBytes_5; }
	inline int32_t* get_address_of_sizeInBytes_5() { return &___sizeInBytes_5; }
	inline void set_sizeInBytes_5(int32_t value)
	{
		___sizeInBytes_5 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B, ___U3CformatU3Ek__BackingField_33)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_U3CformatU3Ek__BackingField_33() const { return ___U3CformatU3Ek__BackingField_33; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_U3CformatU3Ek__BackingField_33() { return &___U3CformatU3Ek__BackingField_33; }
	inline void set_U3CformatU3Ek__BackingField_33(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___U3CformatU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B, ___U3CbyteOffsetU3Ek__BackingField_34)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_34() const { return ___U3CbyteOffsetU3Ek__BackingField_34; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_34() { return &___U3CbyteOffsetU3Ek__BackingField_34; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_34(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B, ___U3CbitOffsetU3Ek__BackingField_35)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_35() const { return ___U3CbitOffsetU3Ek__BackingField_35; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_35() { return &___U3CbitOffsetU3Ek__BackingField_35; }
	inline void set_U3CbitOffsetU3Ek__BackingField_35(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B, ___U3CsizeInBitsU3Ek__BackingField_36)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_36() const { return ___U3CsizeInBitsU3Ek__BackingField_36; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_36() { return &___U3CsizeInBitsU3Ek__BackingField_36; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_36(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_36 = value;
	}
};

struct InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector3Byte_32;

public:
	inline static int32_t get_offset_of_FormatBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatBit_2)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatBit_2() const { return ___FormatBit_2; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatBit_2() { return &___FormatBit_2; }
	inline void set_FormatBit_2(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatBit_2 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_4() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatSBit_4)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatSBit_4() const { return ___FormatSBit_4; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatSBit_4() { return &___FormatSBit_4; }
	inline void set_FormatSBit_4(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatSBit_4 = value;
	}

	inline static int32_t get_offset_of_FormatInt_6() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatInt_6)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatInt_6() const { return ___FormatInt_6; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatInt_6() { return &___FormatInt_6; }
	inline void set_FormatInt_6(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatInt_6 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_8() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatUInt_8)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatUInt_8() const { return ___FormatUInt_8; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatUInt_8() { return &___FormatUInt_8; }
	inline void set_FormatUInt_8(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatUInt_8 = value;
	}

	inline static int32_t get_offset_of_FormatShort_10() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatShort_10)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatShort_10() const { return ___FormatShort_10; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatShort_10() { return &___FormatShort_10; }
	inline void set_FormatShort_10(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatShort_10 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_12() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatUShort_12)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatUShort_12() const { return ___FormatUShort_12; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatUShort_12() { return &___FormatUShort_12; }
	inline void set_FormatUShort_12(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatUShort_12 = value;
	}

	inline static int32_t get_offset_of_FormatByte_14() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatByte_14)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatByte_14() const { return ___FormatByte_14; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatByte_14() { return &___FormatByte_14; }
	inline void set_FormatByte_14(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatByte_14 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_16() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatSByte_16)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatSByte_16() const { return ___FormatSByte_16; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatSByte_16() { return &___FormatSByte_16; }
	inline void set_FormatSByte_16(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatSByte_16 = value;
	}

	inline static int32_t get_offset_of_FormatLong_18() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatLong_18)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatLong_18() const { return ___FormatLong_18; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatLong_18() { return &___FormatLong_18; }
	inline void set_FormatLong_18(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatLong_18 = value;
	}

	inline static int32_t get_offset_of_FormatULong_20() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatULong_20)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatULong_20() const { return ___FormatULong_20; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatULong_20() { return &___FormatULong_20; }
	inline void set_FormatULong_20(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatULong_20 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_22() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatFloat_22)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatFloat_22() const { return ___FormatFloat_22; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatFloat_22() { return &___FormatFloat_22; }
	inline void set_FormatFloat_22(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatFloat_22 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_24() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatDouble_24)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatDouble_24() const { return ___FormatDouble_24; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatDouble_24() { return &___FormatDouble_24; }
	inline void set_FormatDouble_24(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatDouble_24 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_26() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector2_26)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector2_26() const { return ___FormatVector2_26; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector2_26() { return &___FormatVector2_26; }
	inline void set_FormatVector2_26(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector2_26 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_27() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector3_27)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector3_27() const { return ___FormatVector3_27; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector3_27() { return &___FormatVector3_27; }
	inline void set_FormatVector3_27(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector3_27 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_28() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatQuaternion_28)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatQuaternion_28() const { return ___FormatQuaternion_28; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatQuaternion_28() { return &___FormatQuaternion_28; }
	inline void set_FormatQuaternion_28(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatQuaternion_28 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_29() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector2Short_29)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector2Short_29() const { return ___FormatVector2Short_29; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector2Short_29() { return &___FormatVector2Short_29; }
	inline void set_FormatVector2Short_29(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector2Short_29 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_30() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector3Short_30)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector3Short_30() const { return ___FormatVector3Short_30; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector3Short_30() { return &___FormatVector3Short_30; }
	inline void set_FormatVector3Short_30(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector3Short_30 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_31() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector2Byte_31)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector2Byte_31() const { return ___FormatVector2Byte_31; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector2Byte_31() { return &___FormatVector2Byte_31; }
	inline void set_FormatVector2Byte_31(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector2Byte_31 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_32() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector3Byte_32)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector3Byte_32() const { return ___FormatVector3Byte_32; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector3Byte_32() { return &___FormatVector3Byte_32; }
	inline void set_FormatVector3Byte_32(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector3Byte_32 = value;
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


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Controls.AxisControl/Clamp
struct Clamp_tBAA9F43891E7A880B0DE8A650A254CD0E89C36BD 
{
public:
	// System.Int32 UnityEngine.InputSystem.Controls.AxisControl/Clamp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Clamp_tBAA9F43891E7A880B0DE8A650A254CD0E89C36BD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t43CF0138618503E94B4811FD6CF66F13F0186787 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t43CF0138618503E94B4811FD6CF66F13F0186787, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_tF2567D99F286E930FC6B04C6A3CCB2E65B1D762D 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceFlags_tF2567D99F286E930FC6B04C6A3CCB2E65B1D762D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.Features.OpenXRFeature/LoaderEvent
struct LoaderEvent_t2D83FB41679351B2C08CEF50CD4B108E5DC49CF8 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature/LoaderEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoaderEvent_t2D83FB41679351B2C08CEF50CD4B108E5DC49CF8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.Features.OpenXRFeature/NativeEvent
struct NativeEvent_t94138199EE1CC201C255637BA0005DC42F64E440 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature/NativeEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeEvent_t94138199EE1CC201C255637BA0005DC42F64E440, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.Input.OpenXRInput/InputSourceNameFlags
struct InputSourceNameFlags_t5ADC6CB2339D967EBB19BB85EA2ABB928B20E5DF 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.Input.OpenXRInput/InputSourceNameFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceNameFlags_t5ADC6CB2339D967EBB19BB85EA2ABB928B20E5DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedGuid
struct SerializedGuid_t3C7C9D4472B98A356F6ECF94E35FF480200DAD05 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Guid UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedGuid::guid
			Guid_t  ___guid_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Guid_t  ___guid_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedGuid::ulong1
			uint64_t ___ulong1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ulong1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulong2_2_OffsetPadding[8];
			// System.UInt64 UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedGuid::ulong2
			uint64_t ___ulong2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulong2_2_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulong2_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_guid_0() { return static_cast<int32_t>(offsetof(SerializedGuid_t3C7C9D4472B98A356F6ECF94E35FF480200DAD05, ___guid_0)); }
	inline Guid_t  get_guid_0() const { return ___guid_0; }
	inline Guid_t * get_address_of_guid_0() { return &___guid_0; }
	inline void set_guid_0(Guid_t  value)
	{
		___guid_0 = value;
	}

	inline static int32_t get_offset_of_ulong1_1() { return static_cast<int32_t>(offsetof(SerializedGuid_t3C7C9D4472B98A356F6ECF94E35FF480200DAD05, ___ulong1_1)); }
	inline uint64_t get_ulong1_1() const { return ___ulong1_1; }
	inline uint64_t* get_address_of_ulong1_1() { return &___ulong1_1; }
	inline void set_ulong1_1(uint64_t value)
	{
		___ulong1_1 = value;
	}

	inline static int32_t get_offset_of_ulong2_2() { return static_cast<int32_t>(offsetof(SerializedGuid_t3C7C9D4472B98A356F6ECF94E35FF480200DAD05, ___ulong2_2)); }
	inline uint64_t get_ulong2_2() const { return ___ulong2_2; }
	inline uint64_t* get_address_of_ulong2_2() { return &___ulong2_2; }
	inline void set_ulong2_2(uint64_t value)
	{
		___ulong2_2 = value;
	}
};


// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionType
struct ActionType_t0D177AB2DCBE62406C8CD6020E7F62B29190D7DD 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActionType_t0D177AB2DCBE62406C8CD6020E7F62B29190D7DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.OpenXRLoaderBase/LoaderState
struct LoaderState_tFE8CD709CCCECAB5363F147A3D49653B4AF7AEC0 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRLoaderBase/LoaderState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoaderState_tFE8CD709CCCECAB5363F147A3D49653B4AF7AEC0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.OpenXRSettings/DepthSubmissionMode
struct DepthSubmissionMode_t094572DB01BB3B9FF370F53A253946676089ED6A 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRSettings/DepthSubmissionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DepthSubmissionMode_t094572DB01BB3B9FF370F53A253946676089ED6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.OpenXRSettings/RenderMode
struct RenderMode_t4809990A1DAEA4E383CD64A87CB64C9B93AD79E1 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRSettings/RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_t4809990A1DAEA4E383CD64A87CB64C9B93AD79E1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
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


// UnityEngine.XR.OpenXR.Input.OpenXRInput/GetInternalDeviceIdCommand
struct GetInternalDeviceIdCommand_tDABB67AE984187CD7533AD65FBF96F9587004A98 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.XR.OpenXR.Input.OpenXRInput/GetInternalDeviceIdCommand::baseCommand
					InputDeviceCommand_tBA7404132CBAC1E564F79E5B8B6A258527976AD3  ___baseCommand_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_tBA7404132CBAC1E564F79E5B8B6A258527976AD3  ___baseCommand_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding[8];
					// System.UInt32 UnityEngine.XR.OpenXR.Input.OpenXRInput/GetInternalDeviceIdCommand::deviceId
					uint32_t ___deviceId_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceId_3_OffsetPadding_forAlignmentOnly[8];
					uint32_t ___deviceId_3_forAlignmentOnly;
				};
			};
		};
		uint8_t GetInternalDeviceIdCommand_tDABB67AE984187CD7533AD65FBF96F9587004A98__padding[12];
	};

public:
	inline static int32_t get_offset_of_baseCommand_2() { return static_cast<int32_t>(offsetof(GetInternalDeviceIdCommand_tDABB67AE984187CD7533AD65FBF96F9587004A98, ___baseCommand_2)); }
	inline InputDeviceCommand_tBA7404132CBAC1E564F79E5B8B6A258527976AD3  get_baseCommand_2() const { return ___baseCommand_2; }
	inline InputDeviceCommand_tBA7404132CBAC1E564F79E5B8B6A258527976AD3 * get_address_of_baseCommand_2() { return &___baseCommand_2; }
	inline void set_baseCommand_2(InputDeviceCommand_tBA7404132CBAC1E564F79E5B8B6A258527976AD3  value)
	{
		___baseCommand_2 = value;
	}

	inline static int32_t get_offset_of_deviceId_3() { return static_cast<int32_t>(offsetof(GetInternalDeviceIdCommand_tDABB67AE984187CD7533AD65FBF96F9587004A98, ___deviceId_3)); }
	inline uint32_t get_deviceId_3() const { return ___deviceId_3; }
	inline uint32_t* get_address_of_deviceId_3() { return &___deviceId_3; }
	inline void set_deviceId_3(uint32_t value)
	{
		___deviceId_3 = value;
	}
};


// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionConfig
struct ActionConfig_t369A0AD8D90D166FA237468147267699CF53B57F  : public RuntimeObject
{
public:
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionConfig::name
	String_t* ___name_0;
	// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionType UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionConfig::type
	int32_t ___type_1;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionConfig::localizedName
	String_t* ___localizedName_2;
	// System.Collections.Generic.List`1<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding> UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionConfig::bindings
	List_1_t9E127897AEC2B39D662240E51C3924EC17C19AE8 * ___bindings_3;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionConfig::usages
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___usages_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ActionConfig_t369A0AD8D90D166FA237468147267699CF53B57F, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ActionConfig_t369A0AD8D90D166FA237468147267699CF53B57F, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_localizedName_2() { return static_cast<int32_t>(offsetof(ActionConfig_t369A0AD8D90D166FA237468147267699CF53B57F, ___localizedName_2)); }
	inline String_t* get_localizedName_2() const { return ___localizedName_2; }
	inline String_t** get_address_of_localizedName_2() { return &___localizedName_2; }
	inline void set_localizedName_2(String_t* value)
	{
		___localizedName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedName_2), (void*)value);
	}

	inline static int32_t get_offset_of_bindings_3() { return static_cast<int32_t>(offsetof(ActionConfig_t369A0AD8D90D166FA237468147267699CF53B57F, ___bindings_3)); }
	inline List_1_t9E127897AEC2B39D662240E51C3924EC17C19AE8 * get_bindings_3() const { return ___bindings_3; }
	inline List_1_t9E127897AEC2B39D662240E51C3924EC17C19AE8 ** get_address_of_bindings_3() { return &___bindings_3; }
	inline void set_bindings_3(List_1_t9E127897AEC2B39D662240E51C3924EC17C19AE8 * value)
	{
		___bindings_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bindings_3), (void*)value);
	}

	inline static int32_t get_offset_of_usages_4() { return static_cast<int32_t>(offsetof(ActionConfig_t369A0AD8D90D166FA237468147267699CF53B57F, ___usages_4)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_usages_4() const { return ___usages_4; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_usages_4() { return &___usages_4; }
	inline void set_usages_4(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___usages_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usages_4), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/DeviceConfig
struct DeviceConfig_tBC37C5EA2384BCB69BD0153C3E1387E4DB5461BF  : public RuntimeObject
{
public:
	// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/DeviceConfig::characteristics
	uint32_t ___characteristics_0;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/DeviceConfig::userPath
	String_t* ___userPath_1;

public:
	inline static int32_t get_offset_of_characteristics_0() { return static_cast<int32_t>(offsetof(DeviceConfig_tBC37C5EA2384BCB69BD0153C3E1387E4DB5461BF, ___characteristics_0)); }
	inline uint32_t get_characteristics_0() const { return ___characteristics_0; }
	inline uint32_t* get_address_of_characteristics_0() { return &___characteristics_0; }
	inline void set_characteristics_0(uint32_t value)
	{
		___characteristics_0 = value;
	}

	inline static int32_t get_offset_of_userPath_1() { return static_cast<int32_t>(offsetof(DeviceConfig_tBC37C5EA2384BCB69BD0153C3E1387E4DB5461BF, ___userPath_1)); }
	inline String_t* get_userPath_1() const { return ___userPath_1; }
	inline String_t** get_address_of_userPath_1() { return &___userPath_1; }
	inline void set_userPath_1(String_t* value)
	{
		___userPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userPath_1), (void*)value);
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.InputControl
struct InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  ___m_MaxValue_20;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_StateBlock_0)); }
	inline InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Name_1)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Layout_7)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Variants_8)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Device_9)); }
	inline InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Parent_10)); }
	inline InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_18() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_DefaultState_18)); }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  get_m_DefaultState_18() const { return ___m_DefaultState_18; }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8 * get_address_of_m_DefaultState_18() { return &___m_DefaultState_18; }
	inline void set_m_DefaultState_18(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  value)
	{
		___m_DefaultState_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_MinValue_19)); }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8 * get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_MaxValue_20)); }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8 * get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  value)
	{
		___m_MaxValue_20 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::internalFieldsUpdated
	bool ___internalFieldsUpdated_14;

public:
	inline static int32_t get_offset_of_m_enabled_4() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___m_enabled_4)); }
	inline bool get_m_enabled_4() const { return ___m_enabled_4; }
	inline bool* get_address_of_m_enabled_4() { return &___m_enabled_4; }
	inline void set_m_enabled_4(bool value)
	{
		___m_enabled_4 = value;
	}

	inline static int32_t get_offset_of_U3CfailedInitializationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___U3CfailedInitializationU3Ek__BackingField_5)); }
	inline bool get_U3CfailedInitializationU3Ek__BackingField_5() const { return ___U3CfailedInitializationU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CfailedInitializationU3Ek__BackingField_5() { return &___U3CfailedInitializationU3Ek__BackingField_5; }
	inline void set_U3CfailedInitializationU3Ek__BackingField_5(bool value)
	{
		___U3CfailedInitializationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_nameUi_7() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___nameUi_7)); }
	inline String_t* get_nameUi_7() const { return ___nameUi_7; }
	inline String_t** get_address_of_nameUi_7() { return &___nameUi_7; }
	inline void set_nameUi_7(String_t* value)
	{
		___nameUi_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameUi_7), (void*)value);
	}

	inline static int32_t get_offset_of_version_8() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___version_8)); }
	inline String_t* get_version_8() const { return ___version_8; }
	inline String_t** get_address_of_version_8() { return &___version_8; }
	inline void set_version_8(String_t* value)
	{
		___version_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_8), (void*)value);
	}

	inline static int32_t get_offset_of_featureIdInternal_9() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___featureIdInternal_9)); }
	inline String_t* get_featureIdInternal_9() const { return ___featureIdInternal_9; }
	inline String_t** get_address_of_featureIdInternal_9() { return &___featureIdInternal_9; }
	inline void set_featureIdInternal_9(String_t* value)
	{
		___featureIdInternal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___featureIdInternal_9), (void*)value);
	}

	inline static int32_t get_offset_of_openxrExtensionStrings_10() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___openxrExtensionStrings_10)); }
	inline String_t* get_openxrExtensionStrings_10() const { return ___openxrExtensionStrings_10; }
	inline String_t** get_address_of_openxrExtensionStrings_10() { return &___openxrExtensionStrings_10; }
	inline void set_openxrExtensionStrings_10(String_t* value)
	{
		___openxrExtensionStrings_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___openxrExtensionStrings_10), (void*)value);
	}

	inline static int32_t get_offset_of_company_11() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___company_11)); }
	inline String_t* get_company_11() const { return ___company_11; }
	inline String_t** get_address_of_company_11() { return &___company_11; }
	inline void set_company_11(String_t* value)
	{
		___company_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___company_11), (void*)value);
	}

	inline static int32_t get_offset_of_priority_12() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___priority_12)); }
	inline int32_t get_priority_12() const { return ___priority_12; }
	inline int32_t* get_address_of_priority_12() { return &___priority_12; }
	inline void set_priority_12(int32_t value)
	{
		___priority_12 = value;
	}

	inline static int32_t get_offset_of_required_13() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___required_13)); }
	inline bool get_required_13() const { return ___required_13; }
	inline bool* get_address_of_required_13() { return &___required_13; }
	inline void set_required_13(bool value)
	{
		___required_13 = value;
	}

	inline static int32_t get_offset_of_internalFieldsUpdated_14() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___internalFieldsUpdated_14)); }
	inline bool get_internalFieldsUpdated_14() const { return ___internalFieldsUpdated_14; }
	inline bool* get_address_of_internalFieldsUpdated_14() { return &___internalFieldsUpdated_14; }
	inline void set_internalFieldsUpdated_14(bool value)
	{
		___internalFieldsUpdated_14 = value;
	}
};

struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA_StaticFields
{
public:
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CrequiredFeatureFailedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA_StaticFields, ___U3CrequiredFeatureFailedU3Ek__BackingField_6)); }
	inline bool get_U3CrequiredFeatureFailedU3Ek__BackingField_6() const { return ___U3CrequiredFeatureFailedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CrequiredFeatureFailedU3Ek__BackingField_6() { return &___U3CrequiredFeatureFailedU3Ek__BackingField_6; }
	inline void set_U3CrequiredFeatureFailedU3Ek__BackingField_6(bool value)
	{
		___U3CrequiredFeatureFailedU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;

public:
	inline static int32_t get_offset_of_m_LoaderManagerInstance_6() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_LoaderManagerInstance_6)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_m_LoaderManagerInstance_6() const { return ___m_LoaderManagerInstance_6; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_m_LoaderManagerInstance_6() { return &___m_LoaderManagerInstance_6; }
	inline void set_m_LoaderManagerInstance_6(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___m_LoaderManagerInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoaderManagerInstance_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_InitManagerOnStart_7() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_InitManagerOnStart_7)); }
	inline bool get_m_InitManagerOnStart_7() const { return ___m_InitManagerOnStart_7; }
	inline bool* get_address_of_m_InitManagerOnStart_7() { return &___m_InitManagerOnStart_7; }
	inline void set_m_InitManagerOnStart_7(bool value)
	{
		___m_InitManagerOnStart_7 = value;
	}

	inline static int32_t get_offset_of_m_XRManager_8() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_XRManager_8)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_m_XRManager_8() const { return ___m_XRManager_8; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_m_XRManager_8() { return &___m_XRManager_8; }
	inline void set_m_XRManager_8(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___m_XRManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XRManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProviderIntialized_9() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_ProviderIntialized_9)); }
	inline bool get_m_ProviderIntialized_9() const { return ___m_ProviderIntialized_9; }
	inline bool* get_address_of_m_ProviderIntialized_9() { return &___m_ProviderIntialized_9; }
	inline void set_m_ProviderIntialized_9(bool value)
	{
		___m_ProviderIntialized_9 = value;
	}

	inline static int32_t get_offset_of_m_ProviderStarted_10() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_ProviderStarted_10)); }
	inline bool get_m_ProviderStarted_10() const { return ___m_ProviderStarted_10; }
	inline bool* get_address_of_m_ProviderStarted_10() { return &___m_ProviderStarted_10; }
	inline void set_m_ProviderStarted_10(bool value)
	{
		___m_ProviderStarted_10 = value;
	}
};

struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields
{
public:
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * ___s_RuntimeSettingsInstance_5;

public:
	inline static int32_t get_offset_of_k_SettingsKey_4() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields, ___k_SettingsKey_4)); }
	inline String_t* get_k_SettingsKey_4() const { return ___k_SettingsKey_4; }
	inline String_t** get_address_of_k_SettingsKey_4() { return &___k_SettingsKey_4; }
	inline void set_k_SettingsKey_4(String_t* value)
	{
		___k_SettingsKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SettingsKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_RuntimeSettingsInstance_5() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields, ___s_RuntimeSettingsInstance_5)); }
	inline XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * get_s_RuntimeSettingsInstance_5() const { return ___s_RuntimeSettingsInstance_5; }
	inline XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 ** get_address_of_s_RuntimeSettingsInstance_5() { return &___s_RuntimeSettingsInstance_5; }
	inline void set_s_RuntimeSettingsInstance_5(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * value)
	{
		___s_RuntimeSettingsInstance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RuntimeSettingsInstance_5), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___U3CactiveLoaderU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_Loaders_8)); }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredLoaders_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RegisteredLoaders_9)); }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * get_m_RegisteredLoaders_9() const { return ___m_RegisteredLoaders_9; }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 ** get_address_of_m_RegisteredLoaders_9() { return &___m_RegisteredLoaders_9; }
	inline void set_m_RegisteredLoaders_9(HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * value)
	{
		___m_RegisteredLoaders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredLoaders_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveLoaderU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___U3CactiveLoaderU3Ek__BackingField_10)); }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * get_U3CactiveLoaderU3Ek__BackingField_10() const { return ___U3CactiveLoaderU3Ek__BackingField_10; }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B ** get_address_of_U3CactiveLoaderU3Ek__BackingField_10() { return &___U3CactiveLoaderU3Ek__BackingField_10; }
	inline void set_U3CactiveLoaderU3Ek__BackingField_10(XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * value)
	{
		___U3CactiveLoaderU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactiveLoaderU3Ek__BackingField_10), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.OpenXRLoaderBase/ReceiveNativeEventDelegate
struct ReceiveNativeEventDelegate_t34641E86FBD0380CE83C7C3827A33D9D531991D7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.XR.OpenXR.Input.Haptic>
struct InputControl_1_t55967B0EFD1D70D42325E829E7530774536E609F  : public InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tF9A5C434311130D86696D5E758A08A8B3F975007  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t55967B0EFD1D70D42325E829E7530774536E609F, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_tF9A5C434311130D86696D5E758A08A8B3F975007  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_tF9A5C434311130D86696D5E758A08A8B3F975007 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_tF9A5C434311130D86696D5E758A08A8B3F975007  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<System.Int32>
struct InputControl_1_t6618FCBCC55859862C1BA9DF447023B47F876153  : public InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t3975DE8FDB16D9954E63D66CA3912230140BE049  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t6618FCBCC55859862C1BA9DF447023B47F876153, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t3975DE8FDB16D9954E63D66CA3912230140BE049  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t3975DE8FDB16D9954E63D66CA3912230140BE049 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t3975DE8FDB16D9954E63D66CA3912230140BE049  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.InputSystem.XR.PoseState>
struct InputControl_1_tD7EA1D7EB2FFEF94FE2AFEEAEC7D086A3B0C0EF5  : public InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tA045EEC42C9E290627A30B2C91D374D17D03538B  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tD7EA1D7EB2FFEF94FE2AFEEAEC7D086A3B0C0EF5, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_tA045EEC42C9E290627A30B2C91D374D17D03538B  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_tA045EEC42C9E290627A30B2C91D374D17D03538B * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_tA045EEC42C9E290627A30B2C91D374D17D03538B  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>
struct InputControl_1_t87C8668A49FF17120FE3EDBF72EBAE2B7A04479F  : public InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t5CCF7F61A9A990644A612EF7FD9BF5E84957C246  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t87C8668A49FF17120FE3EDBF72EBAE2B7A04479F, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t5CCF7F61A9A990644A612EF7FD9BF5E84957C246  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t5CCF7F61A9A990644A612EF7FD9BF5E84957C246 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t5CCF7F61A9A990644A612EF7FD9BF5E84957C246  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_t011854B2ED3F016A34A91350FC9B9055E1E820D3  : public InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t8135010B8D8001565931433B4FF0A3948925A9FD  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t011854B2ED3F016A34A91350FC9B9055E1E820D3, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t8135010B8D8001565931433B4FF0A3948925A9FD  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t8135010B8D8001565931433B4FF0A3948925A9FD * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t8135010B8D8001565931433B4FF0A3948925A9FD  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_t0C6774D908F28CC2187A664A1D73FB294F808163  : public InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t8C2FE779707E28D9A7EEA2A88ECC33B298F34994  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t0C6774D908F28CC2187A664A1D73FB294F808163, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t8C2FE779707E28D9A7EEA2A88ECC33B298F34994  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t8C2FE779707E28D9A7EEA2A88ECC33B298F34994 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t8C2FE779707E28D9A7EEA2A88ECC33B298F34994  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>
struct InputControl_1_tCFDDE43FA5D792323D720A28E6A8B13AF68455E7  : public InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tD55C396A76293977CF928018673D1D888B7A99B9  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tCFDDE43FA5D792323D720A28E6A8B13AF68455E7, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_tD55C396A76293977CF928018673D1D888B7A99B9  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_tD55C396A76293977CF928018673D1D888B7A99B9 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_tD55C396A76293977CF928018673D1D888B7A99B9  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputDevice
struct InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87  : public InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1
{
public:
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58  ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_StateOffsetToControlMap_35;

public:
	inline static int32_t get_offset_of_m_DeviceFlags_24() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_DeviceFlags_24)); }
	inline int32_t get_m_DeviceFlags_24() const { return ___m_DeviceFlags_24; }
	inline int32_t* get_address_of_m_DeviceFlags_24() { return &___m_DeviceFlags_24; }
	inline void set_m_DeviceFlags_24(int32_t value)
	{
		___m_DeviceFlags_24 = value;
	}

	inline static int32_t get_offset_of_m_DeviceId_25() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_DeviceId_25)); }
	inline int32_t get_m_DeviceId_25() const { return ___m_DeviceId_25; }
	inline int32_t* get_address_of_m_DeviceId_25() { return &___m_DeviceId_25; }
	inline void set_m_DeviceId_25(int32_t value)
	{
		___m_DeviceId_25 = value;
	}

	inline static int32_t get_offset_of_m_ParticipantId_26() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_ParticipantId_26)); }
	inline int32_t get_m_ParticipantId_26() const { return ___m_ParticipantId_26; }
	inline int32_t* get_address_of_m_ParticipantId_26() { return &___m_ParticipantId_26; }
	inline void set_m_ParticipantId_26(int32_t value)
	{
		___m_ParticipantId_26 = value;
	}

	inline static int32_t get_offset_of_m_DeviceIndex_27() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_DeviceIndex_27)); }
	inline int32_t get_m_DeviceIndex_27() const { return ___m_DeviceIndex_27; }
	inline int32_t* get_address_of_m_DeviceIndex_27() { return &___m_DeviceIndex_27; }
	inline void set_m_DeviceIndex_27(int32_t value)
	{
		___m_DeviceIndex_27 = value;
	}

	inline static int32_t get_offset_of_m_Description_28() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_Description_28)); }
	inline InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58  get_m_Description_28() const { return ___m_Description_28; }
	inline InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58 * get_address_of_m_Description_28() { return &___m_Description_28; }
	inline void set_m_Description_28(InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58  value)
	{
		___m_Description_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_InterfaceName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Capabilities_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_LastUpdateTimeInternal_29() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_LastUpdateTimeInternal_29)); }
	inline double get_m_LastUpdateTimeInternal_29() const { return ___m_LastUpdateTimeInternal_29; }
	inline double* get_address_of_m_LastUpdateTimeInternal_29() { return &___m_LastUpdateTimeInternal_29; }
	inline void set_m_LastUpdateTimeInternal_29(double value)
	{
		___m_LastUpdateTimeInternal_29 = value;
	}

	inline static int32_t get_offset_of_m_CurrentUpdateStepCount_30() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_CurrentUpdateStepCount_30)); }
	inline uint32_t get_m_CurrentUpdateStepCount_30() const { return ___m_CurrentUpdateStepCount_30; }
	inline uint32_t* get_address_of_m_CurrentUpdateStepCount_30() { return &___m_CurrentUpdateStepCount_30; }
	inline void set_m_CurrentUpdateStepCount_30(uint32_t value)
	{
		___m_CurrentUpdateStepCount_30 = value;
	}

	inline static int32_t get_offset_of_m_AliasesForEachControl_31() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_AliasesForEachControl_31)); }
	inline InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* get_m_AliasesForEachControl_31() const { return ___m_AliasesForEachControl_31; }
	inline InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4** get_address_of_m_AliasesForEachControl_31() { return &___m_AliasesForEachControl_31; }
	inline void set_m_AliasesForEachControl_31(InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* value)
	{
		___m_AliasesForEachControl_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AliasesForEachControl_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsagesForEachControl_32() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_UsagesForEachControl_32)); }
	inline InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* get_m_UsagesForEachControl_32() const { return ___m_UsagesForEachControl_32; }
	inline InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4** get_address_of_m_UsagesForEachControl_32() { return &___m_UsagesForEachControl_32; }
	inline void set_m_UsagesForEachControl_32(InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* value)
	{
		___m_UsagesForEachControl_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsagesForEachControl_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageToControl_33() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_UsageToControl_33)); }
	inline InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* get_m_UsageToControl_33() const { return ___m_UsageToControl_33; }
	inline InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680** get_address_of_m_UsageToControl_33() { return &___m_UsageToControl_33; }
	inline void set_m_UsageToControl_33(InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* value)
	{
		___m_UsageToControl_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsageToControl_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildrenForEachControl_34() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_ChildrenForEachControl_34)); }
	inline InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* get_m_ChildrenForEachControl_34() const { return ___m_ChildrenForEachControl_34; }
	inline InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680** get_address_of_m_ChildrenForEachControl_34() { return &___m_ChildrenForEachControl_34; }
	inline void set_m_ChildrenForEachControl_34(InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* value)
	{
		___m_ChildrenForEachControl_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildrenForEachControl_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_StateOffsetToControlMap_35() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_StateOffsetToControlMap_35)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_StateOffsetToControlMap_35() const { return ___m_StateOffsetToControlMap_35; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_StateOffsetToControlMap_35() { return &___m_StateOffsetToControlMap_35; }
	inline void set_m_StateOffsetToControlMap_35(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_StateOffsetToControlMap_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StateOffsetToControlMap_35), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
struct OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43  : public OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA
{
public:

public:
};

struct OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionMapConfig> UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature::m_CreatedActionMaps
	List_1_t32E30A0BD9E9BE5A271C9428B22B7DD0E0D28BA2 * ___m_CreatedActionMaps_16;

public:
	inline static int32_t get_offset_of_m_CreatedActionMaps_16() { return static_cast<int32_t>(offsetof(OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43_StaticFields, ___m_CreatedActionMaps_16)); }
	inline List_1_t32E30A0BD9E9BE5A271C9428B22B7DD0E0D28BA2 * get_m_CreatedActionMaps_16() const { return ___m_CreatedActionMaps_16; }
	inline List_1_t32E30A0BD9E9BE5A271C9428B22B7DD0E0D28BA2 ** get_address_of_m_CreatedActionMaps_16() { return &___m_CreatedActionMaps_16; }
	inline void set_m_CreatedActionMaps_16(List_1_t32E30A0BD9E9BE5A271C9428B22B7DD0E0D28BA2 * value)
	{
		___m_CreatedActionMaps_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CreatedActionMaps_16), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680  : public InputControl_1_t011854B2ED3F016A34A91350FC9B9055E1E820D3
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_22;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_23;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_24;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_25;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_26;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_27;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_30;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_31;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_32;

public:
	inline static int32_t get_offset_of_clamp_22() { return static_cast<int32_t>(offsetof(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680, ___clamp_22)); }
	inline int32_t get_clamp_22() const { return ___clamp_22; }
	inline int32_t* get_address_of_clamp_22() { return &___clamp_22; }
	inline void set_clamp_22(int32_t value)
	{
		___clamp_22 = value;
	}

	inline static int32_t get_offset_of_clampMin_23() { return static_cast<int32_t>(offsetof(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680, ___clampMin_23)); }
	inline float get_clampMin_23() const { return ___clampMin_23; }
	inline float* get_address_of_clampMin_23() { return &___clampMin_23; }
	inline void set_clampMin_23(float value)
	{
		___clampMin_23 = value;
	}

	inline static int32_t get_offset_of_clampMax_24() { return static_cast<int32_t>(offsetof(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680, ___clampMax_24)); }
	inline float get_clampMax_24() const { return ___clampMax_24; }
	inline float* get_address_of_clampMax_24() { return &___clampMax_24; }
	inline void set_clampMax_24(float value)
	{
		___clampMax_24 = value;
	}

	inline static int32_t get_offset_of_clampConstant_25() { return static_cast<int32_t>(offsetof(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680, ___clampConstant_25)); }
	inline float get_clampConstant_25() const { return ___clampConstant_25; }
	inline float* get_address_of_clampConstant_25() { return &___clampConstant_25; }
	inline void set_clampConstant_25(float value)
	{
		___clampConstant_25 = value;
	}

	inline static int32_t get_offset_of_invert_26() { return static_cast<int32_t>(offsetof(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680, ___invert_26)); }
	inline bool get_invert_26() const { return ___invert_26; }
	inline bool* get_address_of_invert_26() { return &___invert_26; }
	inline void set_invert_26(bool value)
	{
		___invert_26 = value;
	}

	inline static int32_t get_offset_of_normalize_27() { return static_cast<int32_t>(offsetof(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680, ___normalize_27)); }
	inline bool get_normalize_27() const { return ___normalize_27; }
	inline bool* get_address_of_normalize_27() { return &___normalize_27; }
	inline void set_normalize_27(bool value)
	{
		___normalize_27 = value;
	}

	inline static int32_t get_offset_of_normalizeMin_28() { return static_cast<int32_t>(offsetof(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680, ___normalizeMin_28)); }
	inline float get_normalizeMin_28() const { return ___normalizeMin_28; }
	inline float* get_address_of_normalizeMin_28() { return &___normalizeMin_28; }
	inline void set_normalizeMin_28(float value)
	{
		___normalizeMin_28 = value;
	}

	inline static int32_t get_offset_of_normalizeMax_29() { return static_cast<int32_t>(offsetof(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680, ___normalizeMax_29)); }
	inline float get_normalizeMax_29() const { return ___normalizeMax_29; }
	inline float* get_address_of_normalizeMax_29() { return &___normalizeMax_29; }
	inline void set_normalizeMax_29(float value)
	{
		___normalizeMax_29 = value;
	}

	inline static int32_t get_offset_of_normalizeZero_30() { return static_cast<int32_t>(offsetof(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680, ___normalizeZero_30)); }
	inline float get_normalizeZero_30() const { return ___normalizeZero_30; }
	inline float* get_address_of_normalizeZero_30() { return &___normalizeZero_30; }
	inline void set_normalizeZero_30(float value)
	{
		___normalizeZero_30 = value;
	}

	inline static int32_t get_offset_of_scale_31() { return static_cast<int32_t>(offsetof(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680, ___scale_31)); }
	inline bool get_scale_31() const { return ___scale_31; }
	inline bool* get_address_of_scale_31() { return &___scale_31; }
	inline void set_scale_31(bool value)
	{
		___scale_31 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_32() { return static_cast<int32_t>(offsetof(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680, ___scaleFactor_32)); }
	inline float get_scaleFactor_32() const { return ___scaleFactor_32; }
	inline float* get_address_of_scaleFactor_32() { return &___scaleFactor_32; }
	inline void set_scaleFactor_32(float value)
	{
		___scaleFactor_32 = value;
	}
};


// UnityEngine.XR.OpenXR.Input.HapticControl
struct HapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C  : public InputControl_1_t55967B0EFD1D70D42325E829E7530774536E609F
{
public:

public:
};


// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4  : public InputControl_1_t6618FCBCC55859862C1BA9DF447023B47F876153
{
public:

public:
};


// UnityEngine.XR.OpenXR.OpenXRRestarter
struct OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action UnityEngine.XR.OpenXR.OpenXRRestarter::onAfterRestart
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onAfterRestart_4;
	// System.Action UnityEngine.XR.OpenXR.OpenXRRestarter::onAfterShutdown
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onAfterShutdown_5;
	// System.Action UnityEngine.XR.OpenXR.OpenXRRestarter::onQuit
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onQuit_6;
	// System.Action UnityEngine.XR.OpenXR.OpenXRRestarter::onAfterCoroutine
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onAfterCoroutine_7;
	// System.Action UnityEngine.XR.OpenXR.OpenXRRestarter::onAfterSuccessfulRestart
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onAfterSuccessfulRestart_8;
	// UnityEngine.Coroutine UnityEngine.XR.OpenXR.OpenXRRestarter::m_Coroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_Coroutine_10;

public:
	inline static int32_t get_offset_of_onAfterRestart_4() { return static_cast<int32_t>(offsetof(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944, ___onAfterRestart_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onAfterRestart_4() const { return ___onAfterRestart_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onAfterRestart_4() { return &___onAfterRestart_4; }
	inline void set_onAfterRestart_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onAfterRestart_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAfterRestart_4), (void*)value);
	}

	inline static int32_t get_offset_of_onAfterShutdown_5() { return static_cast<int32_t>(offsetof(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944, ___onAfterShutdown_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onAfterShutdown_5() const { return ___onAfterShutdown_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onAfterShutdown_5() { return &___onAfterShutdown_5; }
	inline void set_onAfterShutdown_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onAfterShutdown_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAfterShutdown_5), (void*)value);
	}

	inline static int32_t get_offset_of_onQuit_6() { return static_cast<int32_t>(offsetof(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944, ___onQuit_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onQuit_6() const { return ___onQuit_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onQuit_6() { return &___onQuit_6; }
	inline void set_onQuit_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onQuit_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onQuit_6), (void*)value);
	}

	inline static int32_t get_offset_of_onAfterCoroutine_7() { return static_cast<int32_t>(offsetof(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944, ___onAfterCoroutine_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onAfterCoroutine_7() const { return ___onAfterCoroutine_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onAfterCoroutine_7() { return &___onAfterCoroutine_7; }
	inline void set_onAfterCoroutine_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onAfterCoroutine_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAfterCoroutine_7), (void*)value);
	}

	inline static int32_t get_offset_of_onAfterSuccessfulRestart_8() { return static_cast<int32_t>(offsetof(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944, ___onAfterSuccessfulRestart_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onAfterSuccessfulRestart_8() const { return ___onAfterSuccessfulRestart_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onAfterSuccessfulRestart_8() { return &___onAfterSuccessfulRestart_8; }
	inline void set_onAfterSuccessfulRestart_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onAfterSuccessfulRestart_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAfterSuccessfulRestart_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Coroutine_10() { return static_cast<int32_t>(offsetof(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944, ___m_Coroutine_10)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_Coroutine_10() const { return ___m_Coroutine_10; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_Coroutine_10() { return &___m_Coroutine_10; }
	inline void set_m_Coroutine_10(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_Coroutine_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Coroutine_10), (void*)value);
	}
};

struct OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_StaticFields
{
public:
	// UnityEngine.XR.OpenXR.OpenXRRestarter UnityEngine.XR.OpenXR.OpenXRRestarter::s_Instance
	OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * ___s_Instance_9;
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRRestarter::m_pauseAndRestartAttempts
	int32_t ___m_pauseAndRestartAttempts_11;
	// System.Single UnityEngine.XR.OpenXR.OpenXRRestarter::<TimeBetweenRestartAttempts>k__BackingField
	float ___U3CTimeBetweenRestartAttemptsU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_s_Instance_9() { return static_cast<int32_t>(offsetof(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_StaticFields, ___s_Instance_9)); }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * get_s_Instance_9() const { return ___s_Instance_9; }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 ** get_address_of_s_Instance_9() { return &___s_Instance_9; }
	inline void set_s_Instance_9(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * value)
	{
		___s_Instance_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_pauseAndRestartAttempts_11() { return static_cast<int32_t>(offsetof(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_StaticFields, ___m_pauseAndRestartAttempts_11)); }
	inline int32_t get_m_pauseAndRestartAttempts_11() const { return ___m_pauseAndRestartAttempts_11; }
	inline int32_t* get_address_of_m_pauseAndRestartAttempts_11() { return &___m_pauseAndRestartAttempts_11; }
	inline void set_m_pauseAndRestartAttempts_11(int32_t value)
	{
		___m_pauseAndRestartAttempts_11 = value;
	}

	inline static int32_t get_offset_of_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_StaticFields, ___U3CTimeBetweenRestartAttemptsU3Ek__BackingField_12)); }
	inline float get_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_12() const { return ___U3CTimeBetweenRestartAttemptsU3Ek__BackingField_12; }
	inline float* get_address_of_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_12() { return &___U3CTimeBetweenRestartAttemptsU3Ek__BackingField_12; }
	inline void set_U3CTimeBetweenRestartAttemptsU3Ek__BackingField_12(float value)
	{
		___U3CTimeBetweenRestartAttemptsU3Ek__BackingField_12 = value;
	}
};


// UnityEngine.InputSystem.XR.PoseControl
struct PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17  : public InputControl_1_tD7EA1D7EB2FFEF94FE2AFEEAEC7D086A3B0C0EF5
{
public:
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.XR.PoseControl::<isTracked>k__BackingField
	ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___U3CisTrackedU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.XR.PoseControl::<trackingState>k__BackingField
	IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * ___U3CtrackingStateU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.PoseControl::<position>k__BackingField
	Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * ___U3CpositionU3Ek__BackingField_24;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.PoseControl::<rotation>k__BackingField
	QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * ___U3CrotationU3Ek__BackingField_25;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.PoseControl::<velocity>k__BackingField
	Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * ___U3CvelocityU3Ek__BackingField_26;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.PoseControl::<angularVelocity>k__BackingField
	Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * ___U3CangularVelocityU3Ek__BackingField_27;

public:
	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17, ___U3CisTrackedU3Ek__BackingField_22)); }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * get_U3CisTrackedU3Ek__BackingField_22() const { return ___U3CisTrackedU3Ek__BackingField_22; }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 ** get_address_of_U3CisTrackedU3Ek__BackingField_22() { return &___U3CisTrackedU3Ek__BackingField_22; }
	inline void set_U3CisTrackedU3Ek__BackingField_22(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * value)
	{
		___U3CisTrackedU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17, ___U3CtrackingStateU3Ek__BackingField_23)); }
	inline IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * get_U3CtrackingStateU3Ek__BackingField_23() const { return ___U3CtrackingStateU3Ek__BackingField_23; }
	inline IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 ** get_address_of_U3CtrackingStateU3Ek__BackingField_23() { return &___U3CtrackingStateU3Ek__BackingField_23; }
	inline void set_U3CtrackingStateU3Ek__BackingField_23(IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * value)
	{
		___U3CtrackingStateU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17, ___U3CpositionU3Ek__BackingField_24)); }
	inline Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * get_U3CpositionU3Ek__BackingField_24() const { return ___U3CpositionU3Ek__BackingField_24; }
	inline Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE ** get_address_of_U3CpositionU3Ek__BackingField_24() { return &___U3CpositionU3Ek__BackingField_24; }
	inline void set_U3CpositionU3Ek__BackingField_24(Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * value)
	{
		___U3CpositionU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpositionU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrotationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17, ___U3CrotationU3Ek__BackingField_25)); }
	inline QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * get_U3CrotationU3Ek__BackingField_25() const { return ___U3CrotationU3Ek__BackingField_25; }
	inline QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 ** get_address_of_U3CrotationU3Ek__BackingField_25() { return &___U3CrotationU3Ek__BackingField_25; }
	inline void set_U3CrotationU3Ek__BackingField_25(QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * value)
	{
		___U3CrotationU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrotationU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvelocityU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17, ___U3CvelocityU3Ek__BackingField_26)); }
	inline Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * get_U3CvelocityU3Ek__BackingField_26() const { return ___U3CvelocityU3Ek__BackingField_26; }
	inline Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE ** get_address_of_U3CvelocityU3Ek__BackingField_26() { return &___U3CvelocityU3Ek__BackingField_26; }
	inline void set_U3CvelocityU3Ek__BackingField_26(Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * value)
	{
		___U3CvelocityU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvelocityU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CangularVelocityU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17, ___U3CangularVelocityU3Ek__BackingField_27)); }
	inline Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * get_U3CangularVelocityU3Ek__BackingField_27() const { return ___U3CangularVelocityU3Ek__BackingField_27; }
	inline Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE ** get_address_of_U3CangularVelocityU3Ek__BackingField_27() { return &___U3CangularVelocityU3Ek__BackingField_27; }
	inline void set_U3CangularVelocityU3Ek__BackingField_27(Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * value)
	{
		___U3CangularVelocityU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CangularVelocityU3Ek__BackingField_27), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48  : public InputControl_1_t87C8668A49FF17120FE3EDBF72EBAE2B7A04479F
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<x>k__BackingField
	AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<y>k__BackingField
	AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___U3CyU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<z>k__BackingField
	AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___U3CzU3Ek__BackingField_24;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<w>k__BackingField
	AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___U3CwU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48, ___U3CxU3Ek__BackingField_22)); }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * get_U3CxU3Ek__BackingField_22() const { return ___U3CxU3Ek__BackingField_22; }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 ** get_address_of_U3CxU3Ek__BackingField_22() { return &___U3CxU3Ek__BackingField_22; }
	inline void set_U3CxU3Ek__BackingField_22(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * value)
	{
		___U3CxU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48, ___U3CyU3Ek__BackingField_23)); }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * get_U3CyU3Ek__BackingField_23() const { return ___U3CyU3Ek__BackingField_23; }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 ** get_address_of_U3CyU3Ek__BackingField_23() { return &___U3CyU3Ek__BackingField_23; }
	inline void set_U3CyU3Ek__BackingField_23(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * value)
	{
		___U3CyU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CzU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48, ___U3CzU3Ek__BackingField_24)); }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * get_U3CzU3Ek__BackingField_24() const { return ___U3CzU3Ek__BackingField_24; }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 ** get_address_of_U3CzU3Ek__BackingField_24() { return &___U3CzU3Ek__BackingField_24; }
	inline void set_U3CzU3Ek__BackingField_24(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * value)
	{
		___U3CzU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CzU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48, ___U3CwU3Ek__BackingField_25)); }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * get_U3CwU3Ek__BackingField_25() const { return ___U3CwU3Ek__BackingField_25; }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 ** get_address_of_U3CwU3Ek__BackingField_25() { return &___U3CwU3Ek__BackingField_25; }
	inline void set_U3CwU3Ek__BackingField_25(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * value)
	{
		___U3CwU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwU3Ek__BackingField_25), (void*)value);
	}
};


// UnityEngine.InputSystem.TrackedDevice
struct TrackedDevice_tDF5E09C055D0CA92DF8930A7B45EDA3BBA14ED71  : public InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87
{
public:
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.TrackedDevice::<trackingState>k__BackingField
	IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * ___U3CtrackingStateU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.TrackedDevice::<isTracked>k__BackingField
	ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___U3CisTrackedU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.TrackedDevice::<devicePosition>k__BackingField
	Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * ___U3CdevicePositionU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.TrackedDevice::<deviceRotation>k__BackingField
	QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * ___U3CdeviceRotationU3Ek__BackingField_42;

public:
	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(TrackedDevice_tDF5E09C055D0CA92DF8930A7B45EDA3BBA14ED71, ___U3CtrackingStateU3Ek__BackingField_39)); }
	inline IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * get_U3CtrackingStateU3Ek__BackingField_39() const { return ___U3CtrackingStateU3Ek__BackingField_39; }
	inline IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 ** get_address_of_U3CtrackingStateU3Ek__BackingField_39() { return &___U3CtrackingStateU3Ek__BackingField_39; }
	inline void set_U3CtrackingStateU3Ek__BackingField_39(IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * value)
	{
		___U3CtrackingStateU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(TrackedDevice_tDF5E09C055D0CA92DF8930A7B45EDA3BBA14ED71, ___U3CisTrackedU3Ek__BackingField_40)); }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * get_U3CisTrackedU3Ek__BackingField_40() const { return ___U3CisTrackedU3Ek__BackingField_40; }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 ** get_address_of_U3CisTrackedU3Ek__BackingField_40() { return &___U3CisTrackedU3Ek__BackingField_40; }
	inline void set_U3CisTrackedU3Ek__BackingField_40(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * value)
	{
		___U3CisTrackedU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(TrackedDevice_tDF5E09C055D0CA92DF8930A7B45EDA3BBA14ED71, ___U3CdevicePositionU3Ek__BackingField_41)); }
	inline Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * get_U3CdevicePositionU3Ek__BackingField_41() const { return ___U3CdevicePositionU3Ek__BackingField_41; }
	inline Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE ** get_address_of_U3CdevicePositionU3Ek__BackingField_41() { return &___U3CdevicePositionU3Ek__BackingField_41; }
	inline void set_U3CdevicePositionU3Ek__BackingField_41(Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * value)
	{
		___U3CdevicePositionU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(TrackedDevice_tDF5E09C055D0CA92DF8930A7B45EDA3BBA14ED71, ___U3CdeviceRotationU3Ek__BackingField_42)); }
	inline QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * get_U3CdeviceRotationU3Ek__BackingField_42() const { return ___U3CdeviceRotationU3Ek__BackingField_42; }
	inline QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 ** get_address_of_U3CdeviceRotationU3Ek__BackingField_42() { return &___U3CdeviceRotationU3Ek__BackingField_42; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_42(QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_42), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t271CA458D56BCA875642853132733D774B009A96  : public InputControl_1_t0C6774D908F28CC2187A664A1D73FB294F808163
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<x>k__BackingField
	AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<y>k__BackingField
	AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___U3CyU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Vector2Control_t271CA458D56BCA875642853132733D774B009A96, ___U3CxU3Ek__BackingField_22)); }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * get_U3CxU3Ek__BackingField_22() const { return ___U3CxU3Ek__BackingField_22; }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 ** get_address_of_U3CxU3Ek__BackingField_22() { return &___U3CxU3Ek__BackingField_22; }
	inline void set_U3CxU3Ek__BackingField_22(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * value)
	{
		___U3CxU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Vector2Control_t271CA458D56BCA875642853132733D774B009A96, ___U3CyU3Ek__BackingField_23)); }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * get_U3CyU3Ek__BackingField_23() const { return ___U3CyU3Ek__BackingField_23; }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 ** get_address_of_U3CyU3Ek__BackingField_23() { return &___U3CyU3Ek__BackingField_23; }
	inline void set_U3CyU3Ek__BackingField_23(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * value)
	{
		___U3CyU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_23), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE  : public InputControl_1_tCFDDE43FA5D792323D720A28E6A8B13AF68455E7
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<x>k__BackingField
	AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<y>k__BackingField
	AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___U3CyU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<z>k__BackingField
	AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___U3CzU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE, ___U3CxU3Ek__BackingField_22)); }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * get_U3CxU3Ek__BackingField_22() const { return ___U3CxU3Ek__BackingField_22; }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 ** get_address_of_U3CxU3Ek__BackingField_22() { return &___U3CxU3Ek__BackingField_22; }
	inline void set_U3CxU3Ek__BackingField_22(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * value)
	{
		___U3CxU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE, ___U3CyU3Ek__BackingField_23)); }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * get_U3CyU3Ek__BackingField_23() const { return ___U3CyU3Ek__BackingField_23; }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 ** get_address_of_U3CyU3Ek__BackingField_23() { return &___U3CyU3Ek__BackingField_23; }
	inline void set_U3CyU3Ek__BackingField_23(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * value)
	{
		___U3CyU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CzU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE, ___U3CzU3Ek__BackingField_24)); }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * get_U3CzU3Ek__BackingField_24() const { return ___U3CzU3Ek__BackingField_24; }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 ** get_address_of_U3CzU3Ek__BackingField_24() { return &___U3CzU3Ek__BackingField_24; }
	inline void set_U3CzU3Ek__BackingField_24(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * value)
	{
		___U3CzU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CzU3Ek__BackingField_24), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68  : public AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_33;

public:
	inline static int32_t get_offset_of_pressPoint_33() { return static_cast<int32_t>(offsetof(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68, ___pressPoint_33)); }
	inline float get_pressPoint_33() const { return ___pressPoint_33; }
	inline float* get_address_of_pressPoint_33() { return &___pressPoint_33; }
	inline void set_pressPoint_33(float value)
	{
		___pressPoint_33 = value;
	}
};

struct ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_StaticFields
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_34;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_35;

public:
	inline static int32_t get_offset_of_s_GlobalDefaultButtonPressPoint_34() { return static_cast<int32_t>(offsetof(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_StaticFields, ___s_GlobalDefaultButtonPressPoint_34)); }
	inline float get_s_GlobalDefaultButtonPressPoint_34() const { return ___s_GlobalDefaultButtonPressPoint_34; }
	inline float* get_address_of_s_GlobalDefaultButtonPressPoint_34() { return &___s_GlobalDefaultButtonPressPoint_34; }
	inline void set_s_GlobalDefaultButtonPressPoint_34(float value)
	{
		___s_GlobalDefaultButtonPressPoint_34 = value;
	}

	inline static int32_t get_offset_of_s_GlobalDefaultButtonReleaseThreshold_35() { return static_cast<int32_t>(offsetof(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_StaticFields, ___s_GlobalDefaultButtonReleaseThreshold_35)); }
	inline float get_s_GlobalDefaultButtonReleaseThreshold_35() const { return ___s_GlobalDefaultButtonReleaseThreshold_35; }
	inline float* get_address_of_s_GlobalDefaultButtonReleaseThreshold_35() { return &___s_GlobalDefaultButtonReleaseThreshold_35; }
	inline void set_s_GlobalDefaultButtonReleaseThreshold_35(float value)
	{
		___s_GlobalDefaultButtonReleaseThreshold_35 = value;
	}
};


// UnityEngine.InputSystem.XR.XRController
struct XRController_tB2474121816D6124DF5CF8739FED669945C52778  : public TrackedDevice_tDF5E09C055D0CA92DF8930A7B45EDA3BBA14ED71
{
public:

public:
};


// UnityEngine.InputSystem.XR.XRControllerWithRumble
struct XRControllerWithRumble_tAECE062A3E616AC023DA89DA07003DB0D43EDEC2  : public XRController_tB2474121816D6124DF5CF8739FED669945C52778
{
public:

public:
};


// UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController
struct ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7  : public XRControllerWithRumble_tAECE062A3E616AC023DA89DA07003DB0D43EDEC2
{
public:
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<system>k__BackingField
	ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___U3CsystemU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<systemTouched>k__BackingField
	ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___U3CsystemTouchedU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<primaryButton>k__BackingField
	ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___U3CprimaryButtonU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<primaryTouched>k__BackingField
	ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___U3CprimaryTouchedU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<secondaryButton>k__BackingField
	ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___U3CsecondaryButtonU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<secondaryTouched>k__BackingField
	ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___U3CsecondaryTouchedU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<grip>k__BackingField
	AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___U3CgripU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<gripPressed>k__BackingField
	ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___U3CgripPressedU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<gripForce>k__BackingField
	AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___U3CgripForceU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<trigger>k__BackingField
	AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___U3CtriggerU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<triggerPressed>k__BackingField
	ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___U3CtriggerPressedU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<triggerTouched>k__BackingField
	ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___U3CtriggerTouchedU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<thumbstick>k__BackingField
	Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * ___U3CthumbstickU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<thumbstickClicked>k__BackingField
	ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___U3CthumbstickClickedU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<thumbstickTouched>k__BackingField
	ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___U3CthumbstickTouchedU3Ek__BackingField_57;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<trackpad>k__BackingField
	Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * ___U3CtrackpadU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<trackpadTouched>k__BackingField
	ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___U3CtrackpadTouchedU3Ek__BackingField_59;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<trackpadForce>k__BackingField
	AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___U3CtrackpadForceU3Ek__BackingField_60;
	// UnityEngine.InputSystem.XR.PoseControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<devicePose>k__BackingField
	PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * ___U3CdevicePoseU3Ek__BackingField_61;
	// UnityEngine.InputSystem.XR.PoseControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<pointer>k__BackingField
	PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * ___U3CpointerU3Ek__BackingField_62;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<isTracked>k__BackingField
	ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___U3CisTrackedU3Ek__BackingField_63;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<trackingState>k__BackingField
	IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * ___U3CtrackingStateU3Ek__BackingField_64;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<devicePosition>k__BackingField
	Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * ___U3CdevicePositionU3Ek__BackingField_65;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<deviceRotation>k__BackingField
	QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * ___U3CdeviceRotationU3Ek__BackingField_66;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<pointerPosition>k__BackingField
	Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * ___U3CpointerPositionU3Ek__BackingField_67;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<pointerRotation>k__BackingField
	QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * ___U3CpointerRotationU3Ek__BackingField_68;
	// UnityEngine.XR.OpenXR.Input.HapticControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::<haptic>k__BackingField
	HapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C * ___U3ChapticU3Ek__BackingField_69;

public:
	inline static int32_t get_offset_of_U3CsystemU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CsystemU3Ek__BackingField_43)); }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * get_U3CsystemU3Ek__BackingField_43() const { return ___U3CsystemU3Ek__BackingField_43; }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 ** get_address_of_U3CsystemU3Ek__BackingField_43() { return &___U3CsystemU3Ek__BackingField_43; }
	inline void set_U3CsystemU3Ek__BackingField_43(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * value)
	{
		___U3CsystemU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsystemU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsystemTouchedU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CsystemTouchedU3Ek__BackingField_44)); }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * get_U3CsystemTouchedU3Ek__BackingField_44() const { return ___U3CsystemTouchedU3Ek__BackingField_44; }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 ** get_address_of_U3CsystemTouchedU3Ek__BackingField_44() { return &___U3CsystemTouchedU3Ek__BackingField_44; }
	inline void set_U3CsystemTouchedU3Ek__BackingField_44(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * value)
	{
		___U3CsystemTouchedU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsystemTouchedU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CprimaryButtonU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CprimaryButtonU3Ek__BackingField_45)); }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * get_U3CprimaryButtonU3Ek__BackingField_45() const { return ___U3CprimaryButtonU3Ek__BackingField_45; }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 ** get_address_of_U3CprimaryButtonU3Ek__BackingField_45() { return &___U3CprimaryButtonU3Ek__BackingField_45; }
	inline void set_U3CprimaryButtonU3Ek__BackingField_45(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * value)
	{
		___U3CprimaryButtonU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprimaryButtonU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CprimaryTouchedU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CprimaryTouchedU3Ek__BackingField_46)); }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * get_U3CprimaryTouchedU3Ek__BackingField_46() const { return ___U3CprimaryTouchedU3Ek__BackingField_46; }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 ** get_address_of_U3CprimaryTouchedU3Ek__BackingField_46() { return &___U3CprimaryTouchedU3Ek__BackingField_46; }
	inline void set_U3CprimaryTouchedU3Ek__BackingField_46(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * value)
	{
		___U3CprimaryTouchedU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprimaryTouchedU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsecondaryButtonU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CsecondaryButtonU3Ek__BackingField_47)); }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * get_U3CsecondaryButtonU3Ek__BackingField_47() const { return ___U3CsecondaryButtonU3Ek__BackingField_47; }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 ** get_address_of_U3CsecondaryButtonU3Ek__BackingField_47() { return &___U3CsecondaryButtonU3Ek__BackingField_47; }
	inline void set_U3CsecondaryButtonU3Ek__BackingField_47(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * value)
	{
		___U3CsecondaryButtonU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsecondaryButtonU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsecondaryTouchedU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CsecondaryTouchedU3Ek__BackingField_48)); }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * get_U3CsecondaryTouchedU3Ek__BackingField_48() const { return ___U3CsecondaryTouchedU3Ek__BackingField_48; }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 ** get_address_of_U3CsecondaryTouchedU3Ek__BackingField_48() { return &___U3CsecondaryTouchedU3Ek__BackingField_48; }
	inline void set_U3CsecondaryTouchedU3Ek__BackingField_48(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * value)
	{
		___U3CsecondaryTouchedU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsecondaryTouchedU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgripU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CgripU3Ek__BackingField_49)); }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * get_U3CgripU3Ek__BackingField_49() const { return ___U3CgripU3Ek__BackingField_49; }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 ** get_address_of_U3CgripU3Ek__BackingField_49() { return &___U3CgripU3Ek__BackingField_49; }
	inline void set_U3CgripU3Ek__BackingField_49(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * value)
	{
		___U3CgripU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgripU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgripPressedU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CgripPressedU3Ek__BackingField_50)); }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * get_U3CgripPressedU3Ek__BackingField_50() const { return ___U3CgripPressedU3Ek__BackingField_50; }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 ** get_address_of_U3CgripPressedU3Ek__BackingField_50() { return &___U3CgripPressedU3Ek__BackingField_50; }
	inline void set_U3CgripPressedU3Ek__BackingField_50(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * value)
	{
		___U3CgripPressedU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgripPressedU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgripForceU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CgripForceU3Ek__BackingField_51)); }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * get_U3CgripForceU3Ek__BackingField_51() const { return ___U3CgripForceU3Ek__BackingField_51; }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 ** get_address_of_U3CgripForceU3Ek__BackingField_51() { return &___U3CgripForceU3Ek__BackingField_51; }
	inline void set_U3CgripForceU3Ek__BackingField_51(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * value)
	{
		___U3CgripForceU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgripForceU3Ek__BackingField_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CtriggerU3Ek__BackingField_52)); }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * get_U3CtriggerU3Ek__BackingField_52() const { return ___U3CtriggerU3Ek__BackingField_52; }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 ** get_address_of_U3CtriggerU3Ek__BackingField_52() { return &___U3CtriggerU3Ek__BackingField_52; }
	inline void set_U3CtriggerU3Ek__BackingField_52(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * value)
	{
		___U3CtriggerU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerPressedU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CtriggerPressedU3Ek__BackingField_53)); }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * get_U3CtriggerPressedU3Ek__BackingField_53() const { return ___U3CtriggerPressedU3Ek__BackingField_53; }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 ** get_address_of_U3CtriggerPressedU3Ek__BackingField_53() { return &___U3CtriggerPressedU3Ek__BackingField_53; }
	inline void set_U3CtriggerPressedU3Ek__BackingField_53(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * value)
	{
		___U3CtriggerPressedU3Ek__BackingField_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerPressedU3Ek__BackingField_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerTouchedU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CtriggerTouchedU3Ek__BackingField_54)); }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * get_U3CtriggerTouchedU3Ek__BackingField_54() const { return ___U3CtriggerTouchedU3Ek__BackingField_54; }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 ** get_address_of_U3CtriggerTouchedU3Ek__BackingField_54() { return &___U3CtriggerTouchedU3Ek__BackingField_54; }
	inline void set_U3CtriggerTouchedU3Ek__BackingField_54(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * value)
	{
		___U3CtriggerTouchedU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerTouchedU3Ek__BackingField_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3CthumbstickU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CthumbstickU3Ek__BackingField_55)); }
	inline Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * get_U3CthumbstickU3Ek__BackingField_55() const { return ___U3CthumbstickU3Ek__BackingField_55; }
	inline Vector2Control_t271CA458D56BCA875642853132733D774B009A96 ** get_address_of_U3CthumbstickU3Ek__BackingField_55() { return &___U3CthumbstickU3Ek__BackingField_55; }
	inline void set_U3CthumbstickU3Ek__BackingField_55(Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * value)
	{
		___U3CthumbstickU3Ek__BackingField_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CthumbstickU3Ek__BackingField_55), (void*)value);
	}

	inline static int32_t get_offset_of_U3CthumbstickClickedU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CthumbstickClickedU3Ek__BackingField_56)); }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * get_U3CthumbstickClickedU3Ek__BackingField_56() const { return ___U3CthumbstickClickedU3Ek__BackingField_56; }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 ** get_address_of_U3CthumbstickClickedU3Ek__BackingField_56() { return &___U3CthumbstickClickedU3Ek__BackingField_56; }
	inline void set_U3CthumbstickClickedU3Ek__BackingField_56(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * value)
	{
		___U3CthumbstickClickedU3Ek__BackingField_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CthumbstickClickedU3Ek__BackingField_56), (void*)value);
	}

	inline static int32_t get_offset_of_U3CthumbstickTouchedU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CthumbstickTouchedU3Ek__BackingField_57)); }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * get_U3CthumbstickTouchedU3Ek__BackingField_57() const { return ___U3CthumbstickTouchedU3Ek__BackingField_57; }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 ** get_address_of_U3CthumbstickTouchedU3Ek__BackingField_57() { return &___U3CthumbstickTouchedU3Ek__BackingField_57; }
	inline void set_U3CthumbstickTouchedU3Ek__BackingField_57(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * value)
	{
		___U3CthumbstickTouchedU3Ek__BackingField_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CthumbstickTouchedU3Ek__BackingField_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackpadU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CtrackpadU3Ek__BackingField_58)); }
	inline Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * get_U3CtrackpadU3Ek__BackingField_58() const { return ___U3CtrackpadU3Ek__BackingField_58; }
	inline Vector2Control_t271CA458D56BCA875642853132733D774B009A96 ** get_address_of_U3CtrackpadU3Ek__BackingField_58() { return &___U3CtrackpadU3Ek__BackingField_58; }
	inline void set_U3CtrackpadU3Ek__BackingField_58(Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * value)
	{
		___U3CtrackpadU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackpadU3Ek__BackingField_58), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackpadTouchedU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CtrackpadTouchedU3Ek__BackingField_59)); }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * get_U3CtrackpadTouchedU3Ek__BackingField_59() const { return ___U3CtrackpadTouchedU3Ek__BackingField_59; }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 ** get_address_of_U3CtrackpadTouchedU3Ek__BackingField_59() { return &___U3CtrackpadTouchedU3Ek__BackingField_59; }
	inline void set_U3CtrackpadTouchedU3Ek__BackingField_59(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * value)
	{
		___U3CtrackpadTouchedU3Ek__BackingField_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackpadTouchedU3Ek__BackingField_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackpadForceU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CtrackpadForceU3Ek__BackingField_60)); }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * get_U3CtrackpadForceU3Ek__BackingField_60() const { return ___U3CtrackpadForceU3Ek__BackingField_60; }
	inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 ** get_address_of_U3CtrackpadForceU3Ek__BackingField_60() { return &___U3CtrackpadForceU3Ek__BackingField_60; }
	inline void set_U3CtrackpadForceU3Ek__BackingField_60(AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * value)
	{
		___U3CtrackpadForceU3Ek__BackingField_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackpadForceU3Ek__BackingField_60), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePoseU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CdevicePoseU3Ek__BackingField_61)); }
	inline PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * get_U3CdevicePoseU3Ek__BackingField_61() const { return ___U3CdevicePoseU3Ek__BackingField_61; }
	inline PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 ** get_address_of_U3CdevicePoseU3Ek__BackingField_61() { return &___U3CdevicePoseU3Ek__BackingField_61; }
	inline void set_U3CdevicePoseU3Ek__BackingField_61(PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * value)
	{
		___U3CdevicePoseU3Ek__BackingField_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePoseU3Ek__BackingField_61), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CpointerU3Ek__BackingField_62)); }
	inline PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * get_U3CpointerU3Ek__BackingField_62() const { return ___U3CpointerU3Ek__BackingField_62; }
	inline PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 ** get_address_of_U3CpointerU3Ek__BackingField_62() { return &___U3CpointerU3Ek__BackingField_62; }
	inline void set_U3CpointerU3Ek__BackingField_62(PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * value)
	{
		___U3CpointerU3Ek__BackingField_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerU3Ek__BackingField_62), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_63() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CisTrackedU3Ek__BackingField_63)); }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * get_U3CisTrackedU3Ek__BackingField_63() const { return ___U3CisTrackedU3Ek__BackingField_63; }
	inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 ** get_address_of_U3CisTrackedU3Ek__BackingField_63() { return &___U3CisTrackedU3Ek__BackingField_63; }
	inline void set_U3CisTrackedU3Ek__BackingField_63(ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * value)
	{
		___U3CisTrackedU3Ek__BackingField_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_63), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_64() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CtrackingStateU3Ek__BackingField_64)); }
	inline IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * get_U3CtrackingStateU3Ek__BackingField_64() const { return ___U3CtrackingStateU3Ek__BackingField_64; }
	inline IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 ** get_address_of_U3CtrackingStateU3Ek__BackingField_64() { return &___U3CtrackingStateU3Ek__BackingField_64; }
	inline void set_U3CtrackingStateU3Ek__BackingField_64(IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * value)
	{
		___U3CtrackingStateU3Ek__BackingField_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_64), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_65() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CdevicePositionU3Ek__BackingField_65)); }
	inline Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * get_U3CdevicePositionU3Ek__BackingField_65() const { return ___U3CdevicePositionU3Ek__BackingField_65; }
	inline Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE ** get_address_of_U3CdevicePositionU3Ek__BackingField_65() { return &___U3CdevicePositionU3Ek__BackingField_65; }
	inline void set_U3CdevicePositionU3Ek__BackingField_65(Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * value)
	{
		___U3CdevicePositionU3Ek__BackingField_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_65), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_66() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CdeviceRotationU3Ek__BackingField_66)); }
	inline QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * get_U3CdeviceRotationU3Ek__BackingField_66() const { return ___U3CdeviceRotationU3Ek__BackingField_66; }
	inline QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 ** get_address_of_U3CdeviceRotationU3Ek__BackingField_66() { return &___U3CdeviceRotationU3Ek__BackingField_66; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_66(QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_66), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerPositionU3Ek__BackingField_67() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CpointerPositionU3Ek__BackingField_67)); }
	inline Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * get_U3CpointerPositionU3Ek__BackingField_67() const { return ___U3CpointerPositionU3Ek__BackingField_67; }
	inline Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE ** get_address_of_U3CpointerPositionU3Ek__BackingField_67() { return &___U3CpointerPositionU3Ek__BackingField_67; }
	inline void set_U3CpointerPositionU3Ek__BackingField_67(Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * value)
	{
		___U3CpointerPositionU3Ek__BackingField_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerPositionU3Ek__BackingField_67), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerRotationU3Ek__BackingField_68() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3CpointerRotationU3Ek__BackingField_68)); }
	inline QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * get_U3CpointerRotationU3Ek__BackingField_68() const { return ___U3CpointerRotationU3Ek__BackingField_68; }
	inline QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 ** get_address_of_U3CpointerRotationU3Ek__BackingField_68() { return &___U3CpointerRotationU3Ek__BackingField_68; }
	inline void set_U3CpointerRotationU3Ek__BackingField_68(QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * value)
	{
		___U3CpointerRotationU3Ek__BackingField_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerRotationU3Ek__BackingField_68), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChapticU3Ek__BackingField_69() { return static_cast<int32_t>(offsetof(ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7, ___U3ChapticU3Ek__BackingField_69)); }
	inline HapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C * get_U3ChapticU3Ek__BackingField_69() const { return ___U3ChapticU3Ek__BackingField_69; }
	inline HapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C ** get_address_of_U3ChapticU3Ek__BackingField_69() { return &___U3ChapticU3Ek__BackingField_69; }
	inline void set_U3ChapticU3Ek__BackingField_69(HapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C * value)
	{
		___U3ChapticU3Ek__BackingField_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ChapticU3Ek__BackingField_69), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
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


// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InputControl_GetChildControl_TisRuntimeObject_mB75189D465F7A9BF945FF8F557724CBD732EFCA4_gshared (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * __this, String_t* ___path0, const RuntimeMethod* method);

// System.Void UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE50E7ABFFF44DD38F800354816F2E90A73CD9A0B (U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.XR.OpenXR.OpenXRRuntime::GetExtensionVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OpenXRRuntime_GetExtensionVersion_m3E39B0A8EF4BBF54078CE27EC8278ABDB7182BDD (String_t* ___extensionName0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRFeature_get_enabled_m885B86B740B58647E7A02E4732EA4AC4696E9268 (OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::get_failedInitialization()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OpenXRFeature_get_failedInitialization_mBDEA7F4C14370D52B15CAD3673AAFD164BB428AB_inline (OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE0D2427296248DFB946E0051E36563280CA41B5B (U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Utilities.FourCC::.ctor(System.Char,System.Char,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FourCC__ctor_mEF52BABF36FD0F6E63A5CD7C1520AEFDAC9FCC14 (FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * __this, Il2CppChar ___a0, Il2CppChar ___b1, Il2CppChar ___c2, Il2CppChar ___d3, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.XR.OpenXR.Input.OpenXRInput/GetInternalDeviceIdCommand::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  GetInternalDeviceIdCommand_get_Type_m7BBDFA67C6F98C247173102F1CE7C8555B23F35A (const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.XR.OpenXR.Input.OpenXRInput/GetInternalDeviceIdCommand::get_typeStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  GetInternalDeviceIdCommand_get_typeStatic_mE151B7E40FDC7C1C7CA6CD87D9A6F182CDC71439 (GetInternalDeviceIdCommand_tDABB67AE984187CD7533AD65FBF96F9587004A98 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.LowLevel.InputDeviceCommand::.ctor(UnityEngine.InputSystem.Utilities.FourCC,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDeviceCommand__ctor_m37D7C9AC95972F2F9075C62240B5D15119E40271 (InputDeviceCommand_tBA7404132CBAC1E564F79E5B8B6A258527976AD3 * __this, FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___type0, int32_t ___sizeInBytes1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.OpenXRLoaderBase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m10DBD678F6F7B586ACCC4928C036C9E35E0AB40C (U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRetryInitializationCoroutineU3Ed__25_U3CU3Em__Finally1_m9F7F206A77779C08459F076B31EB0971015AAAE6 (U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.WaitForRestartFinish::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRestartFinish__ctor_m18B306D8B5763F43BFB9978F92D124F28C55C37D (WaitForRestartFinish_t1E531A0B84387E912CDA4C5079FE2D1D00C1FDC6 * __this, float ___timeout0, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline (const RuntimeMethod* method);
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.XR.OpenXR.OpenXRRestarter::RestartCoroutine(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenXRRestarter_RestartCoroutine_mC4DEA1DCB9B4AAC5488F61B494C19A9EB761345D (OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * __this, bool ___shouldRestart0, bool ___shouldShutdown1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRetryInitializationCoroutineU3Ed__25_System_IDisposable_Dispose_m0046BCC0B5E13DA25F31D0D9DD794E5EC4A6A11E (U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__24::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_U3CU3Em__Finally1_m59BDA24B35EAD1411EB8572B97E415D8C6C7C070 (U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_t2DD20E2036281B0023F5DD0E7FFC9635B4C088F2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_System_IDisposable_Dispose_m3CCB93EF3F5C84504CAD64522DAFAFC36E912538 (U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_t2DD20E2036281B0023F5DD0E7FFC9635B4C088F2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__26::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__26_U3CU3Em__Finally1_m8A43B94DC6F826FD4259DD34CD910F201679ACCE (U3CRestartCoroutineU3Ed__26_tC49307D9D8268F189EE679F671D7819D2C729749 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m6AD4F079818DF78946C99AD8D49E3D343DAAF290 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.OpenXR.OpenXRRuntime::ShouldRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRRuntime_ShouldRestart_m21AA17A086AA61BAC8FBF650A573846D67C94212 (const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.XR.Management.XRManagerSettings::InitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_InitializeLoader_m92B987C89AF6F7E7D05718296243E0ED021FD6B3 (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::StartSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StartSubsystems_mB9F502956C1FC6AD6D421CD36C3980B095B4282E (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.OpenXR.OpenXRRuntime::ShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRRuntime_ShouldQuit_mBA68FD485374C5D8F790D1F8482CB4E2E55CCD0E (const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m10E44C187C0E5807F9C955A176885FAA95829267 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__26_System_IDisposable_Dispose_mE022DBF3D9438468460250267B90F19164AB9A6E (U3CRestartCoroutineU3Ed__26_tC49307D9D8268F189EE679F671D7819D2C729749 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRController::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRController_FinishSetup_m30CF27D8142847ED6850AA8FADA625A82329D163 (XRController_tB2474121816D6124DF5CF8739FED669945C52778 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.ButtonControl>(System.String)
inline ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766 (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * (*) (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_mB75189D465F7A9BF945FF8F557724CBD732EFCA4_gshared)(__this, ___path0, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_system(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_system_m56292448E97CECC8F9A2BFE5FB12545A4D9F5DB0_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_systemTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_systemTouched_m21F560BD50743E9CCBD76A924968CA354CECACC0_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_primaryButton(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_primaryButton_m487E02666D526A79B83CA83546B6103E94F5A90C_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_primaryTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_primaryTouched_m666B2E15DCEBE99C0777CD3B8E00752FE5E74025_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_secondaryButton(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_secondaryButton_mECE5E8E760D1BF1FA22D00EF8D80EBDF7236DC42_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_secondaryTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_secondaryTouched_mDABE319A1DD45252D1018BDBF4B9D2CF95FA5C74_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.AxisControl>(System.String)
inline AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * InputControl_GetChildControl_TisAxisControl_tA997FF52442F7B08C7E13B7028393B4117248680_m393D62A7199F4ECF21B55FD1C2DDB1D5B8C38813 (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * (*) (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_mB75189D465F7A9BF945FF8F557724CBD732EFCA4_gshared)(__this, ___path0, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_grip(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_grip_m0667D7377E35C59E0A070508B4D2C4B2DC27ED69_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_gripPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_gripPressed_m9A2B431173DB9849EE4716992155C2A5A582617C_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_gripForce(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_gripForce_m9A501C3FF6B07A7CE243A5B53EF1B1F2DEEAC403_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_trigger(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_trigger_m6B498ADF4D9343E2EFA377E9E26312B3450A81D8_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_triggerPressed_m600FF7AC4DC8F65E5503DE08C42C3B135EF9C6B2_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_triggerTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_triggerTouched_mB8BC2AD613970D1FA693AB2F75F28F794E9A78C0_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector2Control>(System.String)
inline Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * InputControl_GetChildControl_TisVector2Control_t271CA458D56BCA875642853132733D774B009A96_mFF8A48F6C9239AE81110CD7B5B5F63046BCAFC1B (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * (*) (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_mB75189D465F7A9BF945FF8F557724CBD732EFCA4_gshared)(__this, ___path0, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_thumbstick(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_thumbstick_mE75470A0047DDED5E9243AEF1FEB88176E61EF35_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_thumbstickClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_thumbstickClicked_m95B86DB987772BE2FAB0E68BC7259866656BADE4_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_thumbstickTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_thumbstickTouched_m17EA4F08E0998F619021AA8B74ED71AC835E9FB6_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_trackpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_trackpad_m5477B50B206924A51876E7F105DBC12D46EA5429_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_trackpadTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_trackpadTouched_m08F3A118B08D66BCA365629F656509B904FB8B27_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_trackpadForce(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_trackpadForce_mDCBDB29002455245DC963249CB35EC9AACD2E06C_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.XR.PoseControl>(System.String)
inline PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * InputControl_GetChildControl_TisPoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17_mA16003670FD70C6D0ED6AB4984C3A3C97EAEFC49 (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * (*) (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_mB75189D465F7A9BF945FF8F557724CBD732EFCA4_gshared)(__this, ___path0, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_devicePose(UnityEngine.InputSystem.XR.PoseControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_devicePose_m503A80FD8707541C418D9412EC6240C705CE6292_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_pointer(UnityEngine.InputSystem.XR.PoseControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_pointer_m88FAFF50EF6F1B6E176F94D3F06E47620028B605_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_isTracked_m233AD109538025684964B94F03584ECF51A6F54B_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.IntegerControl>(System.String)
inline IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * InputControl_GetChildControl_TisIntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4_m79707C5EA0CD69CA2484E7CC0B3B291670BBC793 (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * (*) (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_mB75189D465F7A9BF945FF8F557724CBD732EFCA4_gshared)(__this, ___path0, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_trackingState_m700986F71BD4F1E7DB90021511782423A4380E10_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector3Control>(System.String)
inline Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * InputControl_GetChildControl_TisVector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE_mD26314BFCC94ED995E96101D60D84A729E5F91AD (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * (*) (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_mB75189D465F7A9BF945FF8F557724CBD732EFCA4_gshared)(__this, ___path0, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_devicePosition_m57743255D8FE94DE6F0ECC0BF8C82869719D4B86_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.QuaternionControl>(System.String)
inline QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * InputControl_GetChildControl_TisQuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48_m4A9B7A0F3BDE9673B05A4E6BEB8EE6D7D1CD4F96 (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * (*) (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_mB75189D465F7A9BF945FF8F557724CBD732EFCA4_gshared)(__this, ___path0, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_deviceRotation_m1B84BE363D0D3AEF16B1A570D9428C4F52414223_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_pointerPosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_pointerPosition_mA18701204A0FA8DB5EE76EE6AEF723C75B327102_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_pointerRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_pointerRotation_mA4A9C9784C97A7976D585DB4FAB4E0B12EB9DD69_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.XR.OpenXR.Input.HapticControl>(System.String)
inline HapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C * InputControl_GetChildControl_TisHapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C_m722FA03702F56653290DA54FAEDA642FA62350E5 (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  HapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C * (*) (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_mB75189D465F7A9BF945FF8F557724CBD732EFCA4_gshared)(__this, ___path0, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_haptic(UnityEngine.XR.OpenXR.Input.HapticControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_haptic_mE875155C4D0E16A05DE93984578D7214D1C1D1FE_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, HapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRControllerWithRumble::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRControllerWithRumble__ctor_mCCA1F51D764BD561B80A85052F03DDCB06B7C084 (XRControllerWithRumble_tAECE062A3E616AC023DA89DA07003DB0D43EDEC2 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD75D28B439482EC2384608443733CDAF4400F273 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF * L_0 = (U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF *)il2cpp_codegen_object_new(U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE50E7ABFFF44DD38F800354816F2E90A73CD9A0B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE50E7ABFFF44DD38F800354816F2E90A73CD9A0B (U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c::<SendInitializeEvent>b__7_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CSendInitializeEventU3Eb__7_0_m11A038CA46F3CE8E0FC324DB80B9F3200E7EF179 (U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF * __this, String_t* ___ext0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(ext => $"{ext}_{OpenXRRuntime.GetExtensionVersion(ext)}")
		String_t* L_0 = ___ext0;
		String_t* L_1 = ___ext0;
		uint32_t L_2;
		L_2 = OpenXRRuntime_GetExtensionVersion_m3E39B0A8EF4BBF54078CE27EC8278ABDB7182BDD(L_1, /*hidden argument*/NULL);
		uint32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674, L_0, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c::<SendInitializeEvent>b__7_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CSendInitializeEventU3Eb__7_1_m3ACC0A6551358953FBCD35738B3AFE4A326924A6 (U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF * __this, String_t* ___ext0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(ext => $"{ext}_{OpenXRRuntime.GetExtensionVersion(ext)}")
		String_t* L_0 = ___ext0;
		String_t* L_1 = ___ext0;
		uint32_t L_2;
		L_2 = OpenXRRuntime_GetExtensionVersion_m3E39B0A8EF4BBF54078CE27EC8278ABDB7182BDD(L_1, /*hidden argument*/NULL);
		uint32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteral0ACD01722156B8516C7B5AED45E29FC23B05A674, L_0, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c::<SendInitializeEvent>b__7_2(UnityEngine.XR.OpenXR.Features.OpenXRFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CSendInitializeEventU3Eb__7_2_mC140F60D549CA95F9A15203C5CE3E639E59E097F (U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF * __this, OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(f => f != null && f.enabled)
		OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * L_0 = ___f0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * L_2 = ___f0;
		NullCheck(L_2);
		bool L_3;
		L_3 = OpenXRFeature_get_enabled_m885B86B740B58647E7A02E4732EA4AC4696E9268(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// System.String UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c::<SendInitializeEvent>b__7_3(UnityEngine.XR.OpenXR.Features.OpenXRFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CSendInitializeEventU3Eb__7_3_mE639E47D549F5678836D18D19AF5206A606BC508 (U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF * __this, OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(f => $"{f.GetType().FullName}_{f.version}").ToArray(),
		OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * L_0 = ___f0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * L_3 = ___f0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_version_8();
		String_t* L_5;
		L_5 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_2, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c::<SendInitializeEvent>b__7_4(UnityEngine.XR.OpenXR.Features.OpenXRFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CSendInitializeEventU3Eb__7_4_m04DC9D240D3F6071739CA84BEBE19FDF9B2912AE (U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF * __this, OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(f => f != null && f.failedInitialization)
		OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * L_0 = ___f0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * L_2 = ___f0;
		NullCheck(L_2);
		bool L_3;
		L_3 = OpenXRFeature_get_failedInitialization_mBDEA7F4C14370D52B15CAD3673AAFD164BB428AB_inline(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// System.String UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c::<SendInitializeEvent>b__7_5(UnityEngine.XR.OpenXR.Features.OpenXRFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CSendInitializeEventU3Eb__7_5_mC13F324FE9268661B494D1EF0E59552EF401BAD4 (U3CU3Ec_t2E99F05612A09BBA0F3287A6222B202E2326F6DF * __this, OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(f => $"{f.GetType().FullName}_{f.version}").ToArray()
		OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * L_0 = ___f0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * L_3 = ___f0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_version_8();
		String_t* L_5;
		L_5 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_2, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_4, /*hidden argument*/NULL);
		return L_5;
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
// Conversion methods for marshalling of: UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent
IL2CPP_EXTERN_C void InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B_marshal_pinvoke(const InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B& unmarshaled, InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___available_extensions_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'available_extensions' of type 'InitializeEvent'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___available_extensions_5Exception, NULL);
}
IL2CPP_EXTERN_C void InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B_marshal_pinvoke_back(const InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B_marshaled_pinvoke& marshaled, InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B& unmarshaled)
{
	Exception_t* ___available_extensions_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'available_extensions' of type 'InitializeEvent'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___available_extensions_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent
IL2CPP_EXTERN_C void InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B_marshal_pinvoke_cleanup(InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent
IL2CPP_EXTERN_C void InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B_marshal_com(const InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B& unmarshaled, InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B_marshaled_com& marshaled)
{
	Exception_t* ___available_extensions_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'available_extensions' of type 'InitializeEvent'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___available_extensions_5Exception, NULL);
}
IL2CPP_EXTERN_C void InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B_marshal_com_back(const InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B_marshaled_com& marshaled, InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B& unmarshaled)
{
	Exception_t* ___available_extensions_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'available_extensions' of type 'InitializeEvent'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___available_extensions_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent
IL2CPP_EXTERN_C void InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B_marshal_com_cleanup(InitializeEvent_t9726215F8A7ECF0CA4C99BBB767A491D5E0F2E5B_marshaled_com& marshaled)
{
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
// System.Void UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA80882876BD060897F49A958E24F04C6A94E6F72 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5 * L_0 = (U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5 *)il2cpp_codegen_object_new(U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE0D2427296248DFB946E0051E36563280CA41B5B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE0D2427296248DFB946E0051E36563280CA41B5B (U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c::<AttachActionSets>b__9_0(UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAttachActionSetsU3Eb__9_0_m9151D88F7CD659461CA1924C794B5352E1B7598C (U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5 * __this, OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43 * ___f0, const RuntimeMethod* method)
{
	{
		// foreach(var interactionFeature in OpenXRSettings.Instance.features.OfType<OpenXRInteractionFeature>().Where(f => f.enabled))
		OpenXRInteractionFeature_tB46A8FFE6491A26AF834EA1B1E0172BA33F2EA43 * L_0 = ___f0;
		NullCheck(L_0);
		bool L_1;
		L_1 = OpenXRFeature_get_enabled_m885B86B740B58647E7A02E4732EA4AC4696E9268(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c::<AttachActionSets>b__9_1(UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/DeviceConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CAttachActionSetsU3Eb__9_1_mC31986187FAC2DD0C0501D084156193951067DC2 (U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5 * __this, DeviceConfig_tBC37C5EA2384BCB69BD0153C3E1387E4DB5461BF * ___d0, const RuntimeMethod* method)
{
	{
		// var deviceUserPaths = actionMap.deviceInfos.Select(d => d.userPath).ToList();
		DeviceConfig_tBC37C5EA2384BCB69BD0153C3E1387E4DB5461BF * L_0 = ___d0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_userPath_1();
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c::<AttachActionSets>b__9_2(UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAttachActionSetsU3Eb__9_2_m8E5BA0AF9E1CEE794B1688BB426978A4FC233DC0 (U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5 * __this, ActionBinding_t659CB6F4241434629DC1CD8ACC9A3CAE8D27D3B2 * ___b0, const RuntimeMethod* method)
{
	{
		// var bindingUserPaths = action.bindings.Where(b => b.userPaths != null).SelectMany(b => b.userPaths).Distinct().ToList();
		ActionBinding_t659CB6F4241434629DC1CD8ACC9A3CAE8D27D3B2 * L_0 = ___b0;
		NullCheck(L_0);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = L_0->get_userPaths_2();
		return (bool)((!(((RuntimeObject*)(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c::<AttachActionSets>b__9_3(UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CAttachActionSetsU3Eb__9_3_mC693C079F5D4784B5743AA5822193DC0EAC0250C (U3CU3Ec_t2E664B5B35809F80E6AA9DE17EE31C888A41A9F5 * __this, ActionBinding_t659CB6F4241434629DC1CD8ACC9A3CAE8D27D3B2 * ___b0, const RuntimeMethod* method)
{
	{
		// var bindingUserPaths = action.bindings.Where(b => b.userPaths != null).SelectMany(b => b.userPaths).Distinct().ToList();
		ActionBinding_t659CB6F4241434629DC1CD8ACC9A3CAE8D27D3B2 * L_0 = ___b0;
		NullCheck(L_0);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = L_0->get_userPaths_2();
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
// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.XR.OpenXR.Input.OpenXRInput/GetInternalDeviceIdCommand::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  GetInternalDeviceIdCommand_get_Type_m7BBDFA67C6F98C247173102F1CE7C8555B23F35A (const RuntimeMethod* method)
{
	{
		// private static FourCC Type => new FourCC('X', 'R', 'D', 'I');
		FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		FourCC__ctor_mEF52BABF36FD0F6E63A5CD7C1520AEFDAC9FCC14((&L_0), ((int32_t)88), ((int32_t)82), ((int32_t)68), ((int32_t)73), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.XR.OpenXR.Input.OpenXRInput/GetInternalDeviceIdCommand::get_typeStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  GetInternalDeviceIdCommand_get_typeStatic_mE151B7E40FDC7C1C7CA6CD87D9A6F182CDC71439 (GetInternalDeviceIdCommand_tDABB67AE984187CD7533AD65FBF96F9587004A98 * __this, const RuntimeMethod* method)
{
	{
		// public FourCC typeStatic => Type;
		FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  L_0;
		L_0 = GetInternalDeviceIdCommand_get_Type_m7BBDFA67C6F98C247173102F1CE7C8555B23F35A(/*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  GetInternalDeviceIdCommand_get_typeStatic_mE151B7E40FDC7C1C7CA6CD87D9A6F182CDC71439_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GetInternalDeviceIdCommand_tDABB67AE984187CD7533AD65FBF96F9587004A98 * _thisAdjusted = reinterpret_cast<GetInternalDeviceIdCommand_tDABB67AE984187CD7533AD65FBF96F9587004A98 *>(__this + _offset);
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  _returnValue;
	_returnValue = GetInternalDeviceIdCommand_get_typeStatic_mE151B7E40FDC7C1C7CA6CD87D9A6F182CDC71439(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.OpenXR.Input.OpenXRInput/GetInternalDeviceIdCommand UnityEngine.XR.OpenXR.Input.OpenXRInput/GetInternalDeviceIdCommand::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GetInternalDeviceIdCommand_tDABB67AE984187CD7533AD65FBF96F9587004A98  GetInternalDeviceIdCommand_Create_m6BF91DADDB15B1DE849D636D404A72701C0DCDBB (const RuntimeMethod* method)
{
	GetInternalDeviceIdCommand_tDABB67AE984187CD7533AD65FBF96F9587004A98  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// new GetInternalDeviceIdCommand { baseCommand = new InputDeviceCommand(Type, k_Size) };
		il2cpp_codegen_initobj((&V_0), sizeof(GetInternalDeviceIdCommand_tDABB67AE984187CD7533AD65FBF96F9587004A98 ));
		FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  L_0;
		L_0 = GetInternalDeviceIdCommand_get_Type_m7BBDFA67C6F98C247173102F1CE7C8555B23F35A(/*hidden argument*/NULL);
		InputDeviceCommand_tBA7404132CBAC1E564F79E5B8B6A258527976AD3  L_1;
		memset((&L_1), 0, sizeof(L_1));
		InputDeviceCommand__ctor_m37D7C9AC95972F2F9075C62240B5D15119E40271((&L_1), L_0, ((int32_t)12), /*hidden argument*/NULL);
		(&V_0)->set_baseCommand_2(L_1);
		GetInternalDeviceIdCommand_tDABB67AE984187CD7533AD65FBF96F9587004A98  L_2 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedBinding
IL2CPP_EXTERN_C void SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F_marshal_pinvoke(const SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F& unmarshaled, SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F_marshaled_pinvoke& marshaled)
{
	marshaled.___actionId_0 = unmarshaled.get_actionId_0();
	marshaled.___path_1 = il2cpp_codegen_marshal_string(unmarshaled.get_path_1());
}
IL2CPP_EXTERN_C void SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F_marshal_pinvoke_back(const SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F_marshaled_pinvoke& marshaled, SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F& unmarshaled)
{
	uint64_t unmarshaled_actionId_temp_0 = 0;
	unmarshaled_actionId_temp_0 = marshaled.___actionId_0;
	unmarshaled.set_actionId_0(unmarshaled_actionId_temp_0);
	unmarshaled.set_path_1(il2cpp_codegen_marshal_string_result(marshaled.___path_1));
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedBinding
IL2CPP_EXTERN_C void SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F_marshal_pinvoke_cleanup(SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___path_1);
	marshaled.___path_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedBinding
IL2CPP_EXTERN_C void SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F_marshal_com(const SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F& unmarshaled, SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F_marshaled_com& marshaled)
{
	marshaled.___actionId_0 = unmarshaled.get_actionId_0();
	marshaled.___path_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_path_1());
}
IL2CPP_EXTERN_C void SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F_marshal_com_back(const SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F_marshaled_com& marshaled, SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F& unmarshaled)
{
	uint64_t unmarshaled_actionId_temp_0 = 0;
	unmarshaled_actionId_temp_0 = marshaled.___actionId_0;
	unmarshaled.set_actionId_0(unmarshaled_actionId_temp_0);
	unmarshaled.set_path_1(il2cpp_codegen_marshal_bstring_result(marshaled.___path_1));
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedBinding
IL2CPP_EXTERN_C void SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F_marshal_com_cleanup(SerializedBinding_t6754BE38A661BCD50AD1D3C4AA045AEFA692784F_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___path_1);
	marshaled.___path_1 = NULL;
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
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionBinding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBinding__ctor_m47F790F95342E158E6AE8AD6D3EBAB8F5A5AB9CE (ActionBinding_t659CB6F4241434629DC1CD8ACC9A3CAE8D27D3B2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionConfig__ctor_m9BB9D712BBE8B651DB731D1AD40F494F31BC66C2 (ActionConfig_t369A0AD8D90D166FA237468147267699CF53B57F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionMapConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionMapConfig__ctor_m40CA74F57FCB40D9CD00EDEE2B74067427BEA584 (ActionMapConfig_t7A4E65BA5E4A61EC2C706E91C78E8C81AC230663 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/DeviceConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceConfig__ctor_m954164B4918FD51EA75DC865002AD8B3D1604223 (DeviceConfig_tBC37C5EA2384BCB69BD0153C3E1387E4DB5461BF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.OpenXR.OpenXRLoaderBase/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m70D4133899DCF04AAA51898FED17E5ED47C024B8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3 * L_0 = (U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3 *)il2cpp_codegen_object_new(U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m10DBD678F6F7B586ACCC4928C036C9E35E0AB40C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.OpenXRLoaderBase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m10DBD678F6F7B586ACCC4928C036C9E35E0AB40C (U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.OpenXR.OpenXRLoaderBase/<>c::<InitializeInternal>b__31_0(UnityEngine.XR.OpenXR.Features.OpenXRFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CInitializeInternalU3Eb__31_0_m9904A416E8C86FE127C8DD67250B420C6368A029 (U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3 * __this, OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(f => f != null)
		OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * L_0 = ___f0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.XR.OpenXR.OpenXRLoaderBase/<>c::<InitializeInternal>b__31_1(UnityEngine.XR.OpenXR.Features.OpenXRFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CInitializeInternalU3Eb__31_1_m0B2FEF335CF78F4FA12C068501C3961F41146349 (U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3 * __this, OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * ___f0, const RuntimeMethod* method)
{
	{
		// .OrderByDescending(f => f.priority)
		OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * L_0 = ___f0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_priority_12();
		return L_1;
	}
}
// System.String UnityEngine.XR.OpenXR.OpenXRLoaderBase/<>c::<InitializeInternal>b__31_2(UnityEngine.XR.OpenXR.Features.OpenXRFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CInitializeInternalU3Eb__31_2_m7993401AE793BCBDAD811671286B87216A2B5B47 (U3CU3Ec_tEC994175E2E1DD1DB9D7F19470ACA7BD001046F3 * __this, OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * ___f0, const RuntimeMethod* method)
{
	{
		// .ThenBy(f => f.nameUi)
		OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * L_0 = ___f0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_nameUi_7();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReceiveNativeEventDelegate_t34641E86FBD0380CE83C7C3827A33D9D531991D7 (ReceiveNativeEventDelegate_t34641E86FBD0380CE83C7C3827A33D9D531991D7 * __this, int32_t ___e0, uint64_t ___payload1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___e0, ___payload1);

}
// System.Void UnityEngine.XR.OpenXR.OpenXRLoaderBase/ReceiveNativeEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveNativeEventDelegate__ctor_m8806B341E525E7AE97BC9058FC6BC599CEB5350B (ReceiveNativeEventDelegate_t34641E86FBD0380CE83C7C3827A33D9D531991D7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.OpenXR.OpenXRLoaderBase/ReceiveNativeEventDelegate::Invoke(UnityEngine.XR.OpenXR.Features.OpenXRFeature/NativeEvent,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveNativeEventDelegate_Invoke_m6EC7A20E314E48A78EAA1B142B544C0AE47EBA7E (ReceiveNativeEventDelegate_t34641E86FBD0380CE83C7C3827A33D9D531991D7 * __this, int32_t ___e0, uint64_t ___payload1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (int32_t, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___e0, ___payload1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___e0, ___payload1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, uint64_t >::Invoke(targetMethod, targetThis, ___e0, ___payload1);
					else
						GenericVirtActionInvoker2< int32_t, uint64_t >::Invoke(targetMethod, targetThis, ___e0, ___payload1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___e0, ___payload1);
					else
						VirtActionInvoker2< int32_t, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___e0, ___payload1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___e0) - 1), ___payload1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, uint64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___e0, ___payload1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.OpenXR.OpenXRLoaderBase/ReceiveNativeEventDelegate::BeginInvoke(UnityEngine.XR.OpenXR.Features.OpenXRFeature/NativeEvent,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReceiveNativeEventDelegate_BeginInvoke_m7A6AD3E688A8F58129A10CD198EE0AFC5FD17C5D (ReceiveNativeEventDelegate_t34641E86FBD0380CE83C7C3827A33D9D531991D7 * __this, int32_t ___e0, uint64_t ___payload1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeEvent_t94138199EE1CC201C255637BA0005DC42F64E440_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(NativeEvent_t94138199EE1CC201C255637BA0005DC42F64E440_il2cpp_TypeInfo_var, &___e0);
	__d_args[1] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___payload1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.XR.OpenXR.OpenXRLoaderBase/ReceiveNativeEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveNativeEventDelegate_EndInvoke_m68FB1AF992BA92C007B0459A51C9591AF759C367 (ReceiveNativeEventDelegate_t34641E86FBD0380CE83C7C3827A33D9D531991D7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRetryInitializationCoroutineU3Ed__25__ctor_m2A1C115E8D83D9CA78D184781846346CA62F9AE3 (U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRetryInitializationCoroutineU3Ed__25_System_IDisposable_Dispose_m0046BCC0B5E13DA25F31D0D9DD794E5EC4A6A11E (U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))) <= ((uint32_t)1))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		U3CPauseAndRetryInitializationCoroutineU3Ed__25_U3CU3Em__Finally1_m9F7F206A77779C08459F076B31EB0971015AAAE6(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPauseAndRetryInitializationCoroutineU3Ed__25_MoveNext_m17BDCB55725049B65A0E49E5ED6541E76AB8C578 (U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForRestartFinish_t1E531A0B84387E912CDA4C5079FE2D1D00C1FDC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0027;
				}
				case 1:
				{
					goto IL_0052;
				}
				case 2:
				{
					goto IL_0075;
				}
			}
		}

IL_0020:
		{
			V_0 = (bool)0;
			goto IL_00c5;
		}

IL_0027:
		{
			__this->set_U3CU3E1__state_0((-1));
			// {
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return new WaitForSeconds(pauseTimeInSeconds);
			float L_3 = __this->get_pauseTimeInSeconds_2();
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_4);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00c5;
		}

IL_0052:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return new WaitForRestartFinish();
			WaitForRestartFinish_t1E531A0B84387E912CDA4C5079FE2D1D00C1FDC6 * L_5 = (WaitForRestartFinish_t1E531A0B84387E912CDA4C5079FE2D1D00C1FDC6 *)il2cpp_codegen_object_new(WaitForRestartFinish_t1E531A0B84387E912CDA4C5079FE2D1D00C1FDC6_il2cpp_TypeInfo_var);
			WaitForRestartFinish__ctor_m18B306D8B5763F43BFB9978F92D124F28C55C37D(L_5, (5.0f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_5);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_00c5;
		}

IL_0075:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// bool shouldSkipRestart = XRGeneralSettings.Instance.Manager.activeLoader != null;
			IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
			XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_6;
			L_6 = XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline(/*hidden argument*/NULL);
			NullCheck(L_6);
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_7;
			L_7 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_8;
			L_8 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_9;
			L_9 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			// if (!shouldSkipRestart)
			if (L_9)
			{
				goto IL_00b4;
			}
		}

IL_0094:
		{
			// m_pauseAndRestartAttempts += 1;
			IL2CPP_RUNTIME_CLASS_INIT(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_il2cpp_TypeInfo_var);
			int32_t L_10 = ((OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_il2cpp_TypeInfo_var))->get_m_pauseAndRestartAttempts_11();
			((OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_il2cpp_TypeInfo_var))->set_m_pauseAndRestartAttempts_11(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
			// m_Coroutine = StartCoroutine(RestartCoroutine(true, false));
			OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_11 = V_2;
			OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_12 = V_2;
			OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_13 = V_2;
			NullCheck(L_13);
			RuntimeObject* L_14;
			L_14 = OpenXRRestarter_RestartCoroutine_mC4DEA1DCB9B4AAC5488F61B494C19A9EB761345D(L_13, (bool)1, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_12);
			Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_15;
			L_15 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_12, L_14, /*hidden argument*/NULL);
			NullCheck(L_11);
			L_11->set_m_Coroutine_10(L_15);
		}

IL_00b4:
		{
			// }
			U3CPauseAndRetryInitializationCoroutineU3Ed__25_U3CU3Em__Finally1_m9F7F206A77779C08459F076B31EB0971015AAAE6(__this, /*hidden argument*/NULL);
			// }
			V_0 = (bool)0;
			goto IL_00c5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00be;
	}

FAULT_00be:
	{ // begin fault (depth: 1)
		U3CPauseAndRetryInitializationCoroutineU3Ed__25_System_IDisposable_Dispose_m0046BCC0B5E13DA25F31D0D9DD794E5EC4A6A11E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(190)
	} // end fault
	IL2CPP_CLEANUP(190)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c5:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRetryInitializationCoroutineU3Ed__25_U3CU3Em__Finally1_m9F7F206A77779C08459F076B31EB0971015AAAE6 (U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_0 = __this->get_U3CU3E4__this_3();
		// onAfterCoroutine?.Invoke();
		NullCheck(L_0);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0->get_onAfterCoroutine_7();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPauseAndRetryInitializationCoroutineU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE13E192CA64D1E1FF67F1EB1B617D0E0DA9CC48A (U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndRetryInitializationCoroutineU3Ed__25_System_Collections_IEnumerator_Reset_mFB4DCDED33676B67D4FEB0D56E5C3205FF999ACD (U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPauseAndRetryInitializationCoroutineU3Ed__25_System_Collections_IEnumerator_Reset_mFB4DCDED33676B67D4FEB0D56E5C3205FF999ACD_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPauseAndRetryInitializationCoroutineU3Ed__25_System_Collections_IEnumerator_get_Current_mDC1F524E5FF26E5CD3362FFE91A4EA9310DCB9A5 (U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndShutdownAndRestartCoroutineU3Ed__24__ctor_m5856D5503A54E0A6B38C3653FDF57DBCDE316BF5 (U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_t2DD20E2036281B0023F5DD0E7FFC9635B4C088F2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_System_IDisposable_Dispose_m3CCB93EF3F5C84504CAD64522DAFAFC36E912538 (U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_t2DD20E2036281B0023F5DD0E7FFC9635B4C088F2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))) <= ((uint32_t)1))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_U3CU3Em__Finally1_m59BDA24B35EAD1411EB8572B97E415D8C6C7C070(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_MoveNext_mCCD2E9B23025B247F597648ECE60FC579364AC11 (U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_t2DD20E2036281B0023F5DD0E7FFC9635B4C088F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForRestartFinish_t1E531A0B84387E912CDA4C5079FE2D1D00C1FDC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0027;
				}
				case 1:
				{
					goto IL_0052;
				}
				case 2:
				{
					goto IL_0075;
				}
			}
		}

IL_0020:
		{
			V_0 = (bool)0;
			goto IL_00ae;
		}

IL_0027:
		{
			__this->set_U3CU3E1__state_0((-1));
			// {
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return new WaitForSeconds(pauseTimeInSeconds);
			float L_3 = __this->get_pauseTimeInSeconds_2();
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_4);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00ae;
		}

IL_0052:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return new WaitForRestartFinish();
			WaitForRestartFinish_t1E531A0B84387E912CDA4C5079FE2D1D00C1FDC6 * L_5 = (WaitForRestartFinish_t1E531A0B84387E912CDA4C5079FE2D1D00C1FDC6 *)il2cpp_codegen_object_new(WaitForRestartFinish_t1E531A0B84387E912CDA4C5079FE2D1D00C1FDC6_il2cpp_TypeInfo_var);
			WaitForRestartFinish__ctor_m18B306D8B5763F43BFB9978F92D124F28C55C37D(L_5, (5.0f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_5);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_00ae;
		}

IL_0075:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// m_pauseAndRestartAttempts += 1;
			IL2CPP_RUNTIME_CLASS_INIT(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_il2cpp_TypeInfo_var);
			int32_t L_6 = ((OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_il2cpp_TypeInfo_var))->get_m_pauseAndRestartAttempts_11();
			((OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_il2cpp_TypeInfo_var))->set_m_pauseAndRestartAttempts_11(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
			// m_Coroutine = StartCoroutine(RestartCoroutine(true, true));
			OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_7 = V_2;
			OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_8 = V_2;
			OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_9 = V_2;
			NullCheck(L_9);
			RuntimeObject* L_10;
			L_10 = OpenXRRestarter_RestartCoroutine_mC4DEA1DCB9B4AAC5488F61B494C19A9EB761345D(L_9, (bool)1, (bool)1, /*hidden argument*/NULL);
			NullCheck(L_8);
			Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_11;
			L_11 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_8, L_10, /*hidden argument*/NULL);
			NullCheck(L_7);
			L_7->set_m_Coroutine_10(L_11);
			// }
			U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_U3CU3Em__Finally1_m59BDA24B35EAD1411EB8572B97E415D8C6C7C070(__this, /*hidden argument*/NULL);
			// }
			V_0 = (bool)0;
			goto IL_00ae;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00a7;
	}

FAULT_00a7:
	{ // begin fault (depth: 1)
		U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_System_IDisposable_Dispose_m3CCB93EF3F5C84504CAD64522DAFAFC36E912538(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(167)
	} // end fault
	IL2CPP_CLEANUP(167)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ae:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__24::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_U3CU3Em__Finally1_m59BDA24B35EAD1411EB8572B97E415D8C6C7C070 (U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_t2DD20E2036281B0023F5DD0E7FFC9635B4C088F2 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_0 = __this->get_U3CU3E4__this_3();
		// onAfterCoroutine?.Invoke();
		NullCheck(L_0);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0->get_onAfterCoroutine_7();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8CEDBDF99B5DD6D6FF0ABFCFD64CF7070907F205 (U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_t2DD20E2036281B0023F5DD0E7FFC9635B4C088F2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_System_Collections_IEnumerator_Reset_m93A3117F09CA7E5606917E5932559BA7B7027016 (U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_t2DD20E2036281B0023F5DD0E7FFC9635B4C088F2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_System_Collections_IEnumerator_Reset_m93A3117F09CA7E5606917E5932559BA7B7027016_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndShutdownAndRestartCoroutine>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_System_Collections_IEnumerator_get_Current_mD1FF7274AACAE115336B0F0380948A656EB6AFCF (U3CPauseAndShutdownAndRestartCoroutineU3Ed__24_t2DD20E2036281B0023F5DD0E7FFC9635B4C088F2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__26__ctor_mB872B30778EE48232F5739A58420A913B2C1C192 (U3CRestartCoroutineU3Ed__26_tC49307D9D8268F189EE679F671D7819D2C729749 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__26_System_IDisposable_Dispose_mE022DBF3D9438468460250267B90F19164AB9A6E (U3CRestartCoroutineU3Ed__26_tC49307D9D8268F189EE679F671D7819D2C729749 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))) <= ((uint32_t)2))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		U3CRestartCoroutineU3Ed__26_U3CU3Em__Finally1_m8A43B94DC6F826FD4259DD34CD910F201679ACCE(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRestartCoroutineU3Ed__26_MoveNext_m2E7B0E0DC96E394714CD6B4A1606C8F2A0EA154F (U3CRestartCoroutineU3Ed__26_tC49307D9D8268F189EE679F671D7819D2C729749 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1B168A27A20FBC71F68A13C1177A7928C95537F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2934AD2E30B910F9A57BA805ABFCC02C5AE59DB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B7_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B6_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B14_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B13_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B17_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B16_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B21_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B20_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002b;
				}
				case 1:
				{
					goto IL_0061;
				}
				case 2:
				{
					goto IL_008d;
				}
				case 3:
				{
					goto IL_00e8;
				}
			}
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_016e;
		}

IL_002b:
		{
			__this->set_U3CU3E1__state_0((-1));
			// {
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// if (shouldShutdown)
			bool L_3 = __this->get_shouldShutdown_2();
			if (!L_3)
			{
				goto IL_00a6;
			}
		}

IL_0042:
		{
			// Debug.Log("Shutting down OpenXR.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteralC2934AD2E30B910F9A57BA805ABFCC02C5AE59DB, /*hidden argument*/NULL);
			// yield return null;
			__this->set_U3CU3E2__current_1(NULL);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_016e;
		}

IL_0061:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// XRGeneralSettings.Instance.Manager.DeinitializeLoader();
			IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
			XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_4;
			L_4 = XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline(/*hidden argument*/NULL);
			NullCheck(L_4);
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_5;
			L_5 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			XRManagerSettings_DeinitializeLoader_m6AD4F079818DF78946C99AD8D49E3D343DAAF290(L_5, /*hidden argument*/NULL);
			// yield return null;
			__this->set_U3CU3E2__current_1(NULL);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_016e;
		}

IL_008d:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// onAfterShutdown?.Invoke();
			OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_6 = V_2;
			NullCheck(L_6);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = L_6->get_onAfterShutdown_5();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = L_7;
			G_B6_0 = L_8;
			if (L_8)
			{
				G_B7_0 = L_8;
				goto IL_00a1;
			}
		}

IL_009e:
		{
			goto IL_00a6;
		}

IL_00a1:
		{
			NullCheck(G_B7_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B7_0, /*hidden argument*/NULL);
		}

IL_00a6:
		{
			// if (shouldRestart && OpenXRRuntime.ShouldRestart())
			bool L_9 = __this->get_shouldRestart_4();
			if (!L_9)
			{
				goto IL_0140;
			}
		}

IL_00b1:
		{
			bool L_10;
			L_10 = OpenXRRuntime_ShouldRestart_m21AA17A086AA61BAC8FBF650A573846D67C94212(/*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_0140;
			}
		}

IL_00bb:
		{
			// Debug.Log("Initializing OpenXR.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(_stringLiteralA1B168A27A20FBC71F68A13C1177A7928C95537F, /*hidden argument*/NULL);
			// yield return XRGeneralSettings.Instance.Manager.InitializeLoader();
			IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
			XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_11;
			L_11 = XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline(/*hidden argument*/NULL);
			NullCheck(L_11);
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_12;
			L_12 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_11, /*hidden argument*/NULL);
			NullCheck(L_12);
			RuntimeObject* L_13;
			L_13 = XRManagerSettings_InitializeLoader_m92B987C89AF6F7E7D05718296243E0ED021FD6B3(L_12, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_13);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_016e;
		}

IL_00e8:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// XRGeneralSettings.Instance.Manager.StartSubsystems();
			IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
			XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_14;
			L_14 = XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline(/*hidden argument*/NULL);
			NullCheck(L_14);
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_15;
			L_15 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			XRManagerSettings_StartSubsystems_mB9F502956C1FC6AD6D421CD36C3980B095B4282E(L_15, /*hidden argument*/NULL);
			// if (XRGeneralSettings.Instance.Manager.activeLoader != null)
			XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_16;
			L_16 = XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline(/*hidden argument*/NULL);
			NullCheck(L_16);
			XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_17;
			L_17 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_16, /*hidden argument*/NULL);
			NullCheck(L_17);
			XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_18;
			L_18 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_19;
			L_19 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_012d;
			}
		}

IL_0116:
		{
			// m_pauseAndRestartAttempts = 0;
			IL2CPP_RUNTIME_CLASS_INIT(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_il2cpp_TypeInfo_var);
			((OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944_il2cpp_TypeInfo_var))->set_m_pauseAndRestartAttempts_11(0);
			// onAfterSuccessfulRestart?.Invoke();
			OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_20 = V_2;
			NullCheck(L_20);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_21 = L_20->get_onAfterSuccessfulRestart_8();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_22 = L_21;
			G_B13_0 = L_22;
			if (L_22)
			{
				G_B14_0 = L_22;
				goto IL_0128;
			}
		}

IL_0125:
		{
			goto IL_012d;
		}

IL_0128:
		{
			NullCheck(G_B14_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B14_0, /*hidden argument*/NULL);
		}

IL_012d:
		{
			// onAfterRestart?.Invoke();
			OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_23 = V_2;
			NullCheck(L_23);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_24 = L_23->get_onAfterRestart_4();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_25 = L_24;
			G_B16_0 = L_25;
			if (L_25)
			{
				G_B17_0 = L_25;
				goto IL_0139;
			}
		}

IL_0136:
		{
			goto IL_015d;
		}

IL_0139:
		{
			NullCheck(G_B17_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B17_0, /*hidden argument*/NULL);
			// }
			goto IL_015d;
		}

IL_0140:
		{
			// else if (OpenXRRuntime.ShouldQuit())
			bool L_26;
			L_26 = OpenXRRuntime_ShouldQuit_mBA68FD485374C5D8F790D1F8482CB4E2E55CCD0E(/*hidden argument*/NULL);
			if (!L_26)
			{
				goto IL_015d;
			}
		}

IL_0147:
		{
			// onQuit?.Invoke();
			OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_27 = V_2;
			NullCheck(L_27);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_28 = L_27->get_onQuit_6();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_29 = L_28;
			G_B20_0 = L_29;
			if (L_29)
			{
				G_B21_0 = L_29;
				goto IL_0153;
			}
		}

IL_0150:
		{
			goto IL_0158;
		}

IL_0153:
		{
			NullCheck(G_B21_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B21_0, /*hidden argument*/NULL);
		}

IL_0158:
		{
			// Application.Quit();
			Application_Quit_m10E44C187C0E5807F9C955A176885FAA95829267(/*hidden argument*/NULL);
		}

IL_015d:
		{
			// }
			U3CRestartCoroutineU3Ed__26_U3CU3Em__Finally1_m8A43B94DC6F826FD4259DD34CD910F201679ACCE(__this, /*hidden argument*/NULL);
			// }
			V_0 = (bool)0;
			goto IL_016e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0167;
	}

FAULT_0167:
	{ // begin fault (depth: 1)
		U3CRestartCoroutineU3Ed__26_System_IDisposable_Dispose_mE022DBF3D9438468460250267B90F19164AB9A6E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(359)
	} // end fault
	IL2CPP_CLEANUP(359)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_016e:
	{
		bool L_30 = V_0;
		return L_30;
	}
}
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__26::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__26_U3CU3Em__Finally1_m8A43B94DC6F826FD4259DD34CD910F201679ACCE (U3CRestartCoroutineU3Ed__26_tC49307D9D8268F189EE679F671D7819D2C729749 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_0 = __this->get_U3CU3E4__this_3();
		// m_Coroutine = null;
		OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_m_Coroutine_10((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// onAfterCoroutine?.Invoke();
		NullCheck(L_1);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = L_1->get_onAfterCoroutine_7();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRestartCoroutineU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2F048E764CAB2B2AB064D95D72B5733D1A09DE85 (U3CRestartCoroutineU3Ed__26_tC49307D9D8268F189EE679F671D7819D2C729749 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartCoroutineU3Ed__26_System_Collections_IEnumerator_Reset_m9DA7F824B5C91E74A72FC6C4A3D6BF6CDFD4B17C (U3CRestartCoroutineU3Ed__26_tC49307D9D8268F189EE679F671D7819D2C729749 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRestartCoroutineU3Ed__26_System_Collections_IEnumerator_Reset_m9DA7F824B5C91E74A72FC6C4A3D6BF6CDFD4B17C_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRestartCoroutineU3Ed__26_System_Collections_IEnumerator_get_Current_mC3DCE022AE92937B1C6D0A226A31799263420E00 (U3CRestartCoroutineU3Ed__26_tC49307D9D8268F189EE679F671D7819D2C729749 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_system()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ValveIndexController_get_system_mB56E3FC3405FAEF02D3C73B6B9FCE096FE901AC3 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl system { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = __this->get_U3CsystemU3Ek__BackingField_43();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_system(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_system_m56292448E97CECC8F9A2BFE5FB12545A4D9F5DB0 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl system { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CsystemU3Ek__BackingField_43(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_systemTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ValveIndexController_get_systemTouched_m145B6CE5E7D67BF6813FD21048F0A3BF354A85FD (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl systemTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = __this->get_U3CsystemTouchedU3Ek__BackingField_44();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_systemTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_systemTouched_m21F560BD50743E9CCBD76A924968CA354CECACC0 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl systemTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CsystemTouchedU3Ek__BackingField_44(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_primaryButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ValveIndexController_get_primaryButton_m5F70383E5C508CFB12575B3625D24E863508FE77 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryButton { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = __this->get_U3CprimaryButtonU3Ek__BackingField_45();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_primaryButton(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_primaryButton_m487E02666D526A79B83CA83546B6103E94F5A90C (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryButton { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CprimaryButtonU3Ek__BackingField_45(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_primaryTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ValveIndexController_get_primaryTouched_mC82D9C411E81FCF014B5A9773AB387BDCB39CFC3 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = __this->get_U3CprimaryTouchedU3Ek__BackingField_46();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_primaryTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_primaryTouched_m666B2E15DCEBE99C0777CD3B8E00752FE5E74025 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CprimaryTouchedU3Ek__BackingField_46(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_secondaryButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ValveIndexController_get_secondaryButton_m81777667D1D461E7EBE86AE02F557C770A322CDD (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryButton { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = __this->get_U3CsecondaryButtonU3Ek__BackingField_47();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_secondaryButton(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_secondaryButton_mECE5E8E760D1BF1FA22D00EF8D80EBDF7236DC42 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryButton { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CsecondaryButtonU3Ek__BackingField_47(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_secondaryTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ValveIndexController_get_secondaryTouched_mD3B916784C9FCCBB3A69F8DD4AEF9655356CDE7D (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = __this->get_U3CsecondaryTouchedU3Ek__BackingField_48();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_secondaryTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_secondaryTouched_mDABE319A1DD45252D1018BDBF4B9D2CF95FA5C74 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CsecondaryTouchedU3Ek__BackingField_48(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_grip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ValveIndexController_get_grip_mE53CE1CB891BCC29D60188221CD691CCBC7177A3 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * L_0 = __this->get_U3CgripU3Ek__BackingField_49();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_grip(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_grip_m0667D7377E35C59E0A070508B4D2C4B2DC27ED69 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * L_0 = ___value0;
		__this->set_U3CgripU3Ek__BackingField_49(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_gripPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ValveIndexController_get_gripPressed_m557681BFBE8AAC3924CBD94AAE878A8FD4412673 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = __this->get_U3CgripPressedU3Ek__BackingField_50();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_gripPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_gripPressed_m9A2B431173DB9849EE4716992155C2A5A582617C (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CgripPressedU3Ek__BackingField_50(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_gripForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ValveIndexController_get_gripForce_m50506012BD55B6722FFFC8D83387AB82CA45B2A4 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl gripForce { get; private set; }
		AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * L_0 = __this->get_U3CgripForceU3Ek__BackingField_51();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_gripForce(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_gripForce_m9A501C3FF6B07A7CE243A5B53EF1B1F2DEEAC403 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl gripForce { get; private set; }
		AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * L_0 = ___value0;
		__this->set_U3CgripForceU3Ek__BackingField_51(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ValveIndexController_get_trigger_m3E29087121877AF6710D158AA5AF1F6626CC5BE3 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * L_0 = __this->get_U3CtriggerU3Ek__BackingField_52();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_trigger(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_trigger_m6B498ADF4D9343E2EFA377E9E26312B3450A81D8 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * L_0 = ___value0;
		__this->set_U3CtriggerU3Ek__BackingField_52(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_triggerPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ValveIndexController_get_triggerPressed_mAB5B84DC3D219DDA59C03F299E1FF942FDC55B80 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = __this->get_U3CtriggerPressedU3Ek__BackingField_53();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_triggerPressed_m600FF7AC4DC8F65E5503DE08C42C3B135EF9C6B2 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CtriggerPressedU3Ek__BackingField_53(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_triggerTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ValveIndexController_get_triggerTouched_m1D7B1E2F3AD05FBBEFE4C696BCBE45C09CEA9AC0 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = __this->get_U3CtriggerTouchedU3Ek__BackingField_54();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_triggerTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_triggerTouched_mB8BC2AD613970D1FA693AB2F75F28F794E9A78C0 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CtriggerTouchedU3Ek__BackingField_54(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_thumbstick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * ValveIndexController_get_thumbstick_m9752CFFE36156340FADD9BAC5899A88B24774EC4 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Control thumbstick { get; private set; }
		Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * L_0 = __this->get_U3CthumbstickU3Ek__BackingField_55();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_thumbstick(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_thumbstick_mE75470A0047DDED5E9243AEF1FEB88176E61EF35 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control thumbstick { get; private set; }
		Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * L_0 = ___value0;
		__this->set_U3CthumbstickU3Ek__BackingField_55(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_thumbstickClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ValveIndexController_get_thumbstickClicked_m52F2B1EB813AA67D11B49ECCC14C89DE6343A1BB (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickClicked { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = __this->get_U3CthumbstickClickedU3Ek__BackingField_56();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_thumbstickClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_thumbstickClicked_m95B86DB987772BE2FAB0E68BC7259866656BADE4 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickClicked { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CthumbstickClickedU3Ek__BackingField_56(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_thumbstickTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ValveIndexController_get_thumbstickTouched_m0C4FD82890CC667FBA9F6A9224DC4A5B8D323E5C (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = __this->get_U3CthumbstickTouchedU3Ek__BackingField_57();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_thumbstickTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_thumbstickTouched_m17EA4F08E0998F619021AA8B74ED71AC835E9FB6 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CthumbstickTouchedU3Ek__BackingField_57(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_trackpad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * ValveIndexController_get_trackpad_m92B4DE879461501B4EA894530B39073CC1F7E5D1 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Control trackpad { get; private set; }
		Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * L_0 = __this->get_U3CtrackpadU3Ek__BackingField_58();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_trackpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_trackpad_m5477B50B206924A51876E7F105DBC12D46EA5429 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control trackpad { get; private set; }
		Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * L_0 = ___value0;
		__this->set_U3CtrackpadU3Ek__BackingField_58(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_trackpadTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ValveIndexController_get_trackpadTouched_mE1770414DDA835836F762C68F7407078499517C8 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl trackpadTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = __this->get_U3CtrackpadTouchedU3Ek__BackingField_59();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_trackpadTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_trackpadTouched_m08F3A118B08D66BCA365629F656509B904FB8B27 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl trackpadTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CtrackpadTouchedU3Ek__BackingField_59(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_trackpadForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ValveIndexController_get_trackpadForce_m4F53C0EB37560F0C7757235FEC0E73BE3E1007A4 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl trackpadForce { get; private set; }
		AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * L_0 = __this->get_U3CtrackpadForceU3Ek__BackingField_60();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_trackpadForce(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_trackpadForce_mDCBDB29002455245DC963249CB35EC9AACD2E06C (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trackpadForce { get; private set; }
		AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * L_0 = ___value0;
		__this->set_U3CtrackpadForceU3Ek__BackingField_60(L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.PoseControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_devicePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * ValveIndexController_get_devicePose_mD3EFEB2BC7EF3D147B6804A691A4BA1F85FC4766 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public PoseControl devicePose { get; private set; }
		PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * L_0 = __this->get_U3CdevicePoseU3Ek__BackingField_61();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_devicePose(UnityEngine.InputSystem.XR.PoseControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_devicePose_m503A80FD8707541C418D9412EC6240C705CE6292 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * ___value0, const RuntimeMethod* method)
{
	{
		// public PoseControl devicePose { get; private set; }
		PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * L_0 = ___value0;
		__this->set_U3CdevicePoseU3Ek__BackingField_61(L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.PoseControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_pointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * ValveIndexController_get_pointer_m7D278F605C78F19D630502889959C1004FC66454 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public PoseControl pointer { get; private set; }
		PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * L_0 = __this->get_U3CpointerU3Ek__BackingField_62();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_pointer(UnityEngine.InputSystem.XR.PoseControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_pointer_m88FAFF50EF6F1B6E176F94D3F06E47620028B605 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * ___value0, const RuntimeMethod* method)
{
	{
		// public PoseControl pointer { get; private set; }
		PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * L_0 = ___value0;
		__this->set_U3CpointerU3Ek__BackingField_62(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ValveIndexController_get_isTracked_m3FA16E9E4FE3CEE94924EDEE820644F7E6AB4EC1 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// new public ButtonControl isTracked { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = __this->get_U3CisTrackedU3Ek__BackingField_63();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_isTracked_m233AD109538025684964B94F03584ECF51A6F54B (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// new public ButtonControl isTracked { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_63(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * ValveIndexController_get_trackingState_m9C8871B3DA3EF5B558F0D4641BFB6CD74DB2CF82 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// new public IntegerControl trackingState { get; private set; }
		IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_64();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_trackingState_m700986F71BD4F1E7DB90021511782423A4380E10 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * ___value0, const RuntimeMethod* method)
{
	{
		// new public IntegerControl trackingState { get; private set; }
		IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_64(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * ValveIndexController_get_devicePosition_m8938B908791DBE72A1257926646F769113E9281E (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// new public Vector3Control devicePosition { get; private set; }
		Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_65();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_devicePosition_m57743255D8FE94DE6F0ECC0BF8C82869719D4B86 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * ___value0, const RuntimeMethod* method)
{
	{
		// new public Vector3Control devicePosition { get; private set; }
		Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_65(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * ValveIndexController_get_deviceRotation_mE7B47A6129A462AE3F68D1116CCDB57F54179623 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// new public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_66();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_deviceRotation_m1B84BE363D0D3AEF16B1A570D9428C4F52414223 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * ___value0, const RuntimeMethod* method)
{
	{
		// new public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_66(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_pointerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * ValveIndexController_get_pointerPosition_mB825CACDD623B2E3A741D70B7B31B0D069F3F219 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control pointerPosition { get; private set; }
		Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * L_0 = __this->get_U3CpointerPositionU3Ek__BackingField_67();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_pointerPosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_pointerPosition_mA18701204A0FA8DB5EE76EE6AEF723C75B327102 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control pointerPosition { get; private set; }
		Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * L_0 = ___value0;
		__this->set_U3CpointerPositionU3Ek__BackingField_67(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_pointerRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * ValveIndexController_get_pointerRotation_m1927B86AE36F749220A589852802C6F3494DCA43 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public QuaternionControl pointerRotation { get; private set; }
		QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * L_0 = __this->get_U3CpointerRotationU3Ek__BackingField_68();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_pointerRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_pointerRotation_mA4A9C9784C97A7976D585DB4FAB4E0B12EB9DD69 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * ___value0, const RuntimeMethod* method)
{
	{
		// public QuaternionControl pointerRotation { get; private set; }
		QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * L_0 = ___value0;
		__this->set_U3CpointerRotationU3Ek__BackingField_68(L_0);
		return;
	}
}
// UnityEngine.XR.OpenXR.Input.HapticControl UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::get_haptic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C * ValveIndexController_get_haptic_mE1759A33477AAA354CBA2EE77B43FD535750166D (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		// public HapticControl haptic { get; private set; }
		HapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C * L_0 = __this->get_U3ChapticU3Ek__BackingField_69();
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::set_haptic(UnityEngine.XR.OpenXR.Input.HapticControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_set_haptic_mE875155C4D0E16A05DE93984578D7214D1C1D1FE (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, HapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C * ___value0, const RuntimeMethod* method)
{
	{
		// public HapticControl haptic { get; private set; }
		HapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C * L_0 = ___value0;
		__this->set_U3ChapticU3Ek__BackingField_69(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController_FinishSetup_mC1895E2E88EA5931C05648277E6A689DC2F153F4 (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisAxisControl_tA997FF52442F7B08C7E13B7028393B4117248680_m393D62A7199F4ECF21B55FD1C2DDB1D5B8C38813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisHapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C_m722FA03702F56653290DA54FAEDA642FA62350E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4_m79707C5EA0CD69CA2484E7CC0B3B291670BBC793_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisPoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17_mA16003670FD70C6D0ED6AB4984C3A3C97EAEFC49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48_m4A9B7A0F3BDE9673B05A4E6BEB8EE6D7D1CD4F96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector2Control_t271CA458D56BCA875642853132733D774B009A96_mFF8A48F6C9239AE81110CD7B5B5F63046BCAFC1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE_mD26314BFCC94ED995E96101D60D84A729E5F91AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D74755D51876350D4B4382E014E2E93AD3D3B73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F5B3EFDF6C5EC21CBEAF753BF5996D79FF36071);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3695EBDA6F8B5C617BDA3771BFB4AC68FB956407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46C52D35A125250F5FBD7AAB8CD2F6E82177916E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ADB212528F8CF625764142B108030A0499510F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C9B28579DAB706CEF903A85854B98A08280D27D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA5B233166AA50A8488D3B97E0B5A1D09EA4905);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A8CECB369E64DA7E1FBB6FDE079801EFD1EBFEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral767FF60B240D13D0E7862196C1340B1049EF4B4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral890FDBCF037770EED7A1937DEF697FFC44FBF0B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C0A1E9BF9118A96D440F9C412F1CA49D661D0EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E98EC4F7D85E6AB585D718D9BEDBB163E42B54C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5CCD6D3CB93DC1BEDD79DB8A4B75174089A3455);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB65ECF98859F9960AF3A135B1DB157C6A9E64500);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAB78FE52E1FDB7FF399F8778E6696CD0042FF45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9F573449435626A96C594EA43095A22DF995F84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0C07794D9D8D1547EF130F005ABD901FE8F5136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2F88218C8B7313CA69F05634BDB224484349ABF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6CFDC1274B766A282F7B3F8F7CCC8BDF8038D7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		XRController_FinishSetup_m30CF27D8142847ED6850AA8FADA625A82329D163(__this, /*hidden argument*/NULL);
		// system = GetChildControl<ButtonControl>("system");
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766(__this, _stringLiteral8C0A1E9BF9118A96D440F9C412F1CA49D661D0EE, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766_RuntimeMethod_var);
		ValveIndexController_set_system_m56292448E97CECC8F9A2BFE5FB12545A4D9F5DB0_inline(__this, L_0, /*hidden argument*/NULL);
		// systemTouched = GetChildControl<ButtonControl>("systemTouched");
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_1;
		L_1 = InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766(__this, _stringLiteralE2F88218C8B7313CA69F05634BDB224484349ABF, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766_RuntimeMethod_var);
		ValveIndexController_set_systemTouched_m21F560BD50743E9CCBD76A924968CA354CECACC0_inline(__this, L_1, /*hidden argument*/NULL);
		// primaryButton = GetChildControl<ButtonControl>("primaryButton");
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_2;
		L_2 = InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766(__this, _stringLiteral5DA5B233166AA50A8488D3B97E0B5A1D09EA4905, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766_RuntimeMethod_var);
		ValveIndexController_set_primaryButton_m487E02666D526A79B83CA83546B6103E94F5A90C_inline(__this, L_2, /*hidden argument*/NULL);
		// primaryTouched = GetChildControl<ButtonControl>("primaryTouched");
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_3;
		L_3 = InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766(__this, _stringLiteral9E98EC4F7D85E6AB585D718D9BEDBB163E42B54C, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766_RuntimeMethod_var);
		ValveIndexController_set_primaryTouched_m666B2E15DCEBE99C0777CD3B8E00752FE5E74025_inline(__this, L_3, /*hidden argument*/NULL);
		// secondaryButton = GetChildControl<ButtonControl>("secondaryButton");
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_4;
		L_4 = InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766(__this, _stringLiteral4ADB212528F8CF625764142B108030A0499510F0, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766_RuntimeMethod_var);
		ValveIndexController_set_secondaryButton_mECE5E8E760D1BF1FA22D00EF8D80EBDF7236DC42_inline(__this, L_4, /*hidden argument*/NULL);
		// secondaryTouched = GetChildControl<ButtonControl>("secondaryTouched");
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_5;
		L_5 = InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766(__this, _stringLiteral890FDBCF037770EED7A1937DEF697FFC44FBF0B3, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766_RuntimeMethod_var);
		ValveIndexController_set_secondaryTouched_mDABE319A1DD45252D1018BDBF4B9D2CF95FA5C74_inline(__this, L_5, /*hidden argument*/NULL);
		// grip = GetChildControl<AxisControl>("grip");
		AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * L_6;
		L_6 = InputControl_GetChildControl_TisAxisControl_tA997FF52442F7B08C7E13B7028393B4117248680_m393D62A7199F4ECF21B55FD1C2DDB1D5B8C38813(__this, _stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_tA997FF52442F7B08C7E13B7028393B4117248680_m393D62A7199F4ECF21B55FD1C2DDB1D5B8C38813_RuntimeMethod_var);
		ValveIndexController_set_grip_m0667D7377E35C59E0A070508B4D2C4B2DC27ED69_inline(__this, L_6, /*hidden argument*/NULL);
		// gripPressed = GetChildControl<ButtonControl>("gripPressed");
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_7;
		L_7 = InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766(__this, _stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766_RuntimeMethod_var);
		ValveIndexController_set_gripPressed_m9A2B431173DB9849EE4716992155C2A5A582617C_inline(__this, L_7, /*hidden argument*/NULL);
		// gripForce = GetChildControl<AxisControl>("gripForce");
		AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * L_8;
		L_8 = InputControl_GetChildControl_TisAxisControl_tA997FF52442F7B08C7E13B7028393B4117248680_m393D62A7199F4ECF21B55FD1C2DDB1D5B8C38813(__this, _stringLiteral0F5B3EFDF6C5EC21CBEAF753BF5996D79FF36071, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_tA997FF52442F7B08C7E13B7028393B4117248680_m393D62A7199F4ECF21B55FD1C2DDB1D5B8C38813_RuntimeMethod_var);
		ValveIndexController_set_gripForce_m9A501C3FF6B07A7CE243A5B53EF1B1F2DEEAC403_inline(__this, L_8, /*hidden argument*/NULL);
		// trigger = GetChildControl<AxisControl>("trigger");
		AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * L_9;
		L_9 = InputControl_GetChildControl_TisAxisControl_tA997FF52442F7B08C7E13B7028393B4117248680_m393D62A7199F4ECF21B55FD1C2DDB1D5B8C38813(__this, _stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_tA997FF52442F7B08C7E13B7028393B4117248680_m393D62A7199F4ECF21B55FD1C2DDB1D5B8C38813_RuntimeMethod_var);
		ValveIndexController_set_trigger_m6B498ADF4D9343E2EFA377E9E26312B3450A81D8_inline(__this, L_9, /*hidden argument*/NULL);
		// triggerPressed = GetChildControl<ButtonControl>("triggerPressed");
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_10;
		L_10 = InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766(__this, _stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766_RuntimeMethod_var);
		ValveIndexController_set_triggerPressed_m600FF7AC4DC8F65E5503DE08C42C3B135EF9C6B2_inline(__this, L_10, /*hidden argument*/NULL);
		// triggerTouched = GetChildControl<ButtonControl>("triggerTouched");
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_11;
		L_11 = InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766(__this, _stringLiteral767FF60B240D13D0E7862196C1340B1049EF4B4B, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766_RuntimeMethod_var);
		ValveIndexController_set_triggerTouched_mB8BC2AD613970D1FA693AB2F75F28F794E9A78C0_inline(__this, L_11, /*hidden argument*/NULL);
		// thumbstick = GetChildControl<Vector2Control>("thumbstick");
		Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * L_12;
		L_12 = InputControl_GetChildControl_TisVector2Control_t271CA458D56BCA875642853132733D774B009A96_mFF8A48F6C9239AE81110CD7B5B5F63046BCAFC1B(__this, _stringLiteral6A8CECB369E64DA7E1FBB6FDE079801EFD1EBFEB, /*hidden argument*/InputControl_GetChildControl_TisVector2Control_t271CA458D56BCA875642853132733D774B009A96_mFF8A48F6C9239AE81110CD7B5B5F63046BCAFC1B_RuntimeMethod_var);
		ValveIndexController_set_thumbstick_mE75470A0047DDED5E9243AEF1FEB88176E61EF35_inline(__this, L_12, /*hidden argument*/NULL);
		// thumbstickClicked = GetChildControl<ButtonControl>("thumbstickClicked");
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_13;
		L_13 = InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766(__this, _stringLiteralB5CCD6D3CB93DC1BEDD79DB8A4B75174089A3455, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766_RuntimeMethod_var);
		ValveIndexController_set_thumbstickClicked_m95B86DB987772BE2FAB0E68BC7259866656BADE4_inline(__this, L_13, /*hidden argument*/NULL);
		// thumbstickTouched = GetChildControl<ButtonControl>("thumbstickTouched");
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_14;
		L_14 = InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766(__this, _stringLiteral4C9B28579DAB706CEF903A85854B98A08280D27D, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766_RuntimeMethod_var);
		ValveIndexController_set_thumbstickTouched_m17EA4F08E0998F619021AA8B74ED71AC835E9FB6_inline(__this, L_14, /*hidden argument*/NULL);
		// trackpad = GetChildControl<Vector2Control>("trackpad");
		Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * L_15;
		L_15 = InputControl_GetChildControl_TisVector2Control_t271CA458D56BCA875642853132733D774B009A96_mFF8A48F6C9239AE81110CD7B5B5F63046BCAFC1B(__this, _stringLiteralD9F573449435626A96C594EA43095A22DF995F84, /*hidden argument*/InputControl_GetChildControl_TisVector2Control_t271CA458D56BCA875642853132733D774B009A96_mFF8A48F6C9239AE81110CD7B5B5F63046BCAFC1B_RuntimeMethod_var);
		ValveIndexController_set_trackpad_m5477B50B206924A51876E7F105DBC12D46EA5429_inline(__this, L_15, /*hidden argument*/NULL);
		// trackpadTouched = GetChildControl<ButtonControl>("trackpadTouched");
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_16;
		L_16 = InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766(__this, _stringLiteralB65ECF98859F9960AF3A135B1DB157C6A9E64500, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766_RuntimeMethod_var);
		ValveIndexController_set_trackpadTouched_m08F3A118B08D66BCA365629F656509B904FB8B27_inline(__this, L_16, /*hidden argument*/NULL);
		// trackpadForce = GetChildControl<AxisControl>("trackpadForce");
		AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * L_17;
		L_17 = InputControl_GetChildControl_TisAxisControl_tA997FF52442F7B08C7E13B7028393B4117248680_m393D62A7199F4ECF21B55FD1C2DDB1D5B8C38813(__this, _stringLiteral3695EBDA6F8B5C617BDA3771BFB4AC68FB956407, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_tA997FF52442F7B08C7E13B7028393B4117248680_m393D62A7199F4ECF21B55FD1C2DDB1D5B8C38813_RuntimeMethod_var);
		ValveIndexController_set_trackpadForce_mDCBDB29002455245DC963249CB35EC9AACD2E06C_inline(__this, L_17, /*hidden argument*/NULL);
		// devicePose = GetChildControl<PoseControl>("devicePose");
		PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * L_18;
		L_18 = InputControl_GetChildControl_TisPoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17_mA16003670FD70C6D0ED6AB4984C3A3C97EAEFC49(__this, _stringLiteral46C52D35A125250F5FBD7AAB8CD2F6E82177916E, /*hidden argument*/InputControl_GetChildControl_TisPoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17_mA16003670FD70C6D0ED6AB4984C3A3C97EAEFC49_RuntimeMethod_var);
		ValveIndexController_set_devicePose_m503A80FD8707541C418D9412EC6240C705CE6292_inline(__this, L_18, /*hidden argument*/NULL);
		// pointer = GetChildControl<PoseControl>("pointer");
		PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * L_19;
		L_19 = InputControl_GetChildControl_TisPoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17_mA16003670FD70C6D0ED6AB4984C3A3C97EAEFC49(__this, _stringLiteral0D74755D51876350D4B4382E014E2E93AD3D3B73, /*hidden argument*/InputControl_GetChildControl_TisPoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17_mA16003670FD70C6D0ED6AB4984C3A3C97EAEFC49_RuntimeMethod_var);
		ValveIndexController_set_pointer_m88FAFF50EF6F1B6E176F94D3F06E47620028B605_inline(__this, L_19, /*hidden argument*/NULL);
		// isTracked = GetChildControl<ButtonControl>("isTracked");
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_20;
		L_20 = InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766(__this, _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68_mE475ED52E811F812AF73857B00826BF95D5E1766_RuntimeMethod_var);
		ValveIndexController_set_isTracked_m233AD109538025684964B94F03584ECF51A6F54B_inline(__this, L_20, /*hidden argument*/NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * L_21;
		L_21 = InputControl_GetChildControl_TisIntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4_m79707C5EA0CD69CA2484E7CC0B3B291670BBC793(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4_m79707C5EA0CD69CA2484E7CC0B3B291670BBC793_RuntimeMethod_var);
		ValveIndexController_set_trackingState_m700986F71BD4F1E7DB90021511782423A4380E10_inline(__this, L_21, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * L_22;
		L_22 = InputControl_GetChildControl_TisVector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE_mD26314BFCC94ED995E96101D60D84A729E5F91AD(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE_mD26314BFCC94ED995E96101D60D84A729E5F91AD_RuntimeMethod_var);
		ValveIndexController_set_devicePosition_m57743255D8FE94DE6F0ECC0BF8C82869719D4B86_inline(__this, L_22, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * L_23;
		L_23 = InputControl_GetChildControl_TisQuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48_m4A9B7A0F3BDE9673B05A4E6BEB8EE6D7D1CD4F96(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48_m4A9B7A0F3BDE9673B05A4E6BEB8EE6D7D1CD4F96_RuntimeMethod_var);
		ValveIndexController_set_deviceRotation_m1B84BE363D0D3AEF16B1A570D9428C4F52414223_inline(__this, L_23, /*hidden argument*/NULL);
		// pointerPosition = GetChildControl<Vector3Control>("pointerPosition");
		Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * L_24;
		L_24 = InputControl_GetChildControl_TisVector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE_mD26314BFCC94ED995E96101D60D84A729E5F91AD(__this, _stringLiteralBAB78FE52E1FDB7FF399F8778E6696CD0042FF45, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE_mD26314BFCC94ED995E96101D60D84A729E5F91AD_RuntimeMethod_var);
		ValveIndexController_set_pointerPosition_mA18701204A0FA8DB5EE76EE6AEF723C75B327102_inline(__this, L_24, /*hidden argument*/NULL);
		// pointerRotation = GetChildControl<QuaternionControl>("pointerRotation");
		QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * L_25;
		L_25 = InputControl_GetChildControl_TisQuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48_m4A9B7A0F3BDE9673B05A4E6BEB8EE6D7D1CD4F96(__this, _stringLiteralF6CFDC1274B766A282F7B3F8F7CCC8BDF8038D7B, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48_m4A9B7A0F3BDE9673B05A4E6BEB8EE6D7D1CD4F96_RuntimeMethod_var);
		ValveIndexController_set_pointerRotation_mA4A9C9784C97A7976D585DB4FAB4E0B12EB9DD69_inline(__this, L_25, /*hidden argument*/NULL);
		// haptic = GetChildControl<HapticControl>("haptic");
		HapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C * L_26;
		L_26 = InputControl_GetChildControl_TisHapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C_m722FA03702F56653290DA54FAEDA642FA62350E5(__this, _stringLiteralE0C07794D9D8D1547EF130F005ABD901FE8F5136, /*hidden argument*/InputControl_GetChildControl_TisHapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C_m722FA03702F56653290DA54FAEDA642FA62350E5_RuntimeMethod_var);
		ValveIndexController_set_haptic_mE875155C4D0E16A05DE93984578D7214D1C1D1FE_inline(__this, L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile/ValveIndexController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValveIndexController__ctor_mEF6CAF625F550114B28F0777CFB080204E5F665B (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, const RuntimeMethod* method)
{
	{
		XRControllerWithRumble__ctor_mCCA1F51D764BD561B80A85052F03DDCB06B7C084(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OpenXRFeature_get_failedInitialization_mBDEA7F4C14370D52B15CAD3673AAFD164BB428AB_inline (OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * __this, const RuntimeMethod* method)
{
	{
		// internal bool failedInitialization { get; private set; } = false;
		bool L_0 = __this->get_U3CfailedInitializationU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0 = ((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var))->get_s_RuntimeSettingsInstance_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_0 = __this->get_m_LoaderManagerInstance_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0 = __this->get_U3CactiveLoaderU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_system_m56292448E97CECC8F9A2BFE5FB12545A4D9F5DB0_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl system { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CsystemU3Ek__BackingField_43(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_systemTouched_m21F560BD50743E9CCBD76A924968CA354CECACC0_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl systemTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CsystemTouchedU3Ek__BackingField_44(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_primaryButton_m487E02666D526A79B83CA83546B6103E94F5A90C_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryButton { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CprimaryButtonU3Ek__BackingField_45(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_primaryTouched_m666B2E15DCEBE99C0777CD3B8E00752FE5E74025_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CprimaryTouchedU3Ek__BackingField_46(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_secondaryButton_mECE5E8E760D1BF1FA22D00EF8D80EBDF7236DC42_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryButton { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CsecondaryButtonU3Ek__BackingField_47(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_secondaryTouched_mDABE319A1DD45252D1018BDBF4B9D2CF95FA5C74_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CsecondaryTouchedU3Ek__BackingField_48(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_grip_m0667D7377E35C59E0A070508B4D2C4B2DC27ED69_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * L_0 = ___value0;
		__this->set_U3CgripU3Ek__BackingField_49(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_gripPressed_m9A2B431173DB9849EE4716992155C2A5A582617C_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CgripPressedU3Ek__BackingField_50(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_gripForce_m9A501C3FF6B07A7CE243A5B53EF1B1F2DEEAC403_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl gripForce { get; private set; }
		AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * L_0 = ___value0;
		__this->set_U3CgripForceU3Ek__BackingField_51(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_trigger_m6B498ADF4D9343E2EFA377E9E26312B3450A81D8_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * L_0 = ___value0;
		__this->set_U3CtriggerU3Ek__BackingField_52(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_triggerPressed_m600FF7AC4DC8F65E5503DE08C42C3B135EF9C6B2_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CtriggerPressedU3Ek__BackingField_53(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_triggerTouched_mB8BC2AD613970D1FA693AB2F75F28F794E9A78C0_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CtriggerTouchedU3Ek__BackingField_54(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_thumbstick_mE75470A0047DDED5E9243AEF1FEB88176E61EF35_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control thumbstick { get; private set; }
		Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * L_0 = ___value0;
		__this->set_U3CthumbstickU3Ek__BackingField_55(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_thumbstickClicked_m95B86DB987772BE2FAB0E68BC7259866656BADE4_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickClicked { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CthumbstickClickedU3Ek__BackingField_56(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_thumbstickTouched_m17EA4F08E0998F619021AA8B74ED71AC835E9FB6_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CthumbstickTouchedU3Ek__BackingField_57(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_trackpad_m5477B50B206924A51876E7F105DBC12D46EA5429_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control trackpad { get; private set; }
		Vector2Control_t271CA458D56BCA875642853132733D774B009A96 * L_0 = ___value0;
		__this->set_U3CtrackpadU3Ek__BackingField_58(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_trackpadTouched_m08F3A118B08D66BCA365629F656509B904FB8B27_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl trackpadTouched { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CtrackpadTouchedU3Ek__BackingField_59(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_trackpadForce_mDCBDB29002455245DC963249CB35EC9AACD2E06C_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trackpadForce { get; private set; }
		AxisControl_tA997FF52442F7B08C7E13B7028393B4117248680 * L_0 = ___value0;
		__this->set_U3CtrackpadForceU3Ek__BackingField_60(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_devicePose_m503A80FD8707541C418D9412EC6240C705CE6292_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * ___value0, const RuntimeMethod* method)
{
	{
		// public PoseControl devicePose { get; private set; }
		PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * L_0 = ___value0;
		__this->set_U3CdevicePoseU3Ek__BackingField_61(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_pointer_m88FAFF50EF6F1B6E176F94D3F06E47620028B605_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * ___value0, const RuntimeMethod* method)
{
	{
		// public PoseControl pointer { get; private set; }
		PoseControl_tA12D1F2A0E5BAF6B72CF01BC9B06C087DA0ECC17 * L_0 = ___value0;
		__this->set_U3CpointerU3Ek__BackingField_62(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_isTracked_m233AD109538025684964B94F03584ECF51A6F54B_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * ___value0, const RuntimeMethod* method)
{
	{
		// new public ButtonControl isTracked { get; private set; }
		ButtonControl_t3918D56D674854AF9DFEB8CCF130919AAD9FCA68 * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_63(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_trackingState_m700986F71BD4F1E7DB90021511782423A4380E10_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * ___value0, const RuntimeMethod* method)
{
	{
		// new public IntegerControl trackingState { get; private set; }
		IntegerControl_t68534DE7D89FBFC2952062997BB54680FE7DCCA4 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_64(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_devicePosition_m57743255D8FE94DE6F0ECC0BF8C82869719D4B86_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * ___value0, const RuntimeMethod* method)
{
	{
		// new public Vector3Control devicePosition { get; private set; }
		Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_65(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_deviceRotation_m1B84BE363D0D3AEF16B1A570D9428C4F52414223_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * ___value0, const RuntimeMethod* method)
{
	{
		// new public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_66(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_pointerPosition_mA18701204A0FA8DB5EE76EE6AEF723C75B327102_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control pointerPosition { get; private set; }
		Vector3Control_t915A3DA3C3E367B6F5587853E96EAD5215D328AE * L_0 = ___value0;
		__this->set_U3CpointerPositionU3Ek__BackingField_67(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_pointerRotation_mA4A9C9784C97A7976D585DB4FAB4E0B12EB9DD69_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * ___value0, const RuntimeMethod* method)
{
	{
		// public QuaternionControl pointerRotation { get; private set; }
		QuaternionControl_t7BEFE3CFC03CC5CE3F779DDCB5AA2C011F5C7A48 * L_0 = ___value0;
		__this->set_U3CpointerRotationU3Ek__BackingField_68(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValveIndexController_set_haptic_mE875155C4D0E16A05DE93984578D7214D1C1D1FE_inline (ValveIndexController_t9053C26FF499950BE275C2D94F834BECC276D3A7 * __this, HapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C * ___value0, const RuntimeMethod* method)
{
	{
		// public HapticControl haptic { get; private set; }
		HapticControl_t594E555ABF357B4FEA1D5201F3731A0ACB2BB92C * L_0 = ___value0;
		__this->set_U3ChapticU3Ek__BackingField_69(L_0);
		return;
	}
}
