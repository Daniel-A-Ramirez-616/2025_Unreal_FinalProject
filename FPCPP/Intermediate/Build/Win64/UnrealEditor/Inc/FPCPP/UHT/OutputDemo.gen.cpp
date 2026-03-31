// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPCPP/OutputDemo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOutputDemo() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
FPCPP_API UClass* Z_Construct_UClass_AOutputDemo();
FPCPP_API UClass* Z_Construct_UClass_AOutputDemo_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPCPP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AOutputDemo **************************************************************
void AOutputDemo::StaticRegisterNativesAOutputDemo()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AOutputDemo;
UClass* AOutputDemo::GetPrivateStaticClass()
{
	using TClass = AOutputDemo;
	if (!Z_Registration_Info_UClass_AOutputDemo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OutputDemo"),
			Z_Registration_Info_UClass_AOutputDemo.InnerSingleton,
			StaticRegisterNativesAOutputDemo,
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
	return Z_Registration_Info_UClass_AOutputDemo.InnerSingleton;
}
UClass* Z_Construct_UClass_AOutputDemo_NoRegister()
{
	return AOutputDemo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AOutputDemo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OutputDemo.h" },
		{ "ModuleRelativePath", "OutputDemo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WillDisplayMessage_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "ModuleRelativePath", "OutputDemo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WillLogMessage_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "ModuleRelativePath", "OutputDemo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WillLogOtherData_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "ModuleRelativePath", "OutputDemo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMessage_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** hey */" },
#endif
		{ "ModuleRelativePath", "OutputDemo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "hey" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegerRange_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "63" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "ModuleRelativePath", "OutputDemo.h" },
		{ "MultiLine", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
		{ "UIMax", "0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatRange_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "100.00" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "ModuleRelativePath", "OutputDemo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionVector_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "ModuleRelativePath", "OutputDemo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_WillDisplayMessage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WillDisplayMessage;
	static void NewProp_WillLogMessage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WillLogMessage;
	static void NewProp_WillLogOtherData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WillLogOtherData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputMessage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerRange;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FloatRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOutputDemo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AOutputDemo_Statics::NewProp_WillDisplayMessage_SetBit(void* Obj)
{
	((AOutputDemo*)Obj)->WillDisplayMessage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOutputDemo_Statics::NewProp_WillDisplayMessage = { "WillDisplayMessage", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOutputDemo), &Z_Construct_UClass_AOutputDemo_Statics::NewProp_WillDisplayMessage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WillDisplayMessage_MetaData), NewProp_WillDisplayMessage_MetaData) };
void Z_Construct_UClass_AOutputDemo_Statics::NewProp_WillLogMessage_SetBit(void* Obj)
{
	((AOutputDemo*)Obj)->WillLogMessage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOutputDemo_Statics::NewProp_WillLogMessage = { "WillLogMessage", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOutputDemo), &Z_Construct_UClass_AOutputDemo_Statics::NewProp_WillLogMessage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WillLogMessage_MetaData), NewProp_WillLogMessage_MetaData) };
void Z_Construct_UClass_AOutputDemo_Statics::NewProp_WillLogOtherData_SetBit(void* Obj)
{
	((AOutputDemo*)Obj)->WillLogOtherData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOutputDemo_Statics::NewProp_WillLogOtherData = { "WillLogOtherData", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOutputDemo), &Z_Construct_UClass_AOutputDemo_Statics::NewProp_WillLogOtherData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WillLogOtherData_MetaData), NewProp_WillLogOtherData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOutputDemo_Statics::NewProp_OutputMessage = { "OutputMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutputDemo, OutputMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMessage_MetaData), NewProp_OutputMessage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOutputDemo_Statics::NewProp_IntegerRange = { "IntegerRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutputDemo, IntegerRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegerRange_MetaData), NewProp_IntegerRange_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AOutputDemo_Statics::NewProp_FloatRange = { "FloatRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutputDemo, FloatRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatRange_MetaData), NewProp_FloatRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOutputDemo_Statics::NewProp_DirectionVector = { "DirectionVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutputDemo, DirectionVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionVector_MetaData), NewProp_DirectionVector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOutputDemo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutputDemo_Statics::NewProp_WillDisplayMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutputDemo_Statics::NewProp_WillLogMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutputDemo_Statics::NewProp_WillLogOtherData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutputDemo_Statics::NewProp_OutputMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutputDemo_Statics::NewProp_IntegerRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutputDemo_Statics::NewProp_FloatRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutputDemo_Statics::NewProp_DirectionVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOutputDemo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOutputDemo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOutputDemo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOutputDemo_Statics::ClassParams = {
	&AOutputDemo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOutputDemo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOutputDemo_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutputDemo_Statics::Class_MetaDataParams), Z_Construct_UClass_AOutputDemo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOutputDemo()
{
	if (!Z_Registration_Info_UClass_AOutputDemo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOutputDemo.OuterSingleton, Z_Construct_UClass_AOutputDemo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOutputDemo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOutputDemo);
AOutputDemo::~AOutputDemo() {}
// ********** End Class AOutputDemo ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_OutputDemo_h__Script_FPCPP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOutputDemo, AOutputDemo::StaticClass, TEXT("AOutputDemo"), &Z_Registration_Info_UClass_AOutputDemo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOutputDemo), 2561605516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_OutputDemo_h__Script_FPCPP_935485977(TEXT("/Script/FPCPP"),
	Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_OutputDemo_h__Script_FPCPP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_OutputDemo_h__Script_FPCPP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
