#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomizableObject

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum CustomizableObject.EMutableParameterType
// NumValues: 0x0007
enum class EMutableParameterType : uint8
{
	None                                     = 0,
	Bool                                     = 1,
	Int                                      = 2,
	Float                                    = 3,
	Color                                    = 4,
	Projector                                = 5,
	EMutableParameterType_MAX                = 6,
};

// ScriptStruct CustomizableObject.GeneratedMesh
// 0x0010 (0x0010 - 0x0000)
struct FGeneratedMesh final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Mesh;                                              // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGeneratedMesh) == 0x000008, "Wrong alignment on FGeneratedMesh");
static_assert(sizeof(FGeneratedMesh) == 0x000010, "Wrong size on FGeneratedMesh");
static_assert(offsetof(FGeneratedMesh, ID) == 0x000000, "Member 'FGeneratedMesh::ID' has a wrong offset!");
static_assert(offsetof(FGeneratedMesh, Mesh) == 0x000008, "Member 'FGeneratedMesh::Mesh' has a wrong offset!");

// ScriptStruct CustomizableObject.GeneratedTexture
// 0x0028 (0x0028 - 0x0000)
struct FGeneratedTexture final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Name;                                              // 0x0008(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Texture;                                           // 0x0018(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_20[0x8];                                       // 0x0020(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGeneratedTexture) == 0x000008, "Wrong alignment on FGeneratedTexture");
static_assert(sizeof(FGeneratedTexture) == 0x000028, "Wrong size on FGeneratedTexture");
static_assert(offsetof(FGeneratedTexture, ID) == 0x000000, "Member 'FGeneratedTexture::ID' has a wrong offset!");
static_assert(offsetof(FGeneratedTexture, Name) == 0x000008, "Member 'FGeneratedTexture::Name' has a wrong offset!");
static_assert(offsetof(FGeneratedTexture, Texture) == 0x000018, "Member 'FGeneratedTexture::Texture' has a wrong offset!");

// ScriptStruct CustomizableObject.GeneratedMaterial
// 0x0020 (0x0020 - 0x0000)
struct FGeneratedMaterial final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGeneratedTexture>              Textures;                                          // 0x0010(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGeneratedMaterial) == 0x000008, "Wrong alignment on FGeneratedMaterial");
static_assert(sizeof(FGeneratedMaterial) == 0x000020, "Wrong size on FGeneratedMaterial");
static_assert(offsetof(FGeneratedMaterial, Name) == 0x000000, "Member 'FGeneratedMaterial::Name' has a wrong offset!");
static_assert(offsetof(FGeneratedMaterial, Textures) == 0x000010, "Member 'FGeneratedMaterial::Textures' has a wrong offset!");

