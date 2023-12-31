// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "EOSGameInstance.generated.h"

/**
 *
 */

UENUM(BlueprintType)
enum PlayerType
{
	Deva,
	Shakti
};

class FOnlineSessionSearch;
namespace EOnJoinSessionCompleteResult { enum Type; }

UCLASS()
class CHAKRA_CLASH_API UEOSGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UEOSGameInstance();

	virtual void Init() override;

	void Login();
	void LoginWith_AccountPortal();
	void OnLoginComplete(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error);

	UFUNCTION(BlueprintCallable)
	void CreateSession();
	void OnCreateSessionComplete(FName SessionName, bool bWasSuccessful);

	UFUNCTION(BlueprintCallable)
	void DestroySession();
	void OnDestroySessionComplete(FName SessionName, bool bWasSuccessful);

	UFUNCTION(BlueprintCallable)
	void FindSession();
	void OnFindSessionComplete(bool bWasSuccessful);
	TSharedPtr<FOnlineSessionSearch> SearchSettings;
	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);

	UFUNCTION(BlueprintCallable)
	void GetAllFriends();
	void OnGetAllFriendsComplete(int32 LocalUserNum, bool bWasSuccessful, const FString& ListName, const FString& ErrorStr);

	UFUNCTION(BlueprintCallable)
	void UpdateSelectedPlayer(PlayerType Selected);


protected:
	class IOnlineSubsystem* OnlineSubsystem;

	bool bIsLoggedIn;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)	
	TEnumAsByte<PlayerType> SelectedPlayer;
	
};
