// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPLab/CPPLabPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPPLabPlayerController() {}

// ********** Begin Cross Module References ********************************************************
CPPLAB_API UClass* Z_Construct_UClass_ACPPLabPlayerController();
CPPLAB_API UClass* Z_Construct_UClass_ACPPLabPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPPLab();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPPLabPlayerController **************************************************
void ACPPLabPlayerController::StaticRegisterNativesACPPLabPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPPLabPlayerController;
UClass* ACPPLabPlayerController::GetPrivateStaticClass()
{
	using TClass = ACPPLabPlayerController;
	if (!Z_Registration_Info_UClass_ACPPLabPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPPLabPlayerController"),
			Z_Registration_Info_UClass_ACPPLabPlayerController.InnerSingleton,
			StaticRegisterNativesACPPLabPlayerController,
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
	return Z_Registration_Info_UClass_ACPPLabPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPPLabPlayerController_NoRegister()
{
	return ACPPLabPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPPLabPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic PlayerController class for a third person game\n *  Manages input mappings\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CPPLabPlayerController.h" },
		{ "ModuleRelativePath", "CPPLabPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic PlayerController class for a third person game\nManages input mappings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "CPPLabPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPPLabPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPPLabPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPPLabPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPPLabPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPPLabPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPPLabPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPPLabPlayerController_Statics::NewProp_DefaultMappingContexts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPPLabPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPPLabPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CPPLab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPPLabPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPPLabPlayerController_Statics::ClassParams = {
	&ACPPLabPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACPPLabPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPPLabPlayerController_Statics::PropPointers),
	0,
	0x008003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPPLabPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPPLabPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPPLabPlayerController()
{
	if (!Z_Registration_Info_UClass_ACPPLabPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPPLabPlayerController.OuterSingleton, Z_Construct_UClass_ACPPLabPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPPLabPlayerController.OuterSingleton;
}
ACPPLabPlayerController::ACPPLabPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPPLabPlayerController);
ACPPLabPlayerController::~ACPPLabPlayerController() {}
// ********** End Class ACPPLabPlayerController ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabPlayerController_h__Script_CPPLab_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPPLabPlayerController, ACPPLabPlayerController::StaticClass, TEXT("ACPPLabPlayerController"), &Z_Registration_Info_UClass_ACPPLabPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPPLabPlayerController), 1137181647U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabPlayerController_h__Script_CPPLab_2343403923(TEXT("/Script/CPPLab"),
	Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabPlayerController_h__Script_CPPLab_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabPlayerController_h__Script_CPPLab_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
