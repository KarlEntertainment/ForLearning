// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEARN_KCharacter_generated_h
#error "KCharacter.generated.h already included, missing '#pragma once' in KCharacter.h"
#endif
#define LEARN_KCharacter_generated_h

#define Learn_Source_Learn_KCharacter_h_18_SPARSE_DATA
#define Learn_Source_Learn_KCharacter_h_18_RPC_WRAPPERS
#define Learn_Source_Learn_KCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Learn_Source_Learn_KCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKCharacter(); \
	friend struct Z_Construct_UClass_AKCharacter_Statics; \
public: \
	DECLARE_CLASS(AKCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Learn"), NO_API) \
	DECLARE_SERIALIZER(AKCharacter)


#define Learn_Source_Learn_KCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAKCharacter(); \
	friend struct Z_Construct_UClass_AKCharacter_Statics; \
public: \
	DECLARE_CLASS(AKCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Learn"), NO_API) \
	DECLARE_SERIALIZER(AKCharacter)


#define Learn_Source_Learn_KCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKCharacter(AKCharacter&&); \
	NO_API AKCharacter(const AKCharacter&); \
public:


#define Learn_Source_Learn_KCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKCharacter(AKCharacter&&); \
	NO_API AKCharacter(const AKCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKCharacter)


#define Learn_Source_Learn_KCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(AKCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(AKCharacter, CameraComp); }


#define Learn_Source_Learn_KCharacter_h_15_PROLOG
#define Learn_Source_Learn_KCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Learn_Source_Learn_KCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	Learn_Source_Learn_KCharacter_h_18_SPARSE_DATA \
	Learn_Source_Learn_KCharacter_h_18_RPC_WRAPPERS \
	Learn_Source_Learn_KCharacter_h_18_INCLASS \
	Learn_Source_Learn_KCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Learn_Source_Learn_KCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Learn_Source_Learn_KCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	Learn_Source_Learn_KCharacter_h_18_SPARSE_DATA \
	Learn_Source_Learn_KCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Learn_Source_Learn_KCharacter_h_18_INCLASS_NO_PURE_DECLS \
	Learn_Source_Learn_KCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARN_API UClass* StaticClass<class AKCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Learn_Source_Learn_KCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
