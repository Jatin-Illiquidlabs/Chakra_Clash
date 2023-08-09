// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Login/EIK_Logout_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Logout_AsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Logout_AsyncFunction();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Logout_AsyncFunction_NoRegister();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Logout_Delegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Logout_Delegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Logout_Delegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_Logout_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Logout_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "Logout_Delegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Logout_Delegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Logout_Delegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Logout_Delegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Logout_Delegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UEIK_Logout_AsyncFunction::execLogoutUsingEIK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEIK_Logout_AsyncFunction**)Z_Param__Result=UEIK_Logout_AsyncFunction::LogoutUsingEIK();
		P_NATIVE_END;
	}
	void UEIK_Logout_AsyncFunction::StaticRegisterNativesUEIK_Logout_AsyncFunction()
	{
		UClass* Class = UEIK_Logout_AsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LogoutUsingEIK", &UEIK_Logout_AsyncFunction::execLogoutUsingEIK },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_Logout_AsyncFunction_LogoutUsingEIK_Statics
	{
		struct EIK_Logout_AsyncFunction_eventLogoutUsingEIK_Parms
		{
			UEIK_Logout_AsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Logout_AsyncFunction_LogoutUsingEIK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_Logout_AsyncFunction_eventLogoutUsingEIK_Parms, ReturnValue), Z_Construct_UClass_UEIK_Logout_AsyncFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Logout_AsyncFunction_LogoutUsingEIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Logout_AsyncFunction_LogoutUsingEIK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Logout_AsyncFunction_LogoutUsingEIK_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Login" },
		{ "Comment", "/*\n\x09This C++ method logs out in a user to an online subsystem using the selected method and sets up a callback function to handle the login response.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/\n\x09*/" },
		{ "DisplayName", "Logout Using EIK" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_Logout_AsyncFunction.h" },
		{ "ToolTip", "This C++ method logs out in a user to an online subsystem using the selected method and sets up a callback function to handle the login response.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Logout_AsyncFunction_LogoutUsingEIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Logout_AsyncFunction, nullptr, "LogoutUsingEIK", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_Logout_AsyncFunction_LogoutUsingEIK_Statics::EIK_Logout_AsyncFunction_eventLogoutUsingEIK_Parms), Z_Construct_UFunction_UEIK_Logout_AsyncFunction_LogoutUsingEIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Logout_AsyncFunction_LogoutUsingEIK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_Logout_AsyncFunction_LogoutUsingEIK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Logout_AsyncFunction_LogoutUsingEIK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_Logout_AsyncFunction_LogoutUsingEIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Logout_AsyncFunction_LogoutUsingEIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Logout_AsyncFunction);
	UClass* Z_Construct_UClass_UEIK_Logout_AsyncFunction_NoRegister()
	{
		return UEIK_Logout_AsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Logout_AsyncFunction_LogoutUsingEIK, "LogoutUsingEIK" }, // 550969655
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AsyncFunctions/Login/EIK_Logout_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_Logout_AsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_Logout_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIK_Logout_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Logout_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::NewProp_OnSuccess_MetaData)) }; // 3267579129
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::NewProp_OnFail_MetaData[] = {
		{ "DisplayName", "Failure" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_Logout_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIK_Logout_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_Logout_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::NewProp_OnFail_MetaData)) }; // 3267579129
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Logout_AsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::ClassParams = {
		&UEIK_Logout_AsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEIK_Logout_AsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UEIK_Logout_AsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Logout_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_Logout_AsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_Logout_AsyncFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Logout_AsyncFunction>()
	{
		return UEIK_Logout_AsyncFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Logout_AsyncFunction);
	UEIK_Logout_AsyncFunction::~UEIK_Logout_AsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Logout_AsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Logout_AsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Logout_AsyncFunction, UEIK_Logout_AsyncFunction::StaticClass, TEXT("UEIK_Logout_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_Logout_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Logout_AsyncFunction), 1871303315U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Logout_AsyncFunction_h_2476579413(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Logout_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Projects_Chakra_Clash_Plugins_EOSIntegrationKit51_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Logout_AsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
