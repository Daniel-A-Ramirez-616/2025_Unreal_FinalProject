// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPLab/CPPLabGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPPLabGameMode() {}

// ********** Begin Cross Module References ********************************************************
CPPLAB_API UClass* Z_Construct_UClass_ACPPLabGameMode();
CPPLAB_API UClass* Z_Construct_UClass_ACPPLabGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CPPLab();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPPLabGameMode **********************************************************
void ACPPLabGameMode::StaticRegisterNativesACPPLabGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPPLabGameMode;
UClass* ACPPLabGameMode::GetPrivateStaticClass()
{
	using TClass = ACPPLabGameMode;
	if (!Z_Registration_Info_UClass_ACPPLabGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPPLabGameMode"),
			Z_Registration_Info_UClass_ACPPLabGameMode.InnerSingleton,
			StaticRegisterNativesACPPLabGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACPPLabGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPPLabGameMode_NoRegister()
{
	return ACPPLabGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPPLabGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPPLabGameMode.h" },
		{ "ModuleRelativePath", "CPPLabGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPPLabGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPPLabGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CPPLab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPPLabGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPPLabGameMode_Statics::ClassParams = {
	&ACPPLabGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPPLabGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPPLabGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPPLabGameMode()
{
	if (!Z_Registration_Info_UClass_ACPPLabGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPPLabGameMode.OuterSingleton, Z_Construct_UClass_ACPPLabGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPPLabGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPPLabGameMode);
ACPPLabGameMode::~ACPPLabGameMode() {}
// ********** End Class ACPPLabGameMode ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabGameMode_h__Script_CPPLab_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPPLabGameMode, ACPPLabGameMode::StaticClass, TEXT("ACPPLabGameMode"), &Z_Registration_Info_UClass_ACPPLabGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPPLabGameMode), 3014415204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabGameMode_h__Script_CPPLab_946829626(TEXT("/Script/CPPLab"),
	Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabGameMode_h__Script_CPPLab_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabGameMode_h__Script_CPPLab_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
