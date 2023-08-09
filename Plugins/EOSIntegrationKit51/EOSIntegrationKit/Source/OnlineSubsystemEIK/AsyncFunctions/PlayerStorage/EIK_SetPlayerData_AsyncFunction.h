﻿//Copyright (c) 2023 Betide Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EIK_SetPlayerData_AsyncFunction.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSetDataResult);

UCLASS()
class ONLINESUBSYSTEMEIK_API UEIK_SetPlayerData_AsyncFunction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FSetDataResult OnSuccess;
	
	UPROPERTY(BlueprintAssignable)
	FSetDataResult OnFail;

	bool bDelegateCalled = false;

	FString FileName;
	USaveGame* SavedGame;
	/*
	This C++ method updates the player data in the online subsystem using the selected method and sets up a callback function to handle the response.
	Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/playerdata/
	For Input Parameters, please refer to the documentation link above.
	*/
	UFUNCTION(BlueprintCallable, DisplayName="Set EIK Player Data", meta = (BlueprintInternalUseOnly = "true"))
	static UEIK_SetPlayerData_AsyncFunction* SetPlayerData(FString FileName, USaveGame* SavedGame);

	virtual void Activate() override;

	void SetPlayerData();

	void OnWriteFileComplete(bool bSuccess, const FUniqueNetId& UserID, const FString& Var_FileName);

};
