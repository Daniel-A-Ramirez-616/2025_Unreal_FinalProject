// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPCPPCharacter.h"

#ifdef FPCPP_FPCPPCharacter_generated_h
#error "FPCPPCharacter.generated.h already included, missing '#pragma once' in FPCPPCharacter.h"
#endif
#define FPCPP_FPCPPCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPCPPCharacter **********************************************************
#define FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


FPCPP_API UClass* Z_Construct_UClass_AFPCPPCharacter_NoRegister();

#define FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPCPPCharacter(); \
	friend struct Z_Construct_UClass_AFPCPPCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPCPP_API UClass* Z_Construct_UClass_AFPCPPCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPCPPCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPCPP"), Z_Construct_UClass_AFPCPPCharacter_NoRegister) \
	DECLARE_SERIALIZER(AFPCPPCharacter)


#define FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPCPPCharacter(AFPCPPCharacter&&) = delete; \
	AFPCPPCharacter(const AFPCPPCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPCPPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPCPPCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFPCPPCharacter) \
	NO_API virtual ~AFPCPPCharacter();


#define FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPCharacter_h_21_PROLOG
#define FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPCPPCharacter;

// ********** End Class AFPCPPCharacter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Working_2025_Unreal_FinalProject_FPCPP_Source_FPCPP_FPCPPCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
