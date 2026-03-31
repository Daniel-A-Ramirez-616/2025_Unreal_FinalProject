// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPCPP/FPCPPCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPCPPCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
FPCPP_API UClass* Z_Construct_UClass_AFPCPPCameraManager();
FPCPP_API UClass* Z_Construct_UClass_AFPCPPCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPCPP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPCPPCameraManager ******************************************************
void AFPCPPCameraManager::StaticRegisterNativesAFPCPPCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPCPPCameraManager;
UClass* AFPCPPCameraManager::GetPrivateStaticClass()
{
	using TClass = AFPCPPCameraManager;
	if (!Z_Registration_Info_UClass_AFPCPPCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPCPPCameraManager"),
			Z_Registration_Info_UClass_AFPCPPCameraManager.InnerSingleton,
			StaticRegisterNativesAFPCPPCameraManager,
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
	return Z_Registration_Info_UClass_AFPCPPCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPCPPCameraManager_NoRegister()
{
	return AFPCPPCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPCPPCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "FPCPPCameraManager.h" },
		{ "ModuleRelativePath", "FPCPPCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPCPPCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPCPPCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_FPCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCPPCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPCPPCameraManager_Statics::ClassParams = {
	&AFPCPPCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCPPCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPCPPCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPCPPCameraManager()
{
	if (!Z_Registration_Info_UClass_AFPCPPCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPCPPCameraManager.OuterSingleton, Z_Construct_UClass_AFPCPPCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPCPPCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPCPPCameraManager);
AFPCPPCameraManager::~AFPCPPCameraManager() {}
// ********** End Class AFPCPPCameraManager ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPCameraManager_h__Script_FPCPP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPCPPCameraManager, AFPCPPCameraManager::StaticClass, TEXT("AFPCPPCameraManager"), &Z_Registration_Info_UClass_AFPCPPCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPCPPCameraManager), 2466639979U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPCameraManager_h__Script_FPCPP_1325989487(TEXT("/Script/FPCPP"),
	Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPCameraManager_h__Script_FPCPP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPCameraManager_h__Script_FPCPP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
