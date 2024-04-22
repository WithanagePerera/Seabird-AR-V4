#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t59A95566E6FBF6B195B841B400D0A6B7264A738B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// CloneItem
struct CloneItem_t6B72EDF0056359A99CA8407728FB8BC4D2B32698;
// CloneLineRenderer
struct CloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// ColorChanging
struct ColorChanging_t003719CFDBA03FCB69746B2FDD1B96BD8A3C41BF;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// ElementCollisions
struct ElementCollisions_tC1259F0BE99AA505F215B70F68375E43EA1EB042;
// ElementLinker
struct ElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Grid
struct Grid_t29032245F31DA66818E4D18285FF79A63F6496DF;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NewItemHandler
struct NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Trashcan
struct Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2E282E55BB42A619927A71B844E172470ECD3C6F;
IL2CPP_EXTERN_C String_t* _stringLiteral4C59021157F5E07854252E0C581E399FF2375FA0;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral6470F7108B9CFCB8C94A0CC4A54BE4C95BE0BA90;
IL2CPP_EXTERN_C String_t* _stringLiteral7F01D01A66038B109F157F47A78831ABBC021F3E;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8638BED95FBBA0650427D824B632F70425B91A;
IL2CPP_EXTERN_C String_t* _stringLiteral90965A2B2C5B2319664CD8D1B8111F63279D7E9B;
IL2CPP_EXTERN_C String_t* _stringLiteralA0CFDD06FC0F2E23F0747E3BC29BBFFBD02C60E4;
IL2CPP_EXTERN_C String_t* _stringLiteralA82B3559FFA8184D4E61C05B81897D32D2E0F7E8;
IL2CPP_EXTERN_C String_t* _stringLiteralA946F6D38A8A30D559119E11B95EE677BEB6EC26;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58;
IL2CPP_EXTERN_C String_t* _stringLiteralC7C3EC72A98C566B18C5D7FE865ABF9CAE453B41;
IL2CPP_EXTERN_C String_t* _stringLiteralD310CCEC4286FF694643B97E1B9E006ED3C1F8C0;
IL2CPP_EXTERN_C String_t* _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F;
IL2CPP_EXTERN_C String_t* _stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA7558025C2A7214CCD03B41D468D88CBEBD6B0;
IL2CPP_EXTERN_C String_t* _stringLiteralE5458C48618C4752139A49F056928FF41CB6C05B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525_m93E90B2B9AC502A3A5F8F36BD2FFADC0B2A3A528_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mA4D6DC7D8A2BE4D9DB98010E35B70DAE51712235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D_mCA0E47EDB64F2FECB3A2E118E4F6A4AA05FA6240_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m92CA1AB9D2D2D6A7058A005E3F429601E5C24A91_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____items_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_5;