// ScriptStruct CustomizableObject.MutableModelImageProperties
// 0x0028 (0x0028 - 0x0000)
struct FMutableModelImageProperties final
{
public:
	class FString                                 TextureParameterName;                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureCompressionSettings                   CompressionSettings;                               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureFilter                                Filter;                                            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         SRGB : 1;                                          // 0x0014(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LODBias;                                           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureMipGenSettings                        MipGenSettings;                                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bDitherMipMapAlpha : 1;                            // 0x0020(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMutableModelImageProperties) == 0x000008, "Wrong alignment on FMutableModelImageProperties");
static_assert(sizeof(FMutableModelImageProperties) == 0x000028, "Wrong size on FMutableModelImageProperties");
static_assert(offsetof(FMutableModelImageProperties, TextureParameterName) == 0x000000, "Member 'FMutableModelImageProperties::TextureParameterName' has a wrong offset!");
static_assert(offsetof(FMutableModelImageProperties, CompressionSettings) == 0x000010, "Member 'FMutableModelImageProperties::CompressionSettings' has a wrong offset!");
static_assert(offsetof(FMutableModelImageProperties, Filter) == 0x000011, "Member 'FMutableModelImageProperties::Filter' has a wrong offset!");
static_assert(offsetof(FMutableModelImageProperties, LODBias) == 0x000018, "Member 'FMutableModelImageProperties::LODBias' has a wrong offset!");
static_assert(offsetof(FMutableModelImageProperties, MipGenSettings) == 0x00001C, "Member 'FMutableModelImageProperties::MipGenSettings' has a wrong offset!");

// ScriptStruct CustomizableObject.CustomizableObjectIdentifier
// 0x0030 (0x0030 - 0x0000)
struct FCustomizableObjectIdentifier final
{
public:
	class FString                                 CustomizableObjectGroupName;                       // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                 CustomizableObjectName;                            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                 Guid;                                              // 0x0020(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCustomizableObjectIdentifier) == 0x000008, "Wrong alignment on FCustomizableObjectIdentifier");
static_assert(sizeof(FCustomizableObjectIdentifier) == 0x000030, "Wrong size on FCustomizableObjectIdentifier");
static_assert(offsetof(FCustomizableObjectIdentifier, CustomizableObjectGroupName) == 0x000000, "Member 'FCustomizableObjectIdentifier::CustomizableObjectGroupName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectIdentifier, CustomizableObjectName) == 0x000010, "Member 'FCustomizableObjectIdentifier::CustomizableObjectName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectIdentifier, Guid) == 0x000020, "Member 'FCustomizableObjectIdentifier::Guid' has a wrong offset!");

// ScriptStruct CustomizableObject.CustomizableObjectIdPair
// 0x0020 (0x0020 - 0x0000)
struct FCustomizableObjectIdPair final
{
public:
	class FString                                 CustomizableObjectGroupName;                       // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CustomizableObjectName;                            // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCustomizableObjectIdPair) == 0x000008, "Wrong alignment on FCustomizableObjectIdPair");
static_assert(sizeof(FCustomizableObjectIdPair) == 0x000020, "Wrong size on FCustomizableObjectIdPair");
static_assert(offsetof(FCustomizableObjectIdPair, CustomizableObjectGroupName) == 0x000000, "Member 'FCustomizableObjectIdPair::CustomizableObjectGroupName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectIdPair, CustomizableObjectName) == 0x000010, "Member 'FCustomizableObjectIdPair::CustomizableObjectName' has a wrong offset!");

// ScriptStruct CustomizableObject.MutableModelParameterValue
// 0x0018 (0x0018 - 0x0000)
struct FMutableModelParameterValue final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Value;                                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMutableModelParameterValue) == 0x000008, "Wrong alignment on FMutableModelParameterValue");
static_assert(sizeof(FMutableModelParameterValue) == 0x000018, "Wrong size on FMutableModelParameterValue");
static_assert(offsetof(FMutableModelParameterValue, Name) == 0x000000, "Member 'FMutableModelParameterValue::Name' has a wrong offset!");
static_assert(offsetof(FMutableModelParameterValue, Value) == 0x000010, "Member 'FMutableModelParameterValue::Value' has a wrong offset!");

// ScriptStruct CustomizableObject.MutableModelParameterProperties
// 0x0028 (0x0028 - 0x0000)
struct FMutableModelParameterProperties final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMutableParameterType                         Type;                                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ImageDescriptionCount;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMutableModelParameterValue>    PossibleValues;                                    // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMutableModelParameterProperties) == 0x000008, "Wrong alignment on FMutableModelParameterProperties");
static_assert(sizeof(FMutableModelParameterProperties) == 0x000028, "Wrong size on FMutableModelParameterProperties");
static_assert(offsetof(FMutableModelParameterProperties, Name) == 0x000000, "Member 'FMutableModelParameterProperties::Name' has a wrong offset!");
static_assert(offsetof(FMutableModelParameterProperties, Type) == 0x000010, "Member 'FMutableModelParameterProperties::Type' has a wrong offset!");
static_assert(offsetof(FMutableModelParameterProperties, ImageDescriptionCount) == 0x000014, "Member 'FMutableModelParameterProperties::ImageDescriptionCount' has a wrong offset!");
static_assert(offsetof(FMutableModelParameterProperties, PossibleValues) == 0x000018, "Member 'FMutableModelParameterProperties::PossibleValues' has a wrong offset!");

// ScriptStruct CustomizableObject.CompilationOptions
// 0x000C (0x000C - 0x0000)
struct FCompilationOptions final
{
public:
	bool                                          bLocal;                                            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OptimizationLevel;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x4];                                        // 0x0008(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCompilationOptions) == 0x000004, "Wrong alignment on FCompilationOptions");
static_assert(sizeof(FCompilationOptions) == 0x00000C, "Wrong size on FCompilationOptions");
static_assert(offsetof(FCompilationOptions, bLocal) == 0x000000, "Member 'FCompilationOptions::bLocal' has a wrong offset!");
static_assert(offsetof(FCompilationOptions, OptimizationLevel) == 0x000004, "Member 'FCompilationOptions::OptimizationLevel' has a wrong offset!");

// ScriptStruct CustomizableObject.CustomizedMaterialTexture2D
// 0x0010 (0x0010 - 0x0000)
struct FCustomizedMaterialTexture2D final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Texture;                                           // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCustomizedMaterialTexture2D) == 0x000008, "Wrong alignment on FCustomizedMaterialTexture2D");
static_assert(sizeof(FCustomizedMaterialTexture2D) == 0x000010, "Wrong size on FCustomizedMaterialTexture2D");
static_assert(offsetof(FCustomizedMaterialTexture2D, Name) == 0x000000, "Member 'FCustomizedMaterialTexture2D::Name' has a wrong offset!");
static_assert(offsetof(FCustomizedMaterialTexture2D, Texture) == 0x000008, "Member 'FCustomizedMaterialTexture2D::Texture' has a wrong offset!");

// ScriptStruct CustomizableObject.CustomizableObjectProjector
// 0x002C (0x002C - 0x0000)
struct FCustomizableObjectProjector final
{
public:
	struct FVector                                Position;                                          // 0x0000(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Direction;                                         // 0x000C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Up;                                                // 0x0018(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                              Scale;                                             // 0x0024(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCustomizableObjectProjector) == 0x000004, "Wrong alignment on FCustomizableObjectProjector");
static_assert(sizeof(FCustomizableObjectProjector) == 0x00002C, "Wrong size on FCustomizableObjectProjector");
static_assert(offsetof(FCustomizableObjectProjector, Position) == 0x000000, "Member 'FCustomizableObjectProjector::Position' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectProjector, Direction) == 0x00000C, "Member 'FCustomizableObjectProjector::Direction' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectProjector, Up) == 0x000018, "Member 'FCustomizableObjectProjector::Up' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectProjector, Scale) == 0x000024, "Member 'FCustomizableObjectProjector::Scale' has a wrong offset!");

// ScriptStruct CustomizableObject.CustomizableObjectProjectorParameterValue
// 0x0040 (0x0040 - 0x0000)
struct FCustomizableObjectProjectorParameterValue final
{
public:
	class FString                                 ParameterName;                                     // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCustomizableObjectProjector           Value;                                             // 0x0010(0x002C)(Edit, EditConst, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCustomizableObjectProjectorParameterValue) == 0x000008, "Wrong alignment on FCustomizableObjectProjectorParameterValue");
static_assert(sizeof(FCustomizableObjectProjectorParameterValue) == 0x000040, "Wrong size on FCustomizableObjectProjectorParameterValue");
static_assert(offsetof(FCustomizableObjectProjectorParameterValue, ParameterName) == 0x000000, "Member 'FCustomizableObjectProjectorParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectProjectorParameterValue, Value) == 0x000010, "Member 'FCustomizableObjectProjectorParameterValue::Value' has a wrong offset!");

// ScriptStruct CustomizableObject.CustomizableObjectVectorParameterValue
// 0x0020 (0x0020 - 0x0000)
struct FCustomizableObjectVectorParameterValue final
{
public:
	class FString                                 ParameterName;                                     // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ParameterValue;                                    // 0x0010(0x0010)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCustomizableObjectVectorParameterValue) == 0x000008, "Wrong alignment on FCustomizableObjectVectorParameterValue");
static_assert(sizeof(FCustomizableObjectVectorParameterValue) == 0x000020, "Wrong size on FCustomizableObjectVectorParameterValue");
static_assert(offsetof(FCustomizableObjectVectorParameterValue, ParameterName) == 0x000000, "Member 'FCustomizableObjectVectorParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectVectorParameterValue, ParameterValue) == 0x000010, "Member 'FCustomizableObjectVectorParameterValue::ParameterValue' has a wrong offset!");

// ScriptStruct CustomizableObject.CustomizableObjectFloatParameterValue
// 0x0018 (0x0018 - 0x0000)
struct FCustomizableObjectFloatParameterValue final
{
public:
	class FString                                 ParameterName;                                     // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ParameterValue;                                    // 0x0010(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCustomizableObjectFloatParameterValue) == 0x000008, "Wrong alignment on FCustomizableObjectFloatParameterValue");
static_assert(sizeof(FCustomizableObjectFloatParameterValue) == 0x000018, "Wrong size on FCustomizableObjectFloatParameterValue");
static_assert(offsetof(FCustomizableObjectFloatParameterValue, ParameterName) == 0x000000, "Member 'FCustomizableObjectFloatParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectFloatParameterValue, ParameterValue) == 0x000010, "Member 'FCustomizableObjectFloatParameterValue::ParameterValue' has a wrong offset!");

// ScriptStruct CustomizableObject.CustomizableObjectIntParameterValue
// 0x0028 (0x0028 - 0x0000)
struct FCustomizableObjectIntParameterValue final
{
public:
	class FString                                 ParameterName;                                     // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ParameterValue;                                    // 0x0010(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ParameterValueName;                                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCustomizableObjectIntParameterValue) == 0x000008, "Wrong alignment on FCustomizableObjectIntParameterValue");
static_assert(sizeof(FCustomizableObjectIntParameterValue) == 0x000028, "Wrong size on FCustomizableObjectIntParameterValue");
static_assert(offsetof(FCustomizableObjectIntParameterValue, ParameterName) == 0x000000, "Member 'FCustomizableObjectIntParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectIntParameterValue, ParameterValue) == 0x000010, "Member 'FCustomizableObjectIntParameterValue::ParameterValue' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectIntParameterValue, ParameterValueName) == 0x000018, "Member 'FCustomizableObjectIntParameterValue::ParameterValueName' has a wrong offset!");

// ScriptStruct CustomizableObject.CustomizableObjectBoolParameterValue
// 0x0018 (0x0018 - 0x0000)
struct FCustomizableObjectBoolParameterValue final
{
public:
	class FString                                 ParameterName;                                     // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ParameterValue;                                    // 0x0010(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCustomizableObjectBoolParameterValue) == 0x000008, "Wrong alignment on FCustomizableObjectBoolParameterValue");
static_assert(sizeof(FCustomizableObjectBoolParameterValue) == 0x000018, "Wrong size on FCustomizableObjectBoolParameterValue");
static_assert(offsetof(FCustomizableObjectBoolParameterValue, ParameterName) == 0x000000, "Member 'FCustomizableObjectBoolParameterValue::ParameterName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectBoolParameterValue, ParameterValue) == 0x000010, "Member 'FCustomizableObjectBoolParameterValue::ParameterValue' has a wrong offset!");

// ScriptStruct CustomizableObject.MutableTextureTracker
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x04) FMutableTextureTracker final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMutableTextureTracker) == 0x000004, "Wrong alignment on FMutableTextureTracker");
static_assert(sizeof(FMutableTextureTracker) == 0x000008, "Wrong size on FMutableTextureTracker");

// ScriptStruct CustomizableObject.MutableSkeletalMeshTracker
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x04) FMutableSkeletalMeshTracker final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMutableSkeletalMeshTracker) == 0x000004, "Wrong alignment on FMutableSkeletalMeshTracker");
static_assert(sizeof(FMutableSkeletalMeshTracker) == 0x000008, "Wrong size on FMutableSkeletalMeshTracker");

}

