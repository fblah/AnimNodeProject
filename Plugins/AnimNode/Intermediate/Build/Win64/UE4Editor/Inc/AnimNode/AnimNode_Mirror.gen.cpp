// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNode_Mirror.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Mirror() {}
// Cross Module References
	ANIMNODE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Mirror();
	UPackage* Z_Construct_UPackage__Script_AnimNode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ANIMNODE_API UClass* Z_Construct_UClass_UAnimationMirrorData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_Mirror::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMNODE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Mirror_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror, Z_Construct_UPackage__Script_AnimNode(), TEXT("AnimNode_Mirror"), sizeof(FAnimNode_Mirror), Get_Z_Construct_UScriptStruct_FAnimNode_Mirror_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_Mirror(FAnimNode_Mirror::StaticStruct, TEXT("/Script/AnimNode"), TEXT("AnimNode_Mirror"), false, nullptr, nullptr);
static struct FScriptStruct_AnimNode_StaticRegisterNativesFAnimNode_Mirror
{
	FScriptStruct_AnimNode_StaticRegisterNativesFAnimNode_Mirror()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_Mirror")),new UScriptStruct::TCppStructOps<FAnimNode_Mirror>);
	}
} ScriptStruct_AnimNode_StaticRegisterNativesFAnimNode_Mirror;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Mirror()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Mirror_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimNode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_Mirror"), sizeof(FAnimNode_Mirror), Get_Z_Construct_UScriptStruct_FAnimNode_Mirror_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Mirror>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAnimMirrorData_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
				{ "PinShownByDefault", "" },
				{ "ToolTip", "Mirror Data" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAnimMirrorData = { UE4CodeGen_Private::EPropertyClass::Object, "mAnimMirrorData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_Mirror, mAnimMirrorData), Z_Construct_UClass_UAnimationMirrorData_NoRegister, METADATA_PARAMS(NewProp_mAnimMirrorData_MetaData, ARRAY_COUNT(NewProp_mAnimMirrorData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[] = {
				{ "Category", "Links" },
				{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
				{ "ToolTip", "Base Pose" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePose = { UE4CodeGen_Private::EPropertyClass::Struct, "BasePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_Mirror, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(NewProp_BasePose_MetaData, ARRAY_COUNT(NewProp_BasePose_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mAnimMirrorData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BasePose,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimNode,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_Mirror",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_Mirror),
				alignof(FAnimNode_Mirror),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Mirror_CRC() { return 3329826056U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
