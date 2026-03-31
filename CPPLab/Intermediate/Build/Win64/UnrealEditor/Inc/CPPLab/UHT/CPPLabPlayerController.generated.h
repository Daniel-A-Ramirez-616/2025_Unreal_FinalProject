// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPPLabPlayerController.h"

#ifdef CPPLAB_CPPLabPlayerController_generated_h
#error "CPPLabPlayerController.generated.h already included, missing '#pragma once' in CPPLabPlayerController.h"
#endif
#define CPPLAB_CPPLabPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACPPLabPlayerController **************************************************
CPPLAB_API UClass* Z_Construct_UClass_ACPPLabPlayerController_NoRegister();

#define FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPPLabPlayerController(); \
	friend struct Z_Construct_UClass_ACPPLabPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPPLAB_API UClass* Z_Construct_UClass_ACPPLabPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACPPLabPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPPLab"), Z_Construct_UClass_ACPPLabPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACPPLabPlayerController)


#define FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPPLabPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACPPLabPlayerController(ACPPLabPlayerController&&) = delete; \
	ACPPLabPlayerController(const ACPPLabPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPPLabPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPPLabPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPPLabPlayerController) \
	NO_API virtual ~ACPPLabPlayerController();


#define FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabPlayerController_h_15_PROLOG
#define FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACPPLabPlayerController;

// ********** End Class ACPPLabPlayerController ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
