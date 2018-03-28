// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimGraphNode_Mirror.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_Mirror() {}
// Cross Module References
	ANIMNODEEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_Mirror_NoRegister();
	ANIMNODEEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_Mirror();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_AnimNodeEditor();
	ANIMNODE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Mirror();
// End Cross Module References
	void UAnimGraphNode_Mirror::StaticRegisterNativesUAnimGraphNode_Mirror()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_Mirror_NoRegister()
	{
		return UAnimGraphNode_Mirror::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_Mirror()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
				(UObject* (*)())Z_Construct_UPackage__Script_AnimNodeEditor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AnimGraphNode_Mirror.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AnimGraphNode_Mirror.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Public/AnimGraphNode_Mirror.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node = { UE4CodeGen_Private::EPropertyClass::Struct, "Node", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimGraphNode_Mirror, Node), Z_Construct_UScriptStruct_FAnimNode_Mirror, METADATA_PARAMS(NewProp_Node_MetaData, ARRAY_COUNT(NewProp_Node_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Node,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimGraphNode_Mirror>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimGraphNode_Mirror::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_Mirror, 712698638);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_Mirror(Z_Construct_UClass_UAnimGraphNode_Mirror, &UAnimGraphNode_Mirror::StaticClass, TEXT("/Script/AnimNodeEditor"), TEXT("UAnimGraphNode_Mirror"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_Mirror);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
