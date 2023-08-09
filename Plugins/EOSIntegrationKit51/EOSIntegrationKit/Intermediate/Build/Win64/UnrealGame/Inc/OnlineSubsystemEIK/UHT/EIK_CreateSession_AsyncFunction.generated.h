// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Sessions/EIK_CreateSession_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UEIK_CreateSession_AsyncFunction;
enum class ERegionInfo : uint8;
#ifdef ONLINESUBSYSTEMEIK_EIK_CreateSession_AsyncFunction_generated_h
#error "EIK_CreateSession_AsyncFunction.generated.h already included, missing '#pragma once' in EIK_CreateSession_AsyncFunction.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_CreateSession_AsyncFunction_generated_h

#define FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_16_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventCreateSession_Delegate_Parms \
{ \
	FName SessionName; \
}; \
static inline void FCreateSession_Delegate_DelegateWrapper(const FMulticastScriptDelegate& CreateSession_Delegate, FName SessionName) \
{ \
	_Script_OnlineSubsystemEIK_eventCreateSession_Delegate_Parms Parms; \
	Parms.SessionName=SessionName; \
	CreateSession_Delegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_SPARSE_DATA
#define FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateEIKSession);


#define FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateEIKSession);


#define FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_ACCESSORS
#define FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_CreateSession_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_CreateSession_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_CreateSession_AsyncFunction)


#define FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUEIK_CreateSession_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_CreateSession_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_CreateSession_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_CreateSession_AsyncFunction)


#define FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_CreateSession_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_CreateSession_AsyncFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_CreateSession_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_CreateSession_AsyncFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_CreateSession_AsyncFunction(UEIK_CreateSession_AsyncFunction&&); \
	NO_API UEIK_CreateSession_AsyncFunction(const UEIK_CreateSession_AsyncFunction&); \
public: \
	NO_API virtual ~UEIK_CreateSession_AsyncFunction();


#define FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_CreateSession_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_CreateSession_AsyncFunction(UEIK_CreateSession_AsyncFunction&&); \
	NO_API UEIK_CreateSession_AsyncFunction(const UEIK_CreateSession_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_CreateSession_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_CreateSession_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_CreateSession_AsyncFunction) \
	NO_API virtual ~UEIK_CreateSession_AsyncFunction();


#define FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_21_PROLOG
#define FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_SPARSE_DATA \
	FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_RPC_WRAPPERS \
	FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_ACCESSORS \
	FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_INCLASS \
	FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_SPARSE_DATA \
	FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_ACCESSORS \
	FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_INCLASS_NO_PURE_DECLS \
	FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_CreateSession_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateSession_AsyncFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