public:
	inline static int32_t get_offset_of_emptyArray_5() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields, ___emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_5() const { return ___emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_5() { return &___emptyArray_5; }
	inline void set_emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_5), (void*)value);
	}
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Body_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Body_2)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_m_Body_2() const { return ___m_Body_2; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_m_Body_2() { return &___m_Body_2; }
	inline void set_m_Body_2(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___m_Body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Body_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
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


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// CloneItem
struct CloneItem_t6B72EDF0056359A99CA8407728FB8BC4D2B32698  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CloneItem::cloneReference
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cloneReference_4;

public:
	inline static int32_t get_offset_of_cloneReference_4() { return static_cast<int32_t>(offsetof(CloneItem_t6B72EDF0056359A99CA8407728FB8BC4D2B32698, ___cloneReference_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cloneReference_4() const { return ___cloneReference_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cloneReference_4() { return &___cloneReference_4; }
	inline void set_cloneReference_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cloneReference_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cloneReference_4), (void*)value);
	}
};


// CloneLineRenderer
struct CloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.LineRenderer CloneLineRenderer::lineClone
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lineClone_4;
	// System.Text.StringBuilder CloneLineRenderer::cloneName
	StringBuilder_t * ___cloneName_5;
	// UnityEngine.GameObject[] CloneLineRenderer::recentLinks
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___recentLinks_6;
	// System.String[] CloneLineRenderer::menuObjectNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___menuObjectNames_7;

public:
	inline static int32_t get_offset_of_lineClone_4() { return static_cast<int32_t>(offsetof(CloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D, ___lineClone_4)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lineClone_4() const { return ___lineClone_4; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lineClone_4() { return &___lineClone_4; }
	inline void set_lineClone_4(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lineClone_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineClone_4), (void*)value);
	}

	inline static int32_t get_offset_of_cloneName_5() { return static_cast<int32_t>(offsetof(CloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D, ___cloneName_5)); }
	inline StringBuilder_t * get_cloneName_5() const { return ___cloneName_5; }
	inline StringBuilder_t ** get_address_of_cloneName_5() { return &___cloneName_5; }
	inline void set_cloneName_5(StringBuilder_t * value)
	{
		___cloneName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cloneName_5), (void*)value);
	}

	inline static int32_t get_offset_of_recentLinks_6() { return static_cast<int32_t>(offsetof(CloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D, ___recentLinks_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_recentLinks_6() const { return ___recentLinks_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_recentLinks_6() { return &___recentLinks_6; }
	inline void set_recentLinks_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___recentLinks_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recentLinks_6), (void*)value);
	}

	inline static int32_t get_offset_of_menuObjectNames_7() { return static_cast<int32_t>(offsetof(CloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D, ___menuObjectNames_7)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_menuObjectNames_7() const { return ___menuObjectNames_7; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_menuObjectNames_7() { return &___menuObjectNames_7; }
	inline void set_menuObjectNames_7(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___menuObjectNames_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuObjectNames_7), (void*)value);
	}
};


// ColorChanging
struct ColorChanging_t003719CFDBA03FCB69746B2FDD1B96BD8A3C41BF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material ColorChanging::GreenMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___GreenMaterial_4;
	// UnityEngine.Material ColorChanging::RedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___RedMaterial_5;
	// UnityEngine.Material ColorChanging::BlueMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___BlueMaterial_6;
	// UnityEngine.Material ColorChanging::YellowMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___YellowMaterial_7;
	// UnityEngine.Material ColorChanging::PreviousMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___PreviousMaterial_8;

public:
	inline static int32_t get_offset_of_GreenMaterial_4() { return static_cast<int32_t>(offsetof(ColorChanging_t003719CFDBA03FCB69746B2FDD1B96BD8A3C41BF, ___GreenMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_GreenMaterial_4() const { return ___GreenMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_GreenMaterial_4() { return &___GreenMaterial_4; }
	inline void set_GreenMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___GreenMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GreenMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_RedMaterial_5() { return static_cast<int32_t>(offsetof(ColorChanging_t003719CFDBA03FCB69746B2FDD1B96BD8A3C41BF, ___RedMaterial_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_RedMaterial_5() const { return ___RedMaterial_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_RedMaterial_5() { return &___RedMaterial_5; }
	inline void set_RedMaterial_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___RedMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RedMaterial_5), (void*)value);
	}

	inline static int32_t get_offset_of_BlueMaterial_6() { return static_cast<int32_t>(offsetof(ColorChanging_t003719CFDBA03FCB69746B2FDD1B96BD8A3C41BF, ___BlueMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_BlueMaterial_6() const { return ___BlueMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_BlueMaterial_6() { return &___BlueMaterial_6; }
	inline void set_BlueMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___BlueMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BlueMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_YellowMaterial_7() { return static_cast<int32_t>(offsetof(ColorChanging_t003719CFDBA03FCB69746B2FDD1B96BD8A3C41BF, ___YellowMaterial_7)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_YellowMaterial_7() const { return ___YellowMaterial_7; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_YellowMaterial_7() { return &___YellowMaterial_7; }
	inline void set_YellowMaterial_7(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___YellowMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___YellowMaterial_7), (void*)value);
	}

	inline static int32_t get_offset_of_PreviousMaterial_8() { return static_cast<int32_t>(offsetof(ColorChanging_t003719CFDBA03FCB69746B2FDD1B96BD8A3C41BF, ___PreviousMaterial_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_PreviousMaterial_8() const { return ___PreviousMaterial_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_PreviousMaterial_8() { return &___PreviousMaterial_8; }
	inline void set_PreviousMaterial_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___PreviousMaterial_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PreviousMaterial_8), (void*)value);
	}
};


// ElementCollisions
struct ElementCollisions_tC1259F0BE99AA505F215B70F68375E43EA1EB042  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ElementCollisions::LineRendererParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LineRendererParent_4;

public:
	inline static int32_t get_offset_of_LineRendererParent_4() { return static_cast<int32_t>(offsetof(ElementCollisions_tC1259F0BE99AA505F215B70F68375E43EA1EB042, ___LineRendererParent_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LineRendererParent_4() const { return ___LineRendererParent_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LineRendererParent_4() { return &___LineRendererParent_4; }
	inline void set_LineRendererParent_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LineRendererParent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineRendererParent_4), (void*)value);
	}
};


// ElementLinker
struct ElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.LineRenderer ElementLinker::lineRenderer
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lineRenderer_4;
	// UnityEngine.GameObject ElementLinker::object1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___object1_5;
	// UnityEngine.GameObject ElementLinker::object2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___object2_6;
	// UnityEngine.Vector3[] ElementLinker::positions
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___positions_7;

public:
	inline static int32_t get_offset_of_lineRenderer_4() { return static_cast<int32_t>(offsetof(ElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525, ___lineRenderer_4)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lineRenderer_4() const { return ___lineRenderer_4; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lineRenderer_4() { return &___lineRenderer_4; }
	inline void set_lineRenderer_4(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lineRenderer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineRenderer_4), (void*)value);
	}

	inline static int32_t get_offset_of_object1_5() { return static_cast<int32_t>(offsetof(ElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525, ___object1_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_object1_5() const { return ___object1_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_object1_5() { return &___object1_5; }
	inline void set_object1_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___object1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object1_5), (void*)value);
	}

	inline static int32_t get_offset_of_object2_6() { return static_cast<int32_t>(offsetof(ElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525, ___object2_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_object2_6() const { return ___object2_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_object2_6() { return &___object2_6; }
	inline void set_object2_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___object2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object2_6), (void*)value);
	}

	inline static int32_t get_offset_of_positions_7() { return static_cast<int32_t>(offsetof(ElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525, ___positions_7)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_positions_7() const { return ___positions_7; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_positions_7() { return &___positions_7; }
	inline void set_positions_7(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___positions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positions_7), (void*)value);
	}
};


// Grid
struct Grid_t29032245F31DA66818E4D18285FF79A63F6496DF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Grid::plane
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___plane_4;
	// UnityEngine.GameObject Grid::grid
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___grid_5;
	// System.Int32 Grid::rows
	int32_t ___rows_6;
	// System.Int32 Grid::columns
	int32_t ___columns_7;

public:
	inline static int32_t get_offset_of_plane_4() { return static_cast<int32_t>(offsetof(Grid_t29032245F31DA66818E4D18285FF79A63F6496DF, ___plane_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_plane_4() const { return ___plane_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_plane_4() { return &___plane_4; }
	inline void set_plane_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___plane_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___plane_4), (void*)value);
	}

	inline static int32_t get_offset_of_grid_5() { return static_cast<int32_t>(offsetof(Grid_t29032245F31DA66818E4D18285FF79A63F6496DF, ___grid_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_grid_5() const { return ___grid_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_grid_5() { return &___grid_5; }
	inline void set_grid_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___grid_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_5), (void*)value);
	}

	inline static int32_t get_offset_of_rows_6() { return static_cast<int32_t>(offsetof(Grid_t29032245F31DA66818E4D18285FF79A63F6496DF, ___rows_6)); }
	inline int32_t get_rows_6() const { return ___rows_6; }
	inline int32_t* get_address_of_rows_6() { return &___rows_6; }
	inline void set_rows_6(int32_t value)
	{
		___rows_6 = value;
	}

	inline static int32_t get_offset_of_columns_7() { return static_cast<int32_t>(offsetof(Grid_t29032245F31DA66818E4D18285FF79A63F6496DF, ___columns_7)); }
	inline int32_t get_columns_7() const { return ___columns_7; }
	inline int32_t* get_address_of_columns_7() { return &___columns_7; }
	inline void set_columns_7(int32_t value)
	{
		___columns_7 = value;
	}
};


// NewItemHandler
struct NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject NewItemHandler::SwimLane
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SwimLane_4;
	// UnityEngine.GameObject NewItemHandler::StartNode
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___StartNode_5;
	// UnityEngine.GameObject NewItemHandler::EndNode
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___EndNode_6;
	// UnityEngine.GameObject NewItemHandler::Action
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Action_7;
	// UnityEngine.GameObject NewItemHandler::Join_Fork
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Join_Fork_8;
	// UnityEngine.GameObject NewItemHandler::Decision_Merge
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Decision_Merge_9;
	// UnityEngine.GameObject NewItemHandler::Item
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Item_10;

public:
	inline static int32_t get_offset_of_SwimLane_4() { return static_cast<int32_t>(offsetof(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68, ___SwimLane_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SwimLane_4() const { return ___SwimLane_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SwimLane_4() { return &___SwimLane_4; }
	inline void set_SwimLane_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SwimLane_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SwimLane_4), (void*)value);
	}

	inline static int32_t get_offset_of_StartNode_5() { return static_cast<int32_t>(offsetof(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68, ___StartNode_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_StartNode_5() const { return ___StartNode_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_StartNode_5() { return &___StartNode_5; }
	inline void set_StartNode_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___StartNode_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartNode_5), (void*)value);
	}

	inline static int32_t get_offset_of_EndNode_6() { return static_cast<int32_t>(offsetof(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68, ___EndNode_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_EndNode_6() const { return ___EndNode_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_EndNode_6() { return &___EndNode_6; }
	inline void set_EndNode_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___EndNode_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EndNode_6), (void*)value);
	}

	inline static int32_t get_offset_of_Action_7() { return static_cast<int32_t>(offsetof(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68, ___Action_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Action_7() const { return ___Action_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Action_7() { return &___Action_7; }
	inline void set_Action_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Action_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Action_7), (void*)value);
	}

	inline static int32_t get_offset_of_Join_Fork_8() { return static_cast<int32_t>(offsetof(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68, ___Join_Fork_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Join_Fork_8() const { return ___Join_Fork_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Join_Fork_8() { return &___Join_Fork_8; }
	inline void set_Join_Fork_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Join_Fork_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Join_Fork_8), (void*)value);
	}

	inline static int32_t get_offset_of_Decision_Merge_9() { return static_cast<int32_t>(offsetof(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68, ___Decision_Merge_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Decision_Merge_9() const { return ___Decision_Merge_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Decision_Merge_9() { return &___Decision_Merge_9; }
	inline void set_Decision_Merge_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Decision_Merge_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Decision_Merge_9), (void*)value);
	}

	inline static int32_t get_offset_of_Item_10() { return static_cast<int32_t>(offsetof(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68, ___Item_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Item_10() const { return ___Item_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Item_10() { return &___Item_10; }
	inline void set_Item_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Item_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item_10), (void*)value);
	}
};

struct NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_StaticFields
{
public:
	// UnityEngine.Vector3[] NewItemHandler::positionsArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___positionsArray_11;

public:
	inline static int32_t get_offset_of_positionsArray_11() { return static_cast<int32_t>(offsetof(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_StaticFields, ___positionsArray_11)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_positionsArray_11() const { return ___positionsArray_11; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_positionsArray_11() { return &___positionsArray_11; }
	inline void set_positionsArray_11(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___positionsArray_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionsArray_11), (void*)value);
	}
};


// Trashcan
struct Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_StaticFields
{
public:
	// System.Collections.ArrayList Trashcan::gridElements
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___gridElements_4;

public:
	inline static int32_t get_offset_of_gridElements_4() { return static_cast<int32_t>(offsetof(Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_StaticFields, ___gridElements_4)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_gridElements_4() const { return ___gridElements_4; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_gridElements_4() { return &___gridElements_4; }
	inline void set_gridElements_4(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___gridElements_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridElements_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mD323B6AB5F5CE44D9FECAA37D9134CBA42586B45_gshared (RuntimeObject* ___source0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<UnityEngine.GameObject>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
inline bool Enumerable_Contains_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mA4D6DC7D8A2BE4D9DB98010E35B70DAE51712235 (RuntimeObject* ___source0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mD323B6AB5F5CE44D9FECAA37D9134CBA42586B45_gshared)(___source0, ___value1, method);
}
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
inline bool Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5 (RuntimeObject* ___source0, String_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mD323B6AB5F5CE44D9FECAA37D9134CBA42586B45_gshared)(___source0, ___value1, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.LineRenderer>(!!0)
inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * Object_Instantiate_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m92CA1AB9D2D2D6A7058A005E3F429601E5C24A91 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___original0, const RuntimeMethod* method)
{
	return ((  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * (*) (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ElementLinker>()
inline ElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525 * Component_GetComponent_TisElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525_m93E90B2B9AC502A3A5F8F36BD2FFADC0B2A3A528 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m9305A36F9CF53EDD80D132428999934C68904C77 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<CloneLineRenderer>()
inline CloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D * GameObject_GetComponent_TisCloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D_mCA0E47EDB64F2FECB3A2E118E4F6A4AA05FA6240 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void CloneLineRenderer::generateLine(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloneLineRenderer_generateLine_m9243230CF12D4BD45EE10986F41B3A6CA0F1CDF4 (CloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___object10, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___object21, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_mD7F470FCD99805F1466E13B64C3F04825DFDBF91 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___positions0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * __this, const RuntimeMethod* method);
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
// System.Void CloneItem::cloneItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloneItem_cloneItem_m2CF81E3167635E7785EEE1356C306E7203803517 (CloneItem_t6B72EDF0056359A99CA8407728FB8BC4D2B32698 * __this, int32_t ___ItemNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// string name = gameObject.name + "_";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		V_0 = L_2;
		// GameObject clone = Instantiate(cloneReference);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_cloneReference_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_1 = L_4;
		// clone.name = name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_5, L_6, /*hidden argument*/NULL);
		// clone.transform.parent = cloneReference.transform.parent;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_1;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_cloneReference_4();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_8, L_11, /*hidden argument*/NULL);
		// clone.transform.localScale = cloneReference.transform.localScale;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_1;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_cloneReference_4();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_13, L_16, /*hidden argument*/NULL);
		// clone.transform.position = NewItemHandler.positionsArray[ItemNumber];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_1;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_il2cpp_TypeInfo_var);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_19 = ((NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_StaticFields*)il2cpp_codegen_static_fields_for(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_il2cpp_TypeInfo_var))->get_positionsArray_11();
		int32_t L_20 = ___ItemNumber0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_18, L_22, /*hidden argument*/NULL);
		// clone.transform.position = new Vector3(clone.transform.position.x + 0.1f, clone.transform.position.y, clone.transform.position.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_1;
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_1;
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = V_1;
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = V_1;
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), ((float)il2cpp_codegen_add((float)L_28, (float)(0.100000001f))), L_32, L_36, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_24, L_37, /*hidden argument*/NULL);
		// clone.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = V_1;
		NullCheck(L_38);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_38, (bool)1, /*hidden argument*/NULL);
		// Trashcan.gridElements.Add(clone);
		IL2CPP_RUNTIME_CLASS_INIT(Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_il2cpp_TypeInfo_var);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_39 = ((Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_StaticFields*)il2cpp_codegen_static_fields_for(Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_il2cpp_TypeInfo_var))->get_gridElements_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = V_1;
		NullCheck(L_39);
		int32_t L_41;
		L_41 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_39, L_40);
		// }
		return;
	}
}
// System.Void CloneItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloneItem__ctor_m4184395788B4B7AB5ED8B5674C5B50484DB006D9 (CloneItem_t6B72EDF0056359A99CA8407728FB8BC4D2B32698 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CloneLineRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloneLineRenderer_Start_mAAEAEE59D348A44C34C8C273AF62A79932472E39 (CloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CloneLineRenderer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloneLineRenderer_Update_mB8AE883521E4235FE9CC0A1C5747C4FBB8B9C9ED (CloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CloneLineRenderer::generateLine(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloneLineRenderer_generateLine_m9243230CF12D4BD45EE10986F41B3A6CA0F1CDF4 (CloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___object10, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___object21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525_m93E90B2B9AC502A3A5F8F36BD2FFADC0B2A3A528_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mA4D6DC7D8A2BE4D9DB98010E35B70DAE51712235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m92CA1AB9D2D2D6A7058A005E3F429601E5C24A91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F01D01A66038B109F157F47A78831ABBC021F3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0CFDD06FC0F2E23F0747E3BC29BBFFBD02C60E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (recentLinks[0] != null && recentLinks[1] != null)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_recentLinks_6();
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_006e;
		}
	}
	{
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get_recentLinks_6();
		NullCheck(L_4);
		int32_t L_5 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006e;
		}
	}
	{
		// if (recentLinks.Contains(object1) && recentLinks.Contains(object2))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = __this->get_recentLinks_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = ___object10;
		bool L_10;
		L_10 = Enumerable_Contains_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mA4D6DC7D8A2BE4D9DB98010E35B70DAE51712235((RuntimeObject*)(RuntimeObject*)L_8, L_9, /*hidden argument*/Enumerable_Contains_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mA4D6DC7D8A2BE4D9DB98010E35B70DAE51712235_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get_recentLinks_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = ___object21;
		bool L_13;
		L_13 = Enumerable_Contains_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mA4D6DC7D8A2BE4D9DB98010E35B70DAE51712235((RuntimeObject*)(RuntimeObject*)L_11, L_12, /*hidden argument*/Enumerable_Contains_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mA4D6DC7D8A2BE4D9DB98010E35B70DAE51712235_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_003d;
		}
	}
	{
		// return;
		return;
	}

IL_003d:
	{
		// if (menuObjectNames.Contains(object1.name.ToString()) || menuObjectNames.Contains(object2.name.ToString()))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = __this->get_menuObjectNames_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = ___object10;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		bool L_18;
		L_18 = Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5((RuntimeObject*)(RuntimeObject*)L_14, L_17, /*hidden argument*/Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_006d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = __this->get_menuObjectNames_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = ___object21;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		bool L_23;
		L_23 = Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5((RuntimeObject*)(RuntimeObject*)L_19, L_22, /*hidden argument*/Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		if (!L_23)
		{
			goto IL_006e;
		}
	}

IL_006d:
	{
		// return;
		return;
	}

IL_006e:
	{
		// Debug.LogError($"Object 1 name: {object1.name}");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = ___object10;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_24, /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA0CFDD06FC0F2E23F0747E3BC29BBFFBD02C60E4, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_26, /*hidden argument*/NULL);
		// Debug.LogError($"Object 2 name: {object2.name}");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = ___object21;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_27, /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral7F01D01A66038B109F157F47A78831ABBC021F3E, L_28, /*hidden argument*/NULL);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_29, /*hidden argument*/NULL);
		// LineRenderer clone = Instantiate(lineClone);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_30 = __this->get_lineClone_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_31;
		L_31 = Object_Instantiate_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m92CA1AB9D2D2D6A7058A005E3F429601E5C24A91(L_30, /*hidden argument*/Object_Instantiate_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_m92CA1AB9D2D2D6A7058A005E3F429601E5C24A91_RuntimeMethod_var);
		// clone.gameObject.SetActive(true);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_32 = L_31;
		NullCheck(L_32);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_33, (bool)1, /*hidden argument*/NULL);
		// clone.transform.parent = lineClone.transform.parent;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_34 = L_32;
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_34, /*hidden argument*/NULL);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_36 = __this->get_lineClone_4();
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_37, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_35, L_38, /*hidden argument*/NULL);
		// cloneName.Append("_");
		StringBuilder_t * L_39 = __this->get_cloneName_5();
		NullCheck(L_39);
		StringBuilder_t * L_40;
		L_40 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_39, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		// lineClone.name = name.ToString();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_41 = __this->get_lineClone_4();
		String_t* L_42;
		L_42 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		String_t* L_43;
		L_43 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_42);
		NullCheck(L_41);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_41, L_43, /*hidden argument*/NULL);
		// clone.GetComponent<ElementLinker>().object1 = object1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_44 = L_34;
		NullCheck(L_44);
		ElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525 * L_45;
		L_45 = Component_GetComponent_TisElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525_m93E90B2B9AC502A3A5F8F36BD2FFADC0B2A3A528(L_44, /*hidden argument*/Component_GetComponent_TisElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525_m93E90B2B9AC502A3A5F8F36BD2FFADC0B2A3A528_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = ___object10;
		NullCheck(L_45);
		L_45->set_object1_5(L_46);
		// clone.GetComponent<ElementLinker>().object2 = object2;
		NullCheck(L_44);
		ElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525 * L_47;
		L_47 = Component_GetComponent_TisElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525_m93E90B2B9AC502A3A5F8F36BD2FFADC0B2A3A528(L_44, /*hidden argument*/Component_GetComponent_TisElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525_m93E90B2B9AC502A3A5F8F36BD2FFADC0B2A3A528_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = ___object21;
		NullCheck(L_47);
		L_47->set_object2_6(L_48);
		// recentLinks[0] = object1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_49 = __this->get_recentLinks_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = ___object10;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_50);
		// recentLinks[1] = object2;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_51 = __this->get_recentLinks_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = ___object21;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(1), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_52);
		// }
		return;
	}
}
// System.Void CloneLineRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloneLineRenderer__ctor_m73B5A44875F8F619180DCD62B98473D3F0A60DB4 (CloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C59021157F5E07854252E0C581E399FF2375FA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6470F7108B9CFCB8C94A0CC4A54BE4C95BE0BA90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8638BED95FBBA0650427D824B632F70425B91A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90965A2B2C5B2319664CD8D1B8111F63279D7E9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA82B3559FFA8184D4E61C05B81897D32D2E0F7E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA946F6D38A8A30D559119E11B95EE677BEB6EC26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7C3EC72A98C566B18C5D7FE865ABF9CAE453B41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD310CCEC4286FF694643B97E1B9E006ED3C1F8C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA7558025C2A7214CCD03B41D468D88CBEBD6B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5458C48618C4752139A49F056928FF41CB6C05B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StringBuilder cloneName = new StringBuilder("LineClone");
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m9305A36F9CF53EDD80D132428999934C68904C77(L_0, _stringLiteralD310CCEC4286FF694643B97E1B9E006ED3C1F8C0, /*hidden argument*/NULL);
		__this->set_cloneName_5(L_0);
		// public GameObject[] recentLinks = new GameObject[2];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_recentLinks_6(L_1);
		// string[] menuObjectNames = { "Swimlane", "Start Node", "End Node", "Action", "Join/Fork", "Decision/Merge", "Item", "Expand Grid Down", "Expand Grid Right", "Trash", "Grid Transparency Toggle" };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralA946F6D38A8A30D559119E11B95EE677BEB6EC26);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA946F6D38A8A30D559119E11B95EE677BEB6EC26);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral7F8638BED95FBBA0650427D824B632F70425B91A);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral7F8638BED95FBBA0650427D824B632F70425B91A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralC7C3EC72A98C566B18C5D7FE865ABF9CAE453B41);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC7C3EC72A98C566B18C5D7FE865ABF9CAE453B41);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralA82B3559FFA8184D4E61C05B81897D32D2E0F7E8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA82B3559FFA8184D4E61C05B81897D32D2E0F7E8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral4C59021157F5E07854252E0C581E399FF2375FA0);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral4C59021157F5E07854252E0C581E399FF2375FA0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralDDA7558025C2A7214CCD03B41D468D88CBEBD6B0);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralDDA7558025C2A7214CCD03B41D468D88CBEBD6B0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral6470F7108B9CFCB8C94A0CC4A54BE4C95BE0BA90);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral6470F7108B9CFCB8C94A0CC4A54BE4C95BE0BA90);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral90965A2B2C5B2319664CD8D1B8111F63279D7E9B);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral90965A2B2C5B2319664CD8D1B8111F63279D7E9B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralE5458C48618C4752139A49F056928FF41CB6C05B);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralE5458C48618C4752139A49F056928FF41CB6C05B);
		__this->set_menuObjectNames_7(L_13);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ColorChanging::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanging_Start_mC1A37526DD317809D8E45AEEE12FD4895BA5E321 (ColorChanging_t003719CFDBA03FCB69746B2FDD1B96BD8A3C41BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PreviousMaterial = GetComponent<Renderer>().material;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1;
		L_1 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_0, /*hidden argument*/NULL);
		__this->set_PreviousMaterial_8(L_1);
		// }
		return;
	}
}
// System.Void ColorChanging::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanging_Update_mF94792A23C89BE6BEFB5FE528D569FFAD83E7C46 (ColorChanging_t003719CFDBA03FCB69746B2FDD1B96BD8A3C41BF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ColorChanging::TurnRed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanging_TurnRed_m8A5FE6D58CFC409F9773CAB112674B7127B90E21 (ColorChanging_t003719CFDBA03FCB69746B2FDD1B96BD8A3C41BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Renderer>().material = RedMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = __this->get_RedMaterial_5();
		NullCheck(L_0);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_0, L_1, /*hidden argument*/NULL);
		// PreviousMaterial = RedMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_RedMaterial_5();
		__this->set_PreviousMaterial_8(L_2);
		// }
		return;
	}
}
// System.Void ColorChanging::TurnBlue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanging_TurnBlue_m3B16F149FA6CBD343F3E9DECE4C621FE37E5B853 (ColorChanging_t003719CFDBA03FCB69746B2FDD1B96BD8A3C41BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Renderer>().material = BlueMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = __this->get_BlueMaterial_6();
		NullCheck(L_0);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_0, L_1, /*hidden argument*/NULL);
		// PreviousMaterial = BlueMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_BlueMaterial_6();
		__this->set_PreviousMaterial_8(L_2);
		// }
		return;
	}
}
// System.Void ColorChanging::TurnGreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanging_TurnGreen_m833FD14F54843EC6CBF8FB9BF858CDA26C703917 (ColorChanging_t003719CFDBA03FCB69746B2FDD1B96BD8A3C41BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Renderer>().material = GreenMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = __this->get_GreenMaterial_4();
		NullCheck(L_0);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_0, L_1, /*hidden argument*/NULL);
		// PreviousMaterial = GreenMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_GreenMaterial_4();
		__this->set_PreviousMaterial_8(L_2);
		// }
		return;
	}
}
// System.Void ColorChanging::TurnYellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanging_TurnYellow_mB8EED75F7008F6C9DA81636DA67F0CC16C4ABF55 (ColorChanging_t003719CFDBA03FCB69746B2FDD1B96BD8A3C41BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PreviousMaterial = GetComponent<Renderer>().material;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1;
		L_1 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_0, /*hidden argument*/NULL);
		__this->set_PreviousMaterial_8(L_1);
		// GetComponent<Renderer>().material = YellowMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_2;
		L_2 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get_YellowMaterial_7();
		NullCheck(L_2);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ColorChanging::TurnBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanging_TurnBack_m528580BCA99EE3FF6585997A4813E6FF4080FF06 (ColorChanging_t003719CFDBA03FCB69746B2FDD1B96BD8A3C41BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Renderer>().material = PreviousMaterial;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = __this->get_PreviousMaterial_8();
		NullCheck(L_0);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ColorChanging::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanging__ctor_m4F23D47E68255A10418B3B527FDB721C69C69263 (ColorChanging_t003719CFDBA03FCB69746B2FDD1B96BD8A3C41BF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ElementCollisions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementCollisions_Start_mB5126FA9F5E26CC94378EA05C5504C14B466943A (ElementCollisions_tC1259F0BE99AA505F215B70F68375E43EA1EB042 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ElementCollisions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementCollisions_Update_mF8EEE01017BDA13C853D054BC40BF366E9CF95E6 (ElementCollisions_tC1259F0BE99AA505F215B70F68375E43EA1EB042 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ElementCollisions::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementCollisions_OnCollisionEnter_mAFA1520D9F73A222C1110B29ED47DC689AAEE51C (ElementCollisions_tC1259F0BE99AA505F215B70F68375E43EA1EB042 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D_mCA0E47EDB64F2FECB3A2E118E4F6A4AA05FA6240_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name.ToString().Contains("(Clone)"))
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_3);
		bool L_4;
		L_4 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_3, _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// LineRendererParent.GetComponent<CloneLineRenderer>().generateLine(gameObject, collision.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_LineRendererParent_4();
		NullCheck(L_5);
		CloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D * L_6;
		L_6 = GameObject_GetComponent_TisCloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D_mCA0E47EDB64F2FECB3A2E118E4F6A4AA05FA6240(L_5, /*hidden argument*/GameObject_GetComponent_TisCloneLineRenderer_t454FA0F9C243EC726F3D4CAC802BC7BA804CE78D_mCA0E47EDB64F2FECB3A2E118E4F6A4AA05FA6240_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_8 = ___collision0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		CloneLineRenderer_generateLine_m9243230CF12D4BD45EE10986F41B3A6CA0F1CDF4(L_6, L_7, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ElementCollisions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementCollisions__ctor_m114A52F1FA91E1FD1BA6262909BDBEAB2A67A847 (ElementCollisions_tC1259F0BE99AA505F215B70F68375E43EA1EB042 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ElementLinker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementLinker_Start_m49570E59173BDE4D35B45E2C14315D328F651D70 (ElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lineRenderer = GetComponent<LineRenderer>();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0;
		L_0 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(__this, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		__this->set_lineRenderer_4(L_0);
		// }
		return;
	}
}
// System.Void ElementLinker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementLinker_Update_mCCC4024A596FA84258F9D5D9496097AA5231578F (ElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525 * __this, const RuntimeMethod* method)
{
	{
		// lineRenderer.positionCount = 2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0 = __this->get_lineRenderer_4();
		NullCheck(L_0);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_0, 2, /*hidden argument*/NULL);
		// positions[0] = object1.transform.position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = __this->get_positions_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_object1_5();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4);
		// positions[0].z += 0.001f;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_5 = __this->get_positions_7();
		NullCheck(L_5);
		float* L_6 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_address_of_z_4();
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		*((float*)L_7) = (float)((float)il2cpp_codegen_add((float)L_8, (float)(0.00100000005f)));
		// positions[1] = object2.transform.position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_9 = __this->get_positions_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_object2_6();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_12);
		// positions[1].z += 0.001f;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_13 = __this->get_positions_7();
		NullCheck(L_13);
		float* L_14 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_address_of_z_4();
		float* L_15 = L_14;
		float L_16 = *((float*)L_15);
		*((float*)L_15) = (float)((float)il2cpp_codegen_add((float)L_16, (float)(0.00100000005f)));
		// lineRenderer.SetPositions(positions);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_17 = __this->get_lineRenderer_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_18 = __this->get_positions_7();
		NullCheck(L_17);
		LineRenderer_SetPositions_mD7F470FCD99805F1466E13B64C3F04825DFDBF91(L_17, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ElementLinker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementLinker__ctor_mFD011642D6132C5776666AFFC5C8C2024775DB38 (ElementLinker_tF3D160ED03263881C99F493E6C55B60A9DC48525 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector3[] positions = new Vector3[2];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_positions_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Grid::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Start_m871228DB9FCF1A7C43D1F31E51DE8230851FA472 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// float x_displacement = plane.GetComponent<MeshRenderer>().bounds.size.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_plane_4();
		NullCheck(L_0);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_1;
		L_1 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_0, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		NullCheck(L_1);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_2;
		L_2 = Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097(L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_2), /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		V_0 = L_4;
		// float y_displacement = plane.GetComponent<MeshRenderer>().bounds.size.y;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_plane_4();
		NullCheck(L_5);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_6;
		L_6 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_5, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		NullCheck(L_6);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_7;
		L_7 = Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_2), /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		V_1 = L_9;
		// for (int x = 0; x < rows; x++)
		V_3 = 0;
		goto IL_00e4;
	}

IL_0043:
	{
		// for (int y = 0; y < columns; y++)
		V_4 = 0;
		goto IL_00d3;
	}

IL_004b:
	{
		// GameObject clone = Instantiate(plane);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_plane_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// clone.transform.parent = transform.parent;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = L_11;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_13, L_15, /*hidden argument*/NULL);
		// clone.transform.position = new Vector3(plane.transform.position.x + (y + 1) * (x_displacement + 0.0001f), plane.transform.position.y - (x * y_displacement), plane.transform.position.z);;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_plane_4();
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		int32_t L_21 = V_4;
		float L_22 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_plane_4();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		int32_t L_27 = V_3;
		float L_28 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_plane_4();
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_33), ((float)il2cpp_codegen_add((float)L_20, (float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)))), (float)((float)il2cpp_codegen_add((float)L_22, (float)(9.99999975E-05f))))))), ((float)il2cpp_codegen_subtract((float)L_26, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_27)), (float)L_28)))), L_32, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_33, /*hidden argument*/NULL);
		// for (int y = 0; y < columns; y++)
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00d3:
	{
		// for (int y = 0; y < columns; y++)
		int32_t L_35 = V_4;
		int32_t L_36 = __this->get_columns_7();
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_004b;
		}
	}
	{
		// for (int x = 0; x < rows; x++)
		int32_t L_37 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00e4:
	{
		// for (int x = 0; x < rows; x++)
		int32_t L_38 = V_3;
		int32_t L_39 = __this->get_rows_6();
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0043;
		}
	}
	{
		// plane.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = __this->get_plane_4();
		NullCheck(L_40);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_40, (bool)0, /*hidden argument*/NULL);
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41;
		L_41 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_41, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Grid::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Update_m5FEAD26C79C839CA5F4A99BDC97FFF8EC3A0DCAB (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Grid::toggleGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_toggleGrid_m2D7388F4C674043FE15DB88ABE5EA6A53FE3D526 (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, const RuntimeMethod* method)
{
	{
		// grid.SetActive(!grid.activeSelf);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_grid_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_grid_5();
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Grid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid__ctor_m5D0C52CC33E4C98A798842251C37DC98C1817A2A (Grid_t29032245F31DA66818E4D18285FF79A63F6496DF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void NewItemHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewItemHandler_Start_m3224D80EEA5521126E6470F76FFDF1277CDF53C4 (NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// positionsArray[0] = SwimLane.transform.position;
		IL2CPP_RUNTIME_CLASS_INIT(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_il2cpp_TypeInfo_var);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ((NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_StaticFields*)il2cpp_codegen_static_fields_for(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_il2cpp_TypeInfo_var))->get_positionsArray_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_SwimLane_4();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3);
		// positionsArray[1] = StartNode.transform.position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = ((NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_StaticFields*)il2cpp_codegen_static_fields_for(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_il2cpp_TypeInfo_var))->get_positionsArray_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_StartNode_5();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_7);
		// positionsArray[2] = EndNode.transform.position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_8 = ((NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_StaticFields*)il2cpp_codegen_static_fields_for(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_il2cpp_TypeInfo_var))->get_positionsArray_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_EndNode_6();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_11);
		// positionsArray[3] = Action.transform.position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_12 = ((NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_StaticFields*)il2cpp_codegen_static_fields_for(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_il2cpp_TypeInfo_var))->get_positionsArray_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_Action_7();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_15);
		// positionsArray[4] = Join_Fork.transform.position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_16 = ((NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_StaticFields*)il2cpp_codegen_static_fields_for(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_il2cpp_TypeInfo_var))->get_positionsArray_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_Join_Fork_8();
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_19);
		// positionsArray[5] = Decision_Merge.transform.position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_20 = ((NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_StaticFields*)il2cpp_codegen_static_fields_for(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_il2cpp_TypeInfo_var))->get_positionsArray_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_Decision_Merge_9();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_23);
		// positionsArray[6] = Item.transform.position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_24 = ((NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_StaticFields*)il2cpp_codegen_static_fields_for(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_il2cpp_TypeInfo_var))->get_positionsArray_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_Item_10();
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_27);
		// }
		return;
	}
}
// System.Void NewItemHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewItemHandler_Update_m962E846A99390894A51B98C3456BA726BC4F4907 (NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NewItemHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewItemHandler__ctor_mA25FAED45E210CC81192D12DE4B17B8A4FCD937B (NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NewItemHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewItemHandler__cctor_m9D7F570EFB3824D7D20B1B815BBC752C1F3C156E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector3[] positionsArray = new Vector3[8];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)8);
		((NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_StaticFields*)il2cpp_codegen_static_fields_for(NewItemHandler_t534A9606700B609238D63F9526FEBB0B6B44BA68_il2cpp_TypeInfo_var))->set_positionsArray_11(L_0);
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
// System.Void Trashcan::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trashcan_Start_m799EBCAC0928780CA8835CFC6E8EA1EC07881181 (Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Trashcan::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trashcan_Update_m97E56E8A942313BE1A64C83BCA4BFBBFFCC55531 (Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Trashcan::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trashcan_OnCollisionEnter_m221571C4D91FCDECF21DDF7C5CAEDA75666DD75A (Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E282E55BB42A619927A71B844E172470ECD3C6F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError("Object detected");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral2E282E55BB42A619927A71B844E172470ECD3C6F, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// gridElements.Remove(collision.gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_il2cpp_TypeInfo_var);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_2 = ((Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_StaticFields*)il2cpp_codegen_static_fields_for(Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_il2cpp_TypeInfo_var))->get_gridElements_4();
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_3 = ___collision0;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< RuntimeObject * >::Invoke(39 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void Trashcan::clearAllGridElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trashcan_clearAllGridElements_m60296430D30B5BA4855E0B2FAE692F0D994A9F78 (Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (GameObject element in gridElements)
		IL2CPP_RUNTIME_CLASS_INIT(Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_il2cpp_TypeInfo_var);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = ((Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_StaticFields*)il2cpp_codegen_static_fields_for(Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_il2cpp_TypeInfo_var))->get_gridElements_4();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(35 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001d;
		}

IL_000d:
		{
			// foreach (GameObject element in gridElements)
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject * L_3;
			L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_2);
			// Destroy(element);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)CastclassSealed((RuntimeObject*)L_3, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_001d:
		{
			// foreach (GameObject element in gridElements)
			RuntimeObject* L_4 = V_0;
			NullCheck(L_4);
			bool L_5;
			L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			if (L_5)
			{
				goto IL_000d;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x38, FINALLY_0027);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_6 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_7 = V_1;
			if (!L_7)
			{
				goto IL_0037;
			}
		}

IL_0031:
		{
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_0037:
		{
			IL2CPP_END_FINALLY(39)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
	}

IL_0038:
	{
		// gridElements.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_il2cpp_TypeInfo_var);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_9 = ((Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_StaticFields*)il2cpp_codegen_static_fields_for(Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_il2cpp_TypeInfo_var))->get_gridElements_4();
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_9);
		// }
		return;
	}
}
// System.Void Trashcan::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trashcan__ctor_m21AC37818848D399042F2FE346FE396BFA7927A2 (Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Trashcan::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trashcan__cctor_mB767AEC0BC817EDFB598475157FABBECD2062B5D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ArrayList gridElements = new ArrayList();
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_0, /*hidden argument*/NULL);
		((Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_StaticFields*)il2cpp_codegen_static_fields_for(Trashcan_t3E126E0C3D79F271C25646BAA8354E50F3A3E6C9_il2cpp_TypeInfo_var))->set_gridElements_4(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
