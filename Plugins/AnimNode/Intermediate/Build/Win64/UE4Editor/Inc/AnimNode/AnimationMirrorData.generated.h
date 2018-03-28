// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class MirrorDir : uint8;
#ifdef ANIMNODE_AnimationMirrorData_generated_h
#error "AnimationMirrorData.generated.h already included, missing '#pragma once' in AnimationMirrorData.h"
#endif
#define ANIMNODE_AnimationMirrorData_generated_h

#define HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBoneRightAxisDataStructure) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<MirrorDir>*)Z_Param__Result=this->GetBoneRightAxisDataStructure(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneMirrorAxisDataStructure) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<MirrorDir>*)Z_Param__Result=this->GetBoneMirrorAxisDataStructure(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneMirrorDataStructure) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FName>*)Z_Param__Result=this->GetBoneMirrorDataStructure(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMirrorMappedBone) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_bone_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetMirrorMappedBone(Z_Param_bone_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPelvisBoneName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetPelvisBoneName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPelvisBoneName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_bone_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPelvisBoneName(Z_Param_bone_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMirrorMappedData) \
	{ \
		P_GET_TARRAY(FName,Z_Param_pMirrorData); \
		P_GET_TARRAY(MirrorDir,Z_Param_pMirrorAxisData); \
		P_GET_TARRAY(MirrorDir,Z_Param_pRightAxisData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMirrorMappedData(Z_Param_pMirrorData,Z_Param_pMirrorAxisData,Z_Param_pRightAxisData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMirrorMappedBone) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_bone_name); \
		P_GET_PROPERTY(UNameProperty,Z_Param_mirror_bone_name); \
		P_GET_ENUM(MirrorDir,Z_Param_mirror_axis); \
		P_GET_ENUM(MirrorDir,Z_Param_right_axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMirrorMappedBone(Z_Param_bone_name,Z_Param_mirror_bone_name,MirrorDir(Z_Param_mirror_axis),MirrorDir(Z_Param_right_axis)); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBoneRightAxisDataStructure) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<MirrorDir>*)Z_Param__Result=this->GetBoneRightAxisDataStructure(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneMirrorAxisDataStructure) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<MirrorDir>*)Z_Param__Result=this->GetBoneMirrorAxisDataStructure(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneMirrorDataStructure) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FName>*)Z_Param__Result=this->GetBoneMirrorDataStructure(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMirrorMappedBone) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_bone_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetMirrorMappedBone(Z_Param_bone_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPelvisBoneName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetPelvisBoneName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPelvisBoneName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_bone_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPelvisBoneName(Z_Param_bone_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMirrorMappedData) \
	{ \
		P_GET_TARRAY(FName,Z_Param_pMirrorData); \
		P_GET_TARRAY(MirrorDir,Z_Param_pMirrorAxisData); \
		P_GET_TARRAY(MirrorDir,Z_Param_pRightAxisData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMirrorMappedData(Z_Param_pMirrorData,Z_Param_pMirrorAxisData,Z_Param_pRightAxisData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMirrorMappedBone) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_bone_name); \
		P_GET_PROPERTY(UNameProperty,Z_Param_mirror_bone_name); \
		P_GET_ENUM(MirrorDir,Z_Param_mirror_axis); \
		P_GET_ENUM(MirrorDir,Z_Param_right_axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMirrorMappedBone(Z_Param_bone_name,Z_Param_mirror_bone_name,MirrorDir(Z_Param_mirror_axis),MirrorDir(Z_Param_right_axis)); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationMirrorData(); \
	friend ANIMNODE_API class UClass* Z_Construct_UClass_UAnimationMirrorData(); \
public: \
	DECLARE_CLASS(UAnimationMirrorData, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AnimNode"), NO_API) \
	DECLARE_SERIALIZER(UAnimationMirrorData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationMirrorData(); \
	friend ANIMNODE_API class UClass* Z_Construct_UClass_UAnimationMirrorData(); \
public: \
	DECLARE_CLASS(UAnimationMirrorData, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AnimNode"), NO_API) \
	DECLARE_SERIALIZER(UAnimationMirrorData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationMirrorData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationMirrorData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationMirrorData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationMirrorData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationMirrorData(UAnimationMirrorData&&); \
	NO_API UAnimationMirrorData(const UAnimationMirrorData&); \
public:


#define HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationMirrorData(UAnimationMirrorData&&); \
	NO_API UAnimationMirrorData(const UAnimationMirrorData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationMirrorData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationMirrorData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimationMirrorData)


#define HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_29_PROLOG
#define HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_RPC_WRAPPERS \
	HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_INCLASS \
	HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h


#define FOREACH_ENUM_MIRRORDIR(op) \
	op(MirrorDir::None) \
	op(MirrorDir::X_Axis) \
	op(MirrorDir::Y_Axis) \
	op(MirrorDir::Z_Axis) \
	op(MirrorDir::XY_Axis) \
	op(MirrorDir::YZ_Axis) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
