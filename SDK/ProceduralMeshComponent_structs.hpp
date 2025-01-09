#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProceduralMeshComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
// NumValues: 0x0004
enum class EProcMeshSliceCapOption : uint8
{
	NoCap                                    = 0,
	CreateNewSectionForCap                   = 1,
	UseLastSectionForCap                     = 2,
	EProcMeshSliceCapOption_MAX              = 3,
};

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// 0x0010 (0x0010 - 0x0000)
struct FProcMeshTangent final
{
public:
	struct FVector                                TangentX;                                          // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bFlipTangentY;                                     // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FProcMeshTangent) == 0x000004, "Wrong alignment on FProcMeshTangent");
static_assert(sizeof(FProcMeshTangent) == 0x000010, "Wrong size on FProcMeshTangent");
static_assert(offsetof(FProcMeshTangent, TangentX) == 0x000000, "Member 'FProcMeshTangent::TangentX' has a wrong offset!");
static_assert(offsetof(FProcMeshTangent, bFlipTangentY) == 0x00000C, "Member 'FProcMeshTangent::bFlipTangentY' has a wrong offset!");

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// 0x0034 (0x0034 - 0x0000)
struct FProcMeshVertex final
{
public:
	struct FVector                                Position;                                          // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Normal;                                            // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FProcMeshTangent                       Tangent;                                           // 0x0018(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FColor                                 Color;                                             // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                              UV0;                                               // 0x002C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FProcMeshVertex) == 0x000004, "Wrong alignment on FProcMeshVertex");
static_assert(sizeof(FProcMeshVertex) == 0x000034, "Wrong size on FProcMeshVertex");
static_assert(offsetof(FProcMeshVertex, Position) == 0x000000, "Member 'FProcMeshVertex::Position' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, Normal) == 0x00000C, "Member 'FProcMeshVertex::Normal' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, Tangent) == 0x000018, "Member 'FProcMeshVertex::Tangent' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, Color) == 0x000028, "Member 'FProcMeshVertex::Color' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, UV0) == 0x00002C, "Member 'FProcMeshVertex::UV0' has a wrong offset!");

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// 0x0040 (0x0040 - 0x0000)
struct FProcMeshSection final
{
public:
	TArray<struct FProcMeshVertex>                ProcVertexBuffer;                                  // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 ProcIndexBuffer;                                   // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBox                                   SectionLocalBox;                                   // 0x0020(0x001C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bEnableCollision;                                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSectionVisible;                                   // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FProcMeshSection) == 0x000008, "Wrong alignment on FProcMeshSection");
static_assert(sizeof(FProcMeshSection) == 0x000040, "Wrong size on FProcMeshSection");
static_assert(offsetof(FProcMeshSection, ProcVertexBuffer) == 0x000000, "Member 'FProcMeshSection::ProcVertexBuffer' has a wrong offset!");
static_assert(offsetof(FProcMeshSection, ProcIndexBuffer) == 0x000010, "Member 'FProcMeshSection::ProcIndexBuffer' has a wrong offset!");
static_assert(offsetof(FProcMeshSection, SectionLocalBox) == 0x000020, "Member 'FProcMeshSection::SectionLocalBox' has a wrong offset!");
static_assert(offsetof(FProcMeshSection, bEnableCollision) == 0x00003C, "Member 'FProcMeshSection::bEnableCollision' has a wrong offset!");
static_assert(offsetof(FProcMeshSection, bSectionVisible) == 0x00003D, "Member 'FProcMeshSection::bSectionVisible' has a wrong offset!");

}

