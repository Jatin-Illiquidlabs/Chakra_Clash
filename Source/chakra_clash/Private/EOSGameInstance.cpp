// Fill out your copyright notice in the Description page of Project Settings.


#include "EOSGameInstance.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "Interfaces/OnlineFriendsInterface.h"
#include <Kismet/GameplayStatics.h>
#include "Engine.h"

const FName DevaSessionName = FName("Deva Session");
const FName ShaktiSessionName = FName("Shakti Session");

UEOSGameInstance::UEOSGameInstance()
{
	bIsLoggedIn = false;
}

void UEOSGameInstance::Init()
{
	Super::Init();

	OnlineSubsystem = IOnlineSubsystem::Get();

	Login();
}

void UEOSGameInstance::Login()
{
	if (OnlineSubsystem)
	{
		if (IOnlineIdentityPtr Identity = OnlineSubsystem->GetIdentityInterface())
		{
			FOnlineAccountCredentials Credentials;
			Credentials.Id = FString();
			Credentials.Token = FString();
			//Credentials.Type = FString("accountportal");
			Credentials.Type = FString("accountportal");

			Identity->OnLoginCompleteDelegates->AddUObject(this, &UEOSGameInstance::OnLoginComplete);
			Identity->Login(0, Credentials);
		}
	}
}

void UEOSGameInstance::OnLoginComplete(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error)
{
	UE_LOG(LogTemp, Warning, TEXT("Success: %d"), bWasSuccessful);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::FString("Login Success: %d"), bWasSuccessful);


	bIsLoggedIn = true;

	if (OnlineSubsystem)
	{
		if (IOnlineIdentityPtr Identity = OnlineSubsystem->GetIdentityInterface())
		{
			Identity->ClearOnLoginCompleteDelegates(0, this);
		}
	}
}

void UEOSGameInstance::CreateSession()
{
	if (bIsLoggedIn)
	{
		if (OnlineSubsystem)
		{
			if (IOnlineSessionPtr SessionPtr = OnlineSubsystem->GetSessionInterface())
			{
				FOnlineSessionSettings SessionSettings;
				SessionSettings.bIsDedicated = false;
				SessionSettings.bShouldAdvertise = true;
				SessionSettings.bIsLANMatch = false;
				SessionSettings.NumPublicConnections = 2;
				SessionSettings.bAllowJoinInProgress = true;
				SessionSettings.bAllowJoinViaPresence = true;
				SessionSettings.bUsesPresence = true;
				SessionSettings.bUseLobbiesIfAvailable = true;

				SessionSettings.Set(SEARCH_KEYWORDS, FString("TestLobby"), EOnlineDataAdvertisementType::ViaOnlineService);

				SessionPtr->OnCreateSessionCompleteDelegates.AddUObject(this, &UEOSGameInstance::OnCreateSessionComplete);

				switch (SelectedPlayer)	
				{
				case Deva:
					SessionPtr->CreateSession(0, DevaSessionName, SessionSettings);
					break;
				case Shakti:
					SessionPtr->CreateSession(0, ShaktiSessionName, SessionSettings);
					break;
				default:
					break;
				}
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot Create Session, Not Logged In"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::FString("Cannot Create Session, Not Logged In"));
	}
}

void UEOSGameInstance::OnCreateSessionComplete(FName SessionName, bool bWasSuccessful)
{
	UE_LOG(LogTemp, Warning, TEXT("Create Session Success: %d"), bWasSuccessful);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::FString(TEXT("Create Session Success: %d"), bWasSuccessful));


	if (OnlineSubsystem)
	{
		if (IOnlineSessionPtr SessionPtr = OnlineSubsystem->GetSessionInterface())
		{
			SessionPtr->ClearOnCreateSessionCompleteDelegates(this);
			GetWorld()->ServerTravel(FString("fight_lvl2?listen"), false);
		}
	}
}

void UEOSGameInstance::DestroySession()
{
	if (bIsLoggedIn)
	{
		if (OnlineSubsystem)
		{
			if (IOnlineSessionPtr SessionPtr = OnlineSubsystem->GetSessionInterface())
			{
				SessionPtr->OnDestroySessionCompleteDelegates.AddUObject(this, &UEOSGameInstance::OnDestroySessionComplete);
				switch (SelectedPlayer)
				{
				case Deva:
					SessionPtr->DestroySession(DevaSessionName);
					break;
				case Shakti:
					SessionPtr->DestroySession(ShaktiSessionName);

					break;
				default:
					break;
				}
			}
		}
	}

}

void UEOSGameInstance::OnDestroySessionComplete(FName SessionName, bool bWasSuccessful)
{
	if (OnlineSubsystem)
	{
		if (IOnlineSessionPtr SessionPtr = OnlineSubsystem->GetSessionInterface())
		{

		}
	}
}

void UEOSGameInstance::FindSession()
{
	if (bIsLoggedIn)
	{
		if (OnlineSubsystem)
		{
			if (IOnlineSessionPtr SessionPtr = OnlineSubsystem->GetSessionInterface())
			{
				SearchSettings = MakeShareable(new FOnlineSessionSearch());
				SearchSettings->MaxSearchResults = 5000;
				SearchSettings->QuerySettings.Set(SEARCH_KEYWORDS, FString("TestLobby"), EOnlineComparisonOp::Equals);
				SearchSettings->QuerySettings.Set(SEARCH_LOBBIES, true, EOnlineComparisonOp::Equals);


				SessionPtr->OnFindSessionsCompleteDelegates.AddUObject(this, &UEOSGameInstance::OnFindSessionComplete);
				SessionPtr->FindSessions(0, SearchSettings.ToSharedRef());
			}
		}
	}
}

void UEOSGameInstance::OnFindSessionComplete(bool bWasSuccessful)
{
	UE_LOG(LogTemp, Warning, TEXT("Success: %d"), bWasSuccessful);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::FString("Success: %d"), bWasSuccessful);


	if (bWasSuccessful)
	{
		UE_LOG(LogTemp, Warning, TEXT("Found %d Lobbies"), SearchSettings->SearchResults.Num());
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::FString(TEXT("Found %d Lobbies"), SearchSettings->SearchResults.Num()));


		if (OnlineSubsystem)
		{
			if (IOnlineSessionPtr SessionPtr = OnlineSubsystem->GetSessionInterface())
			{
				if (SearchSettings->SearchResults.Num())
				{
					for (int i = 0; i < SearchSettings->MaxSearchResults; i++)
					{
						if (SearchSettings->SearchResults[i].Session.NumOpenPublicConnections == 1)
						{
							SessionPtr->OnJoinSessionCompleteDelegates.AddUObject(this, &UEOSGameInstance::OnJoinSessionComplete);
							switch (SelectedPlayer)
							{
							case Deva:
								SessionPtr->JoinSession(0, DevaSessionName, SearchSettings->SearchResults[i]);
								break;
							case Shakti:
								SessionPtr->JoinSession(0, ShaktiSessionName, SearchSettings->SearchResults[i]);
								break;
							default:
								break;
							}

							break;
						}
					}
				}
			}
		}
	}

	if (OnlineSubsystem)
	{
		if (IOnlineSessionPtr SessionPtr = OnlineSubsystem->GetSessionInterface())
		{
			SessionPtr->ClearOnFindSessionsCompleteDelegates(this);
		}
	}
}

