// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPPLabCharacter.h"

#ifdef CPPLAB_CPPLabCharacter_generated_h
#error "CPPLabCharacter.generated.h already included, missing '#pragma once' in CPPLabCharacter.h"
#endif
#define CPPLAB_CPPLabCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACPPLabCharacter *********************************************************
#define FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


CPPLAB_API UClass* Z_Construct_UClass_ACPPLabCharacter_NoRegister();

#define FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPPLabCharacter(); \
	friend struct Z_Construct_UClass_ACPPLabCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPPLAB_API UClass* Z_Construct_UClass_ACPPLabCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ACPPLabCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPPLab"), Z_Construct_UClass_ACPPLabCharacter_NoRegister) \
	DECLARE_SERIALIZER(ACPPLabCharacter)


#define FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACPPLabCharacter(ACPPLabCharacter&&) = delete; \
	ACPPLabCharacter(const ACPPLabCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPPLabCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPPLabCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACPPLabCharacter) \
	NO_API virtual ~ACPPLabCharacter();


#define FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabCharacter_h_21_PROLOG
#define FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACPPLabCharacter;

// ********** End Class ACPPLabCharacter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Working_2025_Unreal_FinalProject_CPPLab_Source_CPPLab_CPPLabCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
