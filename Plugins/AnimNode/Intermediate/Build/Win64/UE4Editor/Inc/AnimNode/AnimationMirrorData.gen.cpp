// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimationMirrorData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationMirrorData() {}
// Cross Module References
	ANIMNODE_API UEnum* Z_Construct_UEnum_AnimNode_MirrorDir();
	UPackage* Z_Construct_UPackage__Script_AnimNode();
	ANIMNODE_API UClass* Z_Construct_UClass_UAnimationMirrorData_NoRegister();
	ANIMNODE_API UClass* Z_Construct_UClass_UAnimationMirrorData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ANIMNODE_API UFunction* Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure();
	ANIMNODE_API UFunction* Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure();
	ANIMNODE_API UFunction* Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure();
	ANIMNODE_API UFunction* Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone();
	ANIMNODE_API UFunction* Z_Construct_UFunction_UAnimationMirrorData_GetPelvisBoneName();
	ANIMNODE_API UFunction* Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone();
	ANIMNODE_API UFunction* Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData();
	ANIMNODE_API UFunction* Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName();
// End Cross Module References
	static UEnum* MirrorDir_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimNode_MirrorDir, Z_Construct_UPackage__Script_AnimNode(), TEXT("MirrorDir"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_MirrorDir(MirrorDir_StaticEnum, TEXT("/Script/AnimNode"), TEXT("MirrorDir"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimNode_MirrorDir_CRC() { return 3577309862U; }
	UEnum* Z_Construct_UEnum_AnimNode_MirrorDir()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimNode();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("MirrorDir"), 0, Get_Z_Construct_UEnum_AnimNode_MirrorDir_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MirrorDir::None", (int64)MirrorDir::None },
				{ "MirrorDir::X_Axis", (int64)MirrorDir::X_Axis },
				{ "MirrorDir::Y_Axis", (int64)MirrorDir::Y_Axis },
				{ "MirrorDir::Z_Axis", (int64)MirrorDir::Z_Axis },
				{ "MirrorDir::XY_Axis", (int64)MirrorDir::XY_Axis },
				{ "MirrorDir::YZ_Axis", (int64)MirrorDir::YZ_Axis },
				{ "MirrorDir::XZ_Axis", (int64)MirrorDir::XZ_Axis },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimNode,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"MirrorDir",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"MirrorDir",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UAnimationMirrorData::StaticRegisterNativesUAnimationMirrorData()
	{
		UClass* Class = UAnimationMirrorData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoneMirrorAxisDataStructure", (Native)&UAnimationMirrorData::execGetBoneMirrorAxisDataStructure },
			{ "GetBoneMirrorDataStructure", (Native)&UAnimationMirrorData::execGetBoneMirrorDataStructure },
			{ "GetBoneRightAxisDataStructure", (Native)&UAnimationMirrorData::execGetBoneRightAxisDataStructure },
			{ "GetMirrorMappedBone", (Native)&UAnimationMirrorData::execGetMirrorMappedBone },
			{ "GetPelvisBoneName", (Native)&UAnimationMirrorData::execGetPelvisBoneName },
			{ "SetMirrorMappedBone", (Native)&UAnimationMirrorData::execSetMirrorMappedBone },
			{ "SetMirrorMappedData", (Native)&UAnimationMirrorData::execSetMirrorMappedData },
			{ "SetPelvisBoneName", (Native)&UAnimationMirrorData::execSetPelvisBoneName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure()
	{
		struct AnimationMirrorData_eventGetBoneMirrorAxisDataStructure_Parms
		{
			TArray<MirrorDir> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AnimationMirrorData_eventGetBoneMirrorAxisDataStructure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mirror Animation" },
				{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMirrorData, "GetBoneMirrorAxisDataStructure", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AnimationMirrorData_eventGetBoneMirrorAxisDataStructure_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure()
	{
		struct AnimationMirrorData_eventGetBoneMirrorDataStructure_Parms
		{
			TArray<FName> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AnimationMirrorData_eventGetBoneMirrorDataStructure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mirror Animation" },
				{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMirrorData, "GetBoneMirrorDataStructure", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AnimationMirrorData_eventGetBoneMirrorDataStructure_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure()
	{
		struct AnimationMirrorData_eventGetBoneRightAxisDataStructure_Parms
		{
			TArray<MirrorDir> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AnimationMirrorData_eventGetBoneRightAxisDataStructure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mirror Animation" },
				{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMirrorData, "GetBoneRightAxisDataStructure", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AnimationMirrorData_eventGetBoneRightAxisDataStructure_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone()
	{
		struct AnimationMirrorData_eventGetMirrorMappedBone_Parms
		{
			FName bone_name;
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AnimationMirrorData_eventGetMirrorMappedBone_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bone_name_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_bone_name = { UE4CodeGen_Private::EPropertyClass::Name, "bone_name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AnimationMirrorData_eventGetMirrorMappedBone_Parms, bone_name), METADATA_PARAMS(NewProp_bone_name_MetaData, ARRAY_COUNT(NewProp_bone_name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bone_name,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mirror Animation" },
				{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMirrorData, "GetMirrorMappedBone", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AnimationMirrorData_eventGetMirrorMappedBone_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimationMirrorData_GetPelvisBoneName()
	{
		struct AnimationMirrorData_eventGetPelvisBoneName_Parms
		{
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AnimationMirrorData_eventGetPelvisBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mirror Animation" },
				{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMirrorData, "GetPelvisBoneName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AnimationMirrorData_eventGetPelvisBoneName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone()
	{
		struct AnimationMirrorData_eventSetMirrorMappedBone_Parms
		{
			FName bone_name;
			FName mirror_bone_name;
			MirrorDir mirror_axis;
			MirrorDir right_axis;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_right_axis_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_right_axis = { UE4CodeGen_Private::EPropertyClass::Enum, "right_axis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AnimationMirrorData_eventSetMirrorMappedBone_Parms, right_axis), Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(NewProp_right_axis_MetaData, ARRAY_COUNT(NewProp_right_axis_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_right_axis_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mirror_axis_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mirror_axis = { UE4CodeGen_Private::EPropertyClass::Enum, "mirror_axis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AnimationMirrorData_eventSetMirrorMappedBone_Parms, mirror_axis), Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(NewProp_mirror_axis_MetaData, ARRAY_COUNT(NewProp_mirror_axis_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_mirror_axis_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mirror_bone_name_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_mirror_bone_name = { UE4CodeGen_Private::EPropertyClass::Name, "mirror_bone_name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AnimationMirrorData_eventSetMirrorMappedBone_Parms, mirror_bone_name), METADATA_PARAMS(NewProp_mirror_bone_name_MetaData, ARRAY_COUNT(NewProp_mirror_bone_name_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bone_name_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_bone_name = { UE4CodeGen_Private::EPropertyClass::Name, "bone_name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AnimationMirrorData_eventSetMirrorMappedBone_Parms, bone_name), METADATA_PARAMS(NewProp_bone_name_MetaData, ARRAY_COUNT(NewProp_bone_name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_right_axis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_right_axis_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mirror_axis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mirror_axis_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mirror_bone_name,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bone_name,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mirror Animation" },
				{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
				{ "ToolTip", "Functions" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMirrorData, "SetMirrorMappedBone", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AnimationMirrorData_eventSetMirrorMappedBone_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData()
	{
		struct AnimationMirrorData_eventSetMirrorMappedData_Parms
		{
			TArray<FName> pMirrorData;
			TArray<MirrorDir> pMirrorAxisData;
			TArray<MirrorDir> pRightAxisData;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pRightAxisData = { UE4CodeGen_Private::EPropertyClass::Array, "pRightAxisData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimationMirrorData_eventSetMirrorMappedData_Parms, pRightAxisData), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_pRightAxisData_Inner = { UE4CodeGen_Private::EPropertyClass::Enum, "pRightAxisData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_pRightAxisData_Inner_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pMirrorAxisData = { UE4CodeGen_Private::EPropertyClass::Array, "pMirrorAxisData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimationMirrorData_eventSetMirrorMappedData_Parms, pMirrorAxisData), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_pMirrorAxisData_Inner = { UE4CodeGen_Private::EPropertyClass::Enum, "pMirrorAxisData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_pMirrorAxisData_Inner_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pMirrorData = { UE4CodeGen_Private::EPropertyClass::Array, "pMirrorData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AnimationMirrorData_eventSetMirrorMappedData_Parms, pMirrorData), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_pMirrorData_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "pMirrorData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pRightAxisData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pRightAxisData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pRightAxisData_Inner_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pMirrorAxisData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pMirrorAxisData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pMirrorAxisData_Inner_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pMirrorData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pMirrorData_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mirror Animation" },
				{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMirrorData, "SetMirrorMappedData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AnimationMirrorData_eventSetMirrorMappedData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName()
	{
		struct AnimationMirrorData_eventSetPelvisBoneName_Parms
		{
			FName bone_name;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bone_name_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_bone_name = { UE4CodeGen_Private::EPropertyClass::Name, "bone_name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AnimationMirrorData_eventSetPelvisBoneName_Parms, bone_name), METADATA_PARAMS(NewProp_bone_name_MetaData, ARRAY_COUNT(NewProp_bone_name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bone_name,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mirror Animation" },
				{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMirrorData, "SetPelvisBoneName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AnimationMirrorData_eventSetPelvisBoneName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimationMirrorData_NoRegister()
	{
		return UAnimationMirrorData::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimationMirrorData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AnimNode,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure, "GetBoneMirrorAxisDataStructure" }, // 1045276734
				{ &Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure, "GetBoneMirrorDataStructure" }, // 3257923915
				{ &Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure, "GetBoneRightAxisDataStructure" }, // 4097014937
				{ &Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone, "GetMirrorMappedBone" }, // 3507461120
				{ &Z_Construct_UFunction_UAnimationMirrorData_GetPelvisBoneName, "GetPelvisBoneName" }, // 4198494767
				{ &Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone, "SetMirrorMappedBone" }, // 1107598715
				{ &Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData, "SetMirrorMappedData" }, // 1751101826
				{ &Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName, "SetPelvisBoneName" }, // 27122691
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AnimationMirrorData.h" },
				{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisRightAxis_MetaData[] = {
				{ "Category", "Mirror Animation" },
				{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PelvisRightAxis = { UE4CodeGen_Private::EPropertyClass::Enum, "PelvisRightAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAnimationMirrorData, PelvisRightAxis), Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(NewProp_PelvisRightAxis_MetaData, ARRAY_COUNT(NewProp_PelvisRightAxis_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PelvisRightAxis_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisMirrorAxis_Rot_MetaData[] = {
				{ "Category", "Mirror Animation" },
				{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PelvisMirrorAxis_Rot = { UE4CodeGen_Private::EPropertyClass::Enum, "PelvisMirrorAxis_Rot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAnimationMirrorData, PelvisMirrorAxis_Rot), Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(NewProp_PelvisMirrorAxis_Rot_MetaData, ARRAY_COUNT(NewProp_PelvisMirrorAxis_Rot_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PelvisMirrorAxis_Rot_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightAxis_MetaData[] = {
				{ "Category", "Mirror Animation" },
				{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RightAxis = { UE4CodeGen_Private::EPropertyClass::Enum, "RightAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAnimationMirrorData, RightAxis), Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(NewProp_RightAxis_MetaData, ARRAY_COUNT(NewProp_RightAxis_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RightAxis_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorAxis_Rot_MetaData[] = {
				{ "Category", "Mirror Animation" },
				{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
				{ "ToolTip", "Shows mirror axis." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MirrorAxis_Rot = { UE4CodeGen_Private::EPropertyClass::Enum, "MirrorAxis_Rot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAnimationMirrorData, MirrorAxis_Rot), Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(NewProp_MirrorAxis_Rot_MetaData, ARRAY_COUNT(NewProp_MirrorAxis_Rot_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MirrorAxis_Rot_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PelvisRightAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PelvisRightAxis_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PelvisMirrorAxis_Rot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PelvisMirrorAxis_Rot_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightAxis_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MirrorAxis_Rot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MirrorAxis_Rot_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimationMirrorData>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimationMirrorData::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UAnimationMirrorData, 723241063);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationMirrorData(Z_Construct_UClass_UAnimationMirrorData, &UAnimationMirrorData::StaticClass, TEXT("/Script/AnimNode"), TEXT("UAnimationMirrorData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationMirrorData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
