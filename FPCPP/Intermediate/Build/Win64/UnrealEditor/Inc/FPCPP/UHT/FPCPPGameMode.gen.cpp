// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPCPP/FPCPPGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPCPPGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FPCPP_API UClass* Z_Construct_UClass_AFPCPPGameMode();
FPCPP_API UClass* Z_Construct_UClass_AFPCPPGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPCPP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPCPPGameMode ***********************************************************
void AFPCPPGameMode::StaticRegisterNativesAFPCPPGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPCPPGameMode;
UClass* AFPCPPGameMode::GetPrivateStaticClass()
{
	using TClass = AFPCPPGameMode;
	if (!Z_Registration_Info_UClass_AFPCPPGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPCPPGameMode"),
			Z_Registration_Info_UClass_AFPCPPGameMode.InnerSingleton,
			StaticRegisterNativesAFPCPPGameMode,
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
	return Z_Registration_Info_UClass_AFPCPPGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPCPPGameMode_NoRegister()
{
	return AFPCPPGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPCPPGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPCPPGameMode.h" },
		{ "ModuleRelativePath", "FPCPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPCPPGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPCPPGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FPCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCPPGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPCPPGameMode_Statics::ClassParams = {
	&AFPCPPGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCPPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPCPPGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPCPPGameMode()
{
	if (!Z_Registration_Info_UClass_AFPCPPGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPCPPGameMode.OuterSingleton, Z_Construct_UClass_AFPCPPGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPCPPGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPCPPGameMode);
AFPCPPGameMode::~AFPCPPGameMode() {}
// ********** End Class AFPCPPGameMode *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPGameMode_h__Script_FPCPP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPCPPGameMode, AFPCPPGameMode::StaticClass, TEXT("AFPCPPGameMode"), &Z_Registration_Info_UClass_AFPCPPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPCPPGameMode), 2851222965U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPGameMode_h__Script_FPCPP_1217311623(TEXT("/Script/FPCPP"),
	Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPGameMode_h__Script_FPCPP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPGameMode_h__Script_FPCPP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