void UEOSGameInstance::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	if (OnlineSubsystem)
	{
		if (IOnlineSessionPtr SessionPtr = OnlineSubsystem->GetSessionInterface())
		{
			FString ConnectionInfo = FString();
			SessionPtr->GetResolvedConnectString(SessionName, ConnectionInfo);

			if (!ConnectionInfo.IsEmpty())
			{
				if (APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0))
				{
					PC->ClientTravel(ConnectionInfo, ETravelType::TRAVEL_Absolute);
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("plAYER CONTROLLER ERROR"));
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::FString(TEXT("plAYER CONTROLLER ERROR")));
				}
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("CONNECTION INFO IS EMPTY"));
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::FString(TEXT("CONNECTION INFO IS EMPTY")));
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("UNABLE TO FIND SESSION INTERFACE"));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::FString(TEXT("UNABLE TO FIND SESSION INTERFACE")));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("NO ONLINE SUBSYSTEM"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::FString(TEXT("NO ONLINE SUBSYSTEM")));
	}

}

void UEOSGameInstance::GetAllFriends()
{
	if (bIsLoggedIn)
	{
		if (OnlineSubsystem)
		{
			if (IOnlineFriendsPtr FriendsPtr = OnlineSubsystem->GetFriendsInterface())
			{
				FriendsPtr->ReadFriendsList(0, FString(""), FOnReadFriendsListComplete::CreateUObject(this, &UEOSGameInstance::OnGetAllFriendsComplete));
			}
		}
	}
}

void UEOSGameInstance::OnGetAllFriendsComplete(int32 LocalUserNum, bool bWasSuccessful, const FString& ListName, const FString& ErrorStr)
{
	if (bWasSuccessful)
	{
		if (OnlineSubsystem)
		{
			if (IOnlineFriendsPtr FriendsPtr = OnlineSubsystem->GetFriendsInterface())
			{
				TArray<TSharedRef<FOnlineFriend>> FriendsList; 

				if (FriendsPtr->GetFriendsList(0, ListName, FriendsList))
				{
					for (TSharedRef<FOnlineFriend> Friends : FriendsList)
					{
						FString FriendName = Friends.Get().GetRealName();

						UE_LOG(LogTemp, Warning, TEXT("Friend: %s"), *FriendName);

					}
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("Failed At Getting FriendsList"));
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::FString("Failed At Getting FriendsList"));

				}
			}
		}

		UE_LOG(LogTemp, Warning, TEXT("Was Successful At Getting FriendsList"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::FString("Was Successful At Getting FriendsList"));

	}
}

void UEOSGameInstance::UpdateSelectedPlayer(PlayerType Selected)
{
	SelectedPlayer = Selected;
}
