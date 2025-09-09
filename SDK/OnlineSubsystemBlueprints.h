
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/OnlineSubsystemBlueprints.EMemberConnectionStatus_
/// Size: 0x01 (1 bytes)
enum class EMemberConnectionStatus_ : uint8_t
{
	EMemberConnectionStatus___Uninitialized                                          = 0,
	EMemberConnectionStatus___Disconnected                                           = 1,
	EMemberConnectionStatus___Initializing                                           = 2,
	EMemberConnectionStatus___Connected                                              = 3
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnJoinSessionCompleteResult_
/// Size: 0x01 (1 bytes)
enum class EOnJoinSessionCompleteResult_ : uint8_t
{
	EOnJoinSessionCompleteResult___Success                                           = 0,
	EOnJoinSessionCompleteResult___SessionIsFull                                     = 1,
	EOnJoinSessionCompleteResult___SessionDoesNotExist                               = 2,
	EOnJoinSessionCompleteResult___CouldNotRetrieveAddress                           = 3,
	EOnJoinSessionCompleteResult___AlreadyInSession                                  = 4,
	EOnJoinSessionCompleteResult___UnknownError                                      = 5
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineDataAdvertisementType_
/// Size: 0x01 (1 bytes)
enum class EOnlineDataAdvertisementType_ : uint8_t
{
	EOnlineDataAdvertisementType___DontAdvertise                                     = 0,
	EOnlineDataAdvertisementType___ViaPingOnly                                       = 1,
	EOnlineDataAdvertisementType___ViaOnlineService                                  = 2,
	EOnlineDataAdvertisementType___ViaOnlineServiceAndPing                           = 3
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineKeyValuePairDataType_
/// Size: 0x01 (1 bytes)
enum class EOnlineKeyValuePairDataType_ : uint8_t
{
	EOnlineKeyValuePairDataType___Empty                                              = 0,
	EOnlineKeyValuePairDataType___Int32                                              = 1,
	EOnlineKeyValuePairDataType___UInt32_NotSupported                                = 2,
	EOnlineKeyValuePairDataType___Int64                                              = 3,
	EOnlineKeyValuePairDataType___UInt64_NotSupported                                = 4,
	EOnlineKeyValuePairDataType___Double_NotSupported                                = 5,
	EOnlineKeyValuePairDataType___String                                             = 6,
	EOnlineKeyValuePairDataType___Float                                              = 7,
	EOnlineKeyValuePairDataType___Blob_NotSupported                                  = 8,
	EOnlineKeyValuePairDataType___Bool                                               = 9,
	EOnlineKeyValuePairDataType___Json_NotSupported                                  = 10
};

/// Enum /Script/OnlineSubsystemBlueprints.ESessionFailure_
/// Size: 0x01 (1 bytes)
enum class ESessionFailure_ : uint8_t
{
	ESessionFailure___ServiceConnectionLost                                          = 0
};

/// Enum /Script/OnlineSubsystemBlueprints.EPartyState_
/// Size: 0x01 (1 bytes)
enum class EPartyState_ : uint8_t
{
	EPartyState___None                                                               = 0,
	EPartyState___CreatePending                                                      = 1,
	EPartyState___JoinPending                                                        = 2,
	EPartyState___RejoinPending                                                      = 3,
	EPartyState___LeavePending                                                       = 4,
	EPartyState___Active                                                             = 5,
	EPartyState___Disconnected                                                       = 6,
	EPartyState___CleanUp                                                            = 7
};

/// Enum /Script/OnlineSubsystemBlueprints.EPartySystemPermissions
/// Size: 0x01 (1 bytes)
enum class EPartySystemPermissions : uint8_t
{
	EPartySystemPermissions__Noone                                                   = 0,
	EPartySystemPermissions__Leader                                                  = 1,
	EPartySystemPermissions__Friends                                                 = 2,
	EPartySystemPermissions__Anyone                                                  = 3
};

/// Enum /Script/OnlineSubsystemBlueprints.EJoinRequestAction_
/// Size: 0x01 (1 bytes)
enum class EJoinRequestAction_ : uint8_t
{
	EJoinRequestAction___Manual                                                      = 0,
	EJoinRequestAction___AutoApprove                                                 = 1,
	EJoinRequestAction___AutoReject                                                  = 2
};

/// Enum /Script/OnlineSubsystemBlueprints.EMemberExitedReason_
/// Size: 0x01 (1 bytes)
enum class EMemberExitedReason_ : uint8_t
{
	EMemberExitedReason___Unknown                                                    = 0,
	EMemberExitedReason___Left                                                       = 1,
	EMemberExitedReason___Removed                                                    = 2,
	EMemberExitedReason___Kicked                                                     = 3
};

/// Enum /Script/OnlineSubsystemBlueprints.ECreatePartyCompletionResult_
/// Size: 0x01 (1 bytes)
enum class ECreatePartyCompletionResult_ : uint8_t
{
	ECreatePartyCompletionResult___UnknownClientFailure                              = 156,
	ECreatePartyCompletionResult___AlreadyInPartyOfSpecifiedType                     = 157,
	ECreatePartyCompletionResult___AlreadyCreatingParty                              = 158,
	ECreatePartyCompletionResult___AlreadyInParty                                    = 159,
	ECreatePartyCompletionResult___FailedToCreateMucRoom                             = 160,
	ECreatePartyCompletionResult___NoResponse                                        = 161,
	ECreatePartyCompletionResult___LoggedOut                                         = 162,
	ECreatePartyCompletionResult___NotPrimaryUser                                    = 163,
	ECreatePartyCompletionResult___UnknownInternalFailure                            = 0,
	ECreatePartyCompletionResult___Succeeded                                         = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.EUpdateConfigCompletionResult_
/// Size: 0x01 (1 bytes)
enum class EUpdateConfigCompletionResult_ : uint8_t
{
	EUpdateConfigCompletionResult___UnknownClientFailure                             = 156,
	EUpdateConfigCompletionResult___UnknownParty                                     = 157,
	EUpdateConfigCompletionResult___LocalMemberNotMember                             = 158,
	EUpdateConfigCompletionResult___LocalMemberNotLeader                             = 159,
	EUpdateConfigCompletionResult___RemoteMemberNotMember                            = 160,
	EUpdateConfigCompletionResult___MessagingFailure                                 = 161,
	EUpdateConfigCompletionResult___NoResponse                                       = 162,
	EUpdateConfigCompletionResult___UnknownInternalFailure                           = 0,
	EUpdateConfigCompletionResult___Succeeded                                        = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.EJoinPartyCompletionResult_
/// Size: 0x01 (1 bytes)
enum class EJoinPartyCompletionResult_ : uint8_t
{
	EJoinPartyCompletionResult___UnknownClientFailure                                = 156,
	EJoinPartyCompletionResult___BadBuild                                            = 157,
	EJoinPartyCompletionResult___InvalidAccessKey                                    = 158,
	EJoinPartyCompletionResult___AlreadyInLeadersJoiningList                         = 159,
	EJoinPartyCompletionResult___AlreadyInLeadersPartyRoster                         = 160,
	EJoinPartyCompletionResult___NoSpace                                             = 161,
	EJoinPartyCompletionResult___NotApproved                                         = 162,
	EJoinPartyCompletionResult___RequesteeNotMember                                  = 163,
	EJoinPartyCompletionResult___RequesteeNotLeader                                  = 164,
	EJoinPartyCompletionResult___NoResponse                                          = 165,
	EJoinPartyCompletionResult___LoggedOut                                           = 166,
	EJoinPartyCompletionResult___UnableToRejoin                                      = 167,
	EJoinPartyCompletionResult___IncompatiblePlatform                                = 168,
	EJoinPartyCompletionResult___AlreadyJoiningParty                                 = 169,
	EJoinPartyCompletionResult___AlreadyInParty                                      = 170,
	EJoinPartyCompletionResult___JoinInfoInvalid                                     = 171,
	EJoinPartyCompletionResult___AlreadyInPartyOfSpecifiedType                       = 172,
	EJoinPartyCompletionResult___MessagingFailure                                    = 173,
	EJoinPartyCompletionResult___GameSpecificReason                                  = 174,
	EJoinPartyCompletionResult___UnknownInternalFailure                              = 0,
	EJoinPartyCompletionResult___Succeeded                                           = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.ELeavePartyCompletionResult_
/// Size: 0x01 (1 bytes)
enum class ELeavePartyCompletionResult_ : uint8_t
{
	ELeavePartyCompletionResult___UnknownClientFailure                               = 156,
	ELeavePartyCompletionResult___NoResponse                                         = 157,
	ELeavePartyCompletionResult___LoggedOut                                          = 158,
	ELeavePartyCompletionResult___UnknownParty                                       = 159,
	ELeavePartyCompletionResult___LeavePending                                       = 160,
	ELeavePartyCompletionResult___UnknownLocalUser                                   = 161,
	ELeavePartyCompletionResult___NotMember                                          = 162,
	ELeavePartyCompletionResult___MessagingFailure                                   = 163,
	ELeavePartyCompletionResult___UnknownTransportFailure                            = 164,
	ELeavePartyCompletionResult___UnknownInternalFailure                             = 0,
	ELeavePartyCompletionResult___Succeeded                                          = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.ESendPartyInvitationCompletionResult_
/// Size: 0x01 (1 bytes)
enum class ESendPartyInvitationCompletionResult_ : uint8_t
{
	ESendPartyInvitationCompletionResult___NotLoggedIn                               = 156,
	ESendPartyInvitationCompletionResult___InvitePending                             = 157,
	ESendPartyInvitationCompletionResult___AlreadyInParty                            = 158,
	ESendPartyInvitationCompletionResult___PartyFull                                 = 159,
	ESendPartyInvitationCompletionResult___NoPermission                              = 160,
	ESendPartyInvitationCompletionResult___RateLimited                               = 161,
	ESendPartyInvitationCompletionResult___UnknownInternalFailure                    = 0,
	ESendPartyInvitationCompletionResult___Succeeded                                 = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.EKickMemberCompletionResult_
/// Size: 0x01 (1 bytes)
enum class EKickMemberCompletionResult_ : uint8_t
{
	EKickMemberCompletionResult___UnknownClientFailure                               = 156,
	EKickMemberCompletionResult___UnknownParty                                       = 157,
	EKickMemberCompletionResult___LocalMemberNotMember                               = 158,
	EKickMemberCompletionResult___LocalMemberNotLeader                               = 159,
	EKickMemberCompletionResult___RemoteMemberNotMember                              = 160,
	EKickMemberCompletionResult___MessagingFailure                                   = 161,
	EKickMemberCompletionResult___NoResponse                                         = 162,
	EKickMemberCompletionResult___LoggedOut                                          = 163,
	EKickMemberCompletionResult___UnknownInternalFailure                             = 0,
	EKickMemberCompletionResult___Succeeded                                          = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.EPromoteMemberCompletionResult_
/// Size: 0x01 (1 bytes)
enum class EPromoteMemberCompletionResult_ : uint8_t
{
	EPromoteMemberCompletionResult___UnknownClientFailure                            = 156,
	EPromoteMemberCompletionResult___UnknownServiceFailure                           = 157,
	EPromoteMemberCompletionResult___UnknownParty                                    = 158,
	EPromoteMemberCompletionResult___LocalMemberNotMember                            = 159,
	EPromoteMemberCompletionResult___LocalMemberNotLeader                            = 160,
	EPromoteMemberCompletionResult___PromotionAlreadyPending                         = 161,
	EPromoteMemberCompletionResult___TargetIsSelf                                    = 162,
	EPromoteMemberCompletionResult___TargetNotMember                                 = 163,
	EPromoteMemberCompletionResult___MessagingFailure                                = 164,
	EPromoteMemberCompletionResult___NoResponse                                      = 165,
	EPromoteMemberCompletionResult___LoggedOut                                       = 166,
	EPromoteMemberCompletionResult___UnknownInternalFailure                          = 0,
	EPromoteMemberCompletionResult___Succeeded                                       = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineLoginStatus
/// Size: 0x01 (1 bytes)
enum class EOnlineLoginStatus : uint8_t
{
	EOnlineLoginStatus__NotLoggedIn                                                  = 0,
	EOnlineLoginStatus__UsingLocalProfile                                            = 1,
	EOnlineLoginStatus__LoggedIn                                                     = 2
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineUserPrivilege
/// Size: 0x01 (1 bytes)
enum class EOnlineUserPrivilege : uint8_t
{
	EOnlineUserPrivilege__CanPlay                                                    = 0,
	EOnlineUserPrivilege__CanPlayOnline                                              = 1,
	EOnlineUserPrivilege__CanCommunicateOnline                                       = 2,
	EOnlineUserPrivilege__CanUseUserGeneratedContent                                 = 3,
	EOnlineUserPrivilege__CanUserCrossPlay                                           = 4
};

/// Enum /Script/OnlineSubsystemBlueprints.FOnlineUserPresenceStatusState
/// Size: 0x01 (1 bytes)
enum class FOnlineUserPresenceStatusState : uint8_t
{
	FOnlineUserPresenceStatusState__Online                                           = 0,
	FOnlineUserPresenceStatusState__Offline                                          = 1,
	FOnlineUserPresenceStatusState__Away                                             = 2,
	FOnlineUserPresenceStatusState__ExtendedAway                                     = 3,
	FOnlineUserPresenceStatusState__DoNotDisturb                                     = 4,
	FOnlineUserPresenceStatusState__Chat                                             = 5
};

/// Enum /Script/OnlineSubsystemBlueprints.EPlatformMessageType_
/// Size: 0x01 (1 bytes)
enum class EPlatformMessageType_ : uint8_t
{
	EPlatformMessageType___EmptyStore                                                = 0,
	EPlatformMessageType___ChatRestricted                                            = 1,
	EPlatformMessageType___UGCRestricted                                             = 2
};

/// Enum /Script/OnlineSubsystemBlueprints.EInviteStatus_
/// Size: 0x01 (1 bytes)
enum class EInviteStatus_ : uint8_t
{
	EInviteStatus___Unknown                                                          = 0,
	EInviteStatus___Accepted                                                         = 1,
	EInviteStatus___PendingInbound                                                   = 2,
	EInviteStatus___PendingOutbound                                                  = 3,
	EInviteStatus___Blocked                                                          = 4,
	EInviteStatus___Suggested                                                        = 5
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineCachedResult_
/// Size: 0x01 (1 bytes)
enum class EOnlineCachedResult_ : uint8_t
{
	EOnlineCachedResult___Success                                                    = 0,
	EOnlineCachedResult___NotFound                                                   = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineLobbySearchQueryFilterComparator_
/// Size: 0x01 (1 bytes)
enum class EOnlineLobbySearchQueryFilterComparator_ : uint8_t
{
	EOnlineLobbySearchQueryFilterComparator___Equal                                  = 0,
	EOnlineLobbySearchQueryFilterComparator___NotEqual                               = 1,
	EOnlineLobbySearchQueryFilterComparator___LessThan                               = 2,
	EOnlineLobbySearchQueryFilterComparator___LessThanOrEqual                        = 3,
	EOnlineLobbySearchQueryFilterComparator___GreaterThan                            = 4,
	EOnlineLobbySearchQueryFilterComparator___GreaterThanOrEqual                     = 5
};

/// Enum /Script/OnlineSubsystemBlueprints.EInvitationResponse_
/// Size: 0x01 (1 bytes)
enum class EInvitationResponse_ : uint8_t
{
	EInvitationResponse___UnknownFailure                                             = 0,
	EInvitationResponse___BadBuild                                                   = 1,
	EInvitationResponse___Rejected                                                   = 2,
	EInvitationResponse___Accepted                                                   = 3
};

/// Enum /Script/OnlineSubsystemBlueprints.ERejectPartyInvitationCompletionResult_
/// Size: 0x01 (1 bytes)
enum class ERejectPartyInvitationCompletionResult_ : uint8_t
{
	ERejectPartyInvitationCompletionResult___NotLoggedIn                             = 156,
	ERejectPartyInvitationCompletionResult___InvitePending                           = 157,
	ERejectPartyInvitationCompletionResult___AlreadyInParty                          = 158,
	ERejectPartyInvitationCompletionResult___PartyFull                               = 159,
	ERejectPartyInvitationCompletionResult___NoPermission                            = 160,
	ERejectPartyInvitationCompletionResult___UnknownInternalFailure                  = 0,
	ERejectPartyInvitationCompletionResult___Succeeded                               = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.EAcceptPartyInvitationCompletionResult_
/// Size: 0x01 (1 bytes)
enum class EAcceptPartyInvitationCompletionResult_ : uint8_t
{
	EAcceptPartyInvitationCompletionResult___NotLoggedIn                             = 156,
	EAcceptPartyInvitationCompletionResult___InvitePending                           = 157,
	EAcceptPartyInvitationCompletionResult___AlreadyInParty                          = 158,
	EAcceptPartyInvitationCompletionResult___PartyFull                               = 159,
	EAcceptPartyInvitationCompletionResult___NoPermission                            = 160,
	EAcceptPartyInvitationCompletionResult___UnknownInternalFailure                  = 0,
	EAcceptPartyInvitationCompletionResult___Succeeded                               = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.ERequestPartyInvitationCompletionResult_
/// Size: 0x01 (1 bytes)
enum class ERequestPartyInvitationCompletionResult_ : uint8_t
{
	ERequestPartyInvitationCompletionResult___NotLoggedIn                            = 156,
	ERequestPartyInvitationCompletionResult___InvitePending                          = 157,
	ERequestPartyInvitationCompletionResult___AlreadyInParty                         = 158,
	ERequestPartyInvitationCompletionResult___PartyFull                              = 159,
	ERequestPartyInvitationCompletionResult___NoPermission                           = 160,
	ERequestPartyInvitationCompletionResult___UnknownInternalFailure                 = 0,
	ERequestPartyInvitationCompletionResult___Succeeded                              = 1
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineComparisonOp_
/// Size: 0x01 (1 bytes)
enum class EOnlineComparisonOp_ : uint8_t
{
	EOnlineComparisonOp___Equals                                                     = 0,
	EOnlineComparisonOp___NotEquals                                                  = 1,
	EOnlineComparisonOp___GreaterThan                                                = 2,
	EOnlineComparisonOp___GreaterThanEquals                                          = 3,
	EOnlineComparisonOp___LessThan                                                   = 4,
	EOnlineComparisonOp___LessThanEquals                                             = 5,
	EOnlineComparisonOp___Near                                                       = 6,
	EOnlineComparisonOp___In                                                         = 7,
	EOnlineComparisonOp___NotIn                                                      = 8
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineAsyncTaskState_
/// Size: 0x01 (1 bytes)
enum class EOnlineAsyncTaskState_ : uint8_t
{
	EOnlineAsyncTaskState___NotStarted                                               = 0,
	EOnlineAsyncTaskState___InProgress                                               = 1,
	EOnlineAsyncTaskState___Done                                                     = 2,
	EOnlineAsyncTaskState___Failed                                                   = 3
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineSessionState_
/// Size: 0x01 (1 bytes)
enum class EOnlineSessionState_ : uint8_t
{
	EOnlineSessionState___NoSession                                                  = 0,
	EOnlineSessionState___Creating                                                   = 1,
	EOnlineSessionState___Pending                                                    = 2,
	EOnlineSessionState___Starting                                                   = 3,
	EOnlineSessionState___InProgress                                                 = 4,
	EOnlineSessionState___Ending                                                     = 5,
	EOnlineSessionState___Ended                                                      = 6,
	EOnlineSessionState___Destroying                                                 = 7
};

/// Enum /Script/OnlineSubsystemBlueprints.EOnlineStatModificationType_
/// Size: 0x01 (1 bytes)
enum class EOnlineStatModificationType_ : uint8_t
{
	EOnlineStatModificationType___Unknown                                            = 0,
	EOnlineStatModificationType___Sum                                                = 1,
	EOnlineStatModificationType___Set                                                = 2,
	EOnlineStatModificationType___Largest                                            = 3,
	EOnlineStatModificationType___Smallest                                           = 4
};

/// Class /Script/OnlineSubsystemBlueprints.ExternalUIFlowHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UExternalUIFlowHandler : public UInterface
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.ExternalUIFlowHandler.OnLoginFlowUIRequired
	// bool OnLoginFlowUIRequired(FString RequestedURL, class UOnlineExternalUISubsystem* ExternalUIContext, int32_t RequestID); // [0x83c590] Native|Event|Public|BlueprintEvent 
	// Function /Script/OnlineSubsystemBlueprints.ExternalUIFlowHandler.OnCreateAccountFlowUIRequired
	// bool OnCreateAccountFlowUIRequired(FString RequestedURL, class UOnlineExternalUISubsystem* ExternalUIContext, int32_t RequestID); // [0x83c460] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserRef
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UOnlineUserRef : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserRef.SetUserLocalAttribute
	// void SetUserLocalAttribute(FString Key, FString Value, bool& Success);                                                   // [0x867140] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserRef.GetUserId
	// FUniqueNetIdRepl GetUserId();                                                                                            // [0x8658d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserRef.GetUserAttribute
	// FString GetUserAttribute(FString Key, bool& Found);                                                                      // [0x865570] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserRef.GetRealName
	// FString GetRealName();                                                                                                   // [0x8654f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserRef.GetDisplayName
	// FString GetDisplayName();                                                                                                // [0x864d80] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendRef
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UOnlineFriendRef : public UOnlineUserRef
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0048   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendRef.GetPresence
	// FOnlineUserPresenceData GetPresence();                                                                                   // [0x83bc00] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendRef.GetInviteStatus
	// EInviteStatus_ GetInviteStatus();                                                                                        // [0x83ba30] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystem
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineAchievementsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x70];                                      // 0x0030   (0x0070)  MISSED
	SDK_UNDEFINED(16,334) /* FMulticastInlineDelegate */ __um(OnAchievementUnlocked);                              // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x83bf80] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystem.GetCachedAchievements
	// EOnlineCachedResult_ GetCachedAchievements(FUniqueNetIdRepl PlayerId, TArray<FOnlineAchievementBP>& OutAchievements);    // [0x83b880] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystem.GetCachedAchievementDescription
	// EOnlineCachedResult_ GetCachedAchievementDescription(FString AchievementId, FOnlineAchievementDescBP& OutAchievementDesc); // [0x83b670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystem.GetCachedAchievement
	// EOnlineCachedResult_ GetCachedAchievement(FUniqueNetIdRepl PlayerId, FString AchievementId, FOnlineAchievementBP& OutAchievement); // [0x83b450] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystemQueryAchievements
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UOnlineAchievementsSubsystemQueryAchievements : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,335) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,336) /* FMulticastInlineDelegate */ __um(OnQueryAchievementsComplete);                        // 0x0040   (0x0010)  
	class UOnlineAchievementsSubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__PlayerId;                                          // 0x0068   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystemQueryAchievements.QueryAchievements
	// class UOnlineAchievementsSubsystemQueryAchievements* QueryAchievements(class UOnlineAchievementsSubsystem* Subsystem, FUniqueNetIdRepl PlayerId); // [0x83c830] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystemQueryAchievementDescriptions
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UOnlineAchievementsSubsystemQueryAchievementDescriptions : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,337) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,338) /* FMulticastInlineDelegate */ __um(OnQueryAchievementsComplete);                        // 0x0040   (0x0010)  
	class UOnlineAchievementsSubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__PlayerId;                                          // 0x0068   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineAchievementsSubsystemQueryAchievementDescriptions.QueryAchievementDescriptions
	// class UOnlineAchievementsSubsystemQueryAchievementDescriptions* QueryAchievementDescriptions(class UOnlineAchievementsSubsystem* Subsystem, FUniqueNetIdRepl PlayerId); // [0x83c6c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineAvatarSubsystem
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineAvatarSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineAvatarSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x83bfb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineAvatarSubsystemGetAvatar
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UOnlineAvatarSubsystemGetAvatar : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,339) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,340) /* FMulticastInlineDelegate */ __um(OnGetAvatarComplete);                                // 0x0040   (0x0010)  
	class UOnlineAvatarSubsystem*                      __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	FUniqueNetIdRepl                                   __Store__TargetUserId;                                      // 0x0090   (0x0028)  
	class UTexture2D*                                  __Store__DefaultTexture;                                    // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineAvatarSubsystemGetAvatar.GetAvatar
	// class UOnlineAvatarSubsystemGetAvatar* GetAvatar(class UOnlineAvatarSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FUniqueNetIdRepl TargetUserId, class UTexture2D* DefaultTexture); // [0x83b210] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem
/// Size: 0x0158 (344 bytes) (0x000030 - 0x000158) align 8 MaxSize: 0x0158
class UOnlineChatSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0xA8];                                      // 0x0030   (0x00A8)  MISSED
	SDK_UNDEFINED(16,341) /* FMulticastInlineDelegate */ __um(OnChatRoomCreated);                                  // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,342) /* FMulticastInlineDelegate */ __um(OnChatRoomConfigured);                               // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,343) /* FMulticastInlineDelegate */ __um(OnChatRoomJoinPublic);                               // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,344) /* FMulticastInlineDelegate */ __um(OnChatRoomJoinPrivate);                              // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,345) /* FMulticastInlineDelegate */ __um(OnChatRoomExit);                                     // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,346) /* FMulticastInlineDelegate */ __um(OnChatRoomMemberJoin);                               // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,347) /* FMulticastInlineDelegate */ __um(OnChatRoomMemberExit);                               // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,348) /* FMulticastInlineDelegate */ __um(OnChatRoomMemberUpdate);                             // 0x0148   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.SendRoomChat
	// bool SendRoomChat(FUniqueNetIdRepl UserId, FString RoomId, FString MsgBody);                                             // [0x83cee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.SendPrivateChat
	// bool SendPrivateChat(FUniqueNetIdRepl UserId, FUniqueNetIdRepl RecipientId, FString MsgBody);                            // [0x83cc70] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x83bfe0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.IsChatAllowed
	// bool IsChatAllowed(FUniqueNetIdRepl UserId, FUniqueNetIdRepl RecipientId);                                               // [0x83bdb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.GetJoinedRooms
	// void GetJoinedRooms(FUniqueNetIdRepl UserId, TArray<FString>& OutRooms);                                                 // [0x83ba60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.ExitRoom
	// bool ExitRoom(FUniqueNetIdRepl UserId, FString RoomId);                                                                  // [0x83b050] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineChatSubsystem.DumpChatState
	// void DumpChatState();                                                                                                    // [0x83b030] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineEntitlementsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x70];                                      // 0x0030   (0x0070)  MISSED
	SDK_UNDEFINED(16,349) /* FMulticastInlineDelegate */ __um(OnQueryEntitlementsComplete);                        // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem.QueryEntitlements
	// bool QueryEntitlements(FUniqueNetIdRepl UserId, FString Namespace, FPagedQueryBP Page);                                  // [0x83c9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x83c010] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineEventsSubsystem
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineEventsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineEventsSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x83c040] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/OnlineSubsystemBlueprints.ExternalUIFlowHandlerRegistration
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FExternalUIFlowHandlerRegistration
{ 
	class UObject*                                     Interface;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem
/// Size: 0x0168 (360 bytes) (0x000030 - 0x000168) align 8 MaxSize: 0x0168
class UOnlineExternalUISubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x70];                                      // 0x0030   (0x0070)  MISSED
	TArray<FExternalUIFlowHandlerRegistration>         FlowHandlers;                                               // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData01_6[0xA8];                                      // 0x00B0   (0x00A8)  MISSED
	SDK_UNDEFINED(16,350) /* FMulticastInlineDelegate */ __um(OnExternalUIChange);                                 // 0x0158   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowPlatformMessageBox
	// bool ShowPlatformMessageBox(FUniqueNetIdRepl UserId, EPlatformMessageType_ MessageType);                                 // [0x83d790] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowLeaderboardUI
	// bool ShowLeaderboardUI(FString LeaderboardName);                                                                         // [0x83d530] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowInviteUI
	// bool ShowInviteUI(int32_t LocalUserNum, FName SessionName);                                                              // [0x83d460] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowFriendsUI
	// bool ShowFriendsUI(int32_t LocalUserNum);                                                                                // [0x83d3c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowAchievementsUI
	// bool ShowAchievementsUI(int32_t LocalUserNum);                                                                           // [0x83d320] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ShowAccountUpgradeUI
	// bool ShowAccountUpgradeUI(FUniqueNetIdRepl UniqueId);                                                                    // [0x83d1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ReportExitInGameStoreUI
	// void ReportExitInGameStoreUI();                                                                                          // [0x83cc50] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.ReportEnterInGameStoreUI
	// void ReportEnterInGameStoreUI();                                                                                         // [0x83cc30] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.RemoveLoginFlowHandler
	// void RemoveLoginFlowHandler(TScriptInterface<Class>& Handler);                                                           // [0x83cb90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.NotifyLoginRedirectURL
	// FLoginFlowResultBP NotifyLoginRedirectURL(int32_t RequestID, FString URL);                                               // [0x83c280] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.LoginFlowComplete
	// void LoginFlowComplete(int32_t RequestID, FLoginFlowResultBP Result);                                                    // [0x83c0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x83c070] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.CloseWebURL
	// bool CloseWebURL();                                                                                                      // [0x83b000] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystem.AddLoginFlowHandler
	// void AddLoginFlowHandler(TScriptInterface<Class>& Handler);                                                              // [0x83af60] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowLoginUI
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UOnlineExternalUISubsystemShowLoginUI : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,351) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,352) /* FMulticastInlineDelegate */ __um(OnLoginUIClosed);                                    // 0x0040   (0x0010)  
	class UOnlineExternalUISubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__ControllerIndex;                                   // 0x0068   (0x0004)  
	bool                                               __Store__bShowOnlineOnly;                                   // 0x006C   (0x0001)  
	bool                                               __Store__bShowSkipButton;                                   // 0x006D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x006E   (0x0002)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowLoginUI.ShowLoginUI
	// class UOnlineExternalUISubsystemShowLoginUI* ShowLoginUI(class UOnlineExternalUISubsystem* Subsystem, int32_t ControllerIndex, bool bShowOnlineOnly, bool bShowSkipButton); // [0x83d630] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowAccountCreationUI
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UOnlineExternalUISubsystemShowAccountCreationUI : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,353) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,354) /* FMulticastInlineDelegate */ __um(OnAccountCreationUIClosed);                          // 0x0040   (0x0010)  
	class UOnlineExternalUISubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__ControllerIndex;                                   // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowAccountCreationUI.ShowAccountCreationUI
	// class UOnlineExternalUISubsystemShowAccountCreationUI* ShowAccountCreationUI(class UOnlineExternalUISubsystem* Subsystem, int32_t ControllerIndex); // [0x83d120] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.ShowWebUrlParameters
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FShowWebUrlParameters
{ 
	bool                                               Embedded;                                                   // 0x0000   (0x0001)  
	bool                                               ShowCloseButton;                                            // 0x0001   (0x0001)  
	bool                                               ShowBackground;                                             // 0x0002   (0x0001)  
	bool                                               HideCursor;                                                 // 0x0003   (0x0001)  
	bool                                               ResetCookies;                                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            OffsetX;                                                    // 0x0008   (0x0004)  
	int32_t                                            OffsetY;                                                    // 0x000C   (0x0004)  
	int32_t                                            SizeX;                                                      // 0x0010   (0x0004)  
	int32_t                                            SizeY;                                                      // 0x0014   (0x0004)  
	TArray<FString>                                    AllowedDomains;                                             // 0x0018   (0x0010)  
	FString                                            CallbackPath;                                               // 0x0028   (0x0010)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowWebURL
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineExternalUISubsystemShowWebURL : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,355) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,356) /* FMulticastInlineDelegate */ __um(OnShowWebUrlClosed);                                 // 0x0040   (0x0010)  
	class UOnlineExternalUISubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FString                                            __Store__Url;                                               // 0x0068   (0x0010)  
	FShowWebUrlParameters                              __Store__ShowParams;                                        // 0x0078   (0x0038)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowWebURL.ShowWebURL
	// class UOnlineExternalUISubsystemShowWebURL* ShowWebURL(class UOnlineExternalUISubsystem* Subsystem, FString URL, FShowWebUrlParameters ShowParams); // [0x83e040] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowProfileUI
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineExternalUISubsystemShowProfileUI : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,357) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,358) /* FMulticastInlineDelegate */ __um(OnProfileUIClosed);                                  // 0x0040   (0x0010)  
	class UOnlineExternalUISubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__Requestor;                                         // 0x0068   (0x0028)  
	FUniqueNetIdRepl                                   __Store__Requestee;                                         // 0x0090   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowProfileUI.ShowProfileUI
	// class UOnlineExternalUISubsystemShowProfileUI* ShowProfileUI(class UOnlineExternalUISubsystem* Subsystem, FUniqueNetIdRepl Requestor, FUniqueNetIdRepl Requestee); // [0x83d900] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.ShowStoreParameters
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FShowStoreParameters
{ 
	FString                                            Category;                                                   // 0x0000   (0x0010)  
	FString                                            ProductId;                                                  // 0x0010   (0x0010)  
	bool                                               AddToCart;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowStoreUI
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineExternalUISubsystemShowStoreUI : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,359) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,360) /* FMulticastInlineDelegate */ __um(OnShowStoreUIClosed);                                // 0x0040   (0x0010)  
	class UOnlineExternalUISubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FShowStoreParameters                               __Store__ShowParams;                                        // 0x0070   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowStoreUI.ShowStoreUI
	// class UOnlineExternalUISubsystemShowStoreUI* ShowStoreUI(class UOnlineExternalUISubsystem* Subsystem, int32_t LocalUserNum, FShowStoreParameters ShowParams); // [0x83de90] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineMessagePayloadData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FOnlineMessagePayloadData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/OnlineSubsystemBlueprints.ShowSendMessageParameters
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FShowSendMessageParameters
{ 
	FText                                              DisplayTitle;                                               // 0x0000   (0x0018)  
	TMap<FString, FString>                             DisplayTitle_Loc;                                           // 0x0018   (0x0050)  
	FText                                              DisplayMessage;                                             // 0x0068   (0x0018)  
	FText                                              DisplayDetails;                                             // 0x0080   (0x0018)  
	TMap<FString, FString>                             DisplayDetails_Loc;                                         // 0x0098   (0x0050)  
	FOnlineMessagePayloadData                          DataPayload;                                                // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	int32_t                                            MaxRecipients;                                              // 0x00EC   (0x0004)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowSendMessageUI
/// Size: 0x0160 (352 bytes) (0x000030 - 0x000160) align 8 MaxSize: 0x0160
class UOnlineExternalUISubsystemShowSendMessageUI : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,361) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,362) /* FMulticastInlineDelegate */ __um(OnShowSendMessageUIClosed);                          // 0x0040   (0x0010)  
	class UOnlineExternalUISubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FShowSendMessageParameters                         __Store__ShowParams;                                        // 0x0070   (0x00F0)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowSendMessageUI.ShowSendMessageUI
	// class UOnlineExternalUISubsystemShowSendMessageUI* ShowSendMessageUI(class UOnlineExternalUISubsystem* Subsystem, int32_t LocalUserNum, FShowSendMessageParameters ShowParams); // [0x83dd30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowSendMessageToUserUI
/// Size: 0x0188 (392 bytes) (0x000030 - 0x000188) align 8 MaxSize: 0x0188
class UOnlineExternalUISubsystemShowSendMessageToUserUI : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,363) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,364) /* FMulticastInlineDelegate */ __um(OnShowSendMessageUIClosed);                          // 0x0040   (0x0010)  
	class UOnlineExternalUISubsystem*                  __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FUniqueNetIdRepl                                   __Store__Recipient;                                         // 0x0070   (0x0028)  
	FShowSendMessageParameters                         __Store__ShowParams;                                        // 0x0098   (0x00F0)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowSendMessageToUserUI.ShowSendMessageToUserUI
	// class UOnlineExternalUISubsystemShowSendMessageToUserUI* ShowSendMessageToUserUI(class UOnlineExternalUISubsystem* Subsystem, int32_t LocalUserNum, FUniqueNetIdRepl Recipient, FShowSendMessageParameters ShowParams); // [0x83db00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem
/// Size: 0x0238 (568 bytes) (0x000030 - 0x000238) align 8 MaxSize: 0x0238
class UOnlineFriendsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x118];                                     // 0x0030   (0x0118)  MISSED
	SDK_UNDEFINED(16,365) /* FMulticastInlineDelegate */ __um(OnFriendsChange);                                    // 0x0148   (0x0010)  
	SDK_UNDEFINED(16,366) /* FMulticastInlineDelegate */ __um(OnOutgoingInviteSent);                               // 0x0158   (0x0010)  
	SDK_UNDEFINED(16,367) /* FMulticastInlineDelegate */ __um(OnInviteReceived);                                   // 0x0168   (0x0010)  
	SDK_UNDEFINED(16,368) /* FMulticastInlineDelegate */ __um(OnInviteAccepted);                                   // 0x0178   (0x0010)  
	SDK_UNDEFINED(16,369) /* FMulticastInlineDelegate */ __um(OnInviteRejected);                                   // 0x0188   (0x0010)  
	SDK_UNDEFINED(16,370) /* FMulticastInlineDelegate */ __um(OnInviteAborted);                                    // 0x0198   (0x0010)  
	SDK_UNDEFINED(16,371) /* FMulticastInlineDelegate */ __um(OnFriendRemoved);                                    // 0x01A8   (0x0010)  
	SDK_UNDEFINED(16,372) /* FMulticastInlineDelegate */ __um(OnRejectInviteComplete);                             // 0x01B8   (0x0010)  
	SDK_UNDEFINED(16,373) /* FMulticastInlineDelegate */ __um(OnDeleteFriendComplete);                             // 0x01C8   (0x0010)  
	SDK_UNDEFINED(16,374) /* FMulticastInlineDelegate */ __um(OnBlockedPlayerComplete);                            // 0x01D8   (0x0010)  
	SDK_UNDEFINED(16,375) /* FMulticastInlineDelegate */ __um(OnUnblockedPlayerComplete);                          // 0x01E8   (0x0010)  
	SDK_UNDEFINED(16,376) /* FMulticastInlineDelegate */ __um(OnBlockListChange);                                  // 0x01F8   (0x0010)  
	SDK_UNDEFINED(16,377) /* FMulticastInlineDelegate */ __um(OnQueryRecentPlayersComplete);                       // 0x0208   (0x0010)  
	SDK_UNDEFINED(16,378) /* FMulticastInlineDelegate */ __um(OnQueryBlockedPlayersComplete);                      // 0x0218   (0x0010)  
	SDK_UNDEFINED(16,379) /* FMulticastInlineDelegate */ __um(OnRecentPlayersAdded);                               // 0x0228   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.UnblockPlayer
	// bool UnblockPlayer(int32_t LocalUserNum, FUniqueNetIdRepl PlayerId);                                                     // [0x842a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.RejectInvite
	// bool RejectInvite(int32_t LocalUserNum, FUniqueNetIdRepl FriendId, FString ListName);                                    // [0x842120] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.QueryRecentPlayers
	// bool QueryRecentPlayers(FUniqueNetIdRepl UserId, FString Namespace);                                                     // [0x841e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.QueryBlockedPlayers
	// bool QueryBlockedPlayers(FUniqueNetIdRepl UserId);                                                                       // [0x841b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x841b30] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.IsFriend
	// bool IsFriend(int32_t LocalUserNum, FUniqueNetIdRepl FriendId, FString ListName);                                        // [0x841940] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetRecentPlayers
	// bool GetRecentPlayers(FUniqueNetIdRepl UserId, FString Namespace, TArray<UOnlineRecentPlayerRef*>& OutRecentPlayers);    // [0x841720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetFriendsList
	// bool GetFriendsList(int32_t LocalUserNum, FString ListName, TArray<UOnlineFriendRef*>& OutFriends);                      // [0x841590] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetFriendSettings
	// bool GetFriendSettings(FUniqueNetIdRepl UserId, TMap<FString, FOnlineFriendSettingsSourceDataConfig>& OutSettings);      // [0x8413b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetFriend
	// class UOnlineFriendRef* GetFriend(int32_t LocalUserNum, FUniqueNetIdRepl FriendId, FString ListName);                    // [0x8411c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.GetBlockedPlayers
	// bool GetBlockedPlayers(FUniqueNetIdRepl UserId, TArray<UOnlineUserRef*>& OutBlockedPlayers);                             // [0x841040] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.DumpRecentPlayers
	// void DumpRecentPlayers();                                                                                                // [0x841020] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.DumpBlockedPlayers
	// void DumpBlockedPlayers();                                                                                               // [0x841000] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.DeleteFriend
	// bool DeleteFriend(int32_t LocalUserNum, FUniqueNetIdRepl FriendId, FString ListName);                                    // [0x840a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystem.BlockPlayer
	// bool BlockPlayer(int32_t LocalUserNum, FUniqueNetIdRepl PlayerId);                                                       // [0x840920] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemReadFriendsList
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UOnlineFriendsSubsystemReadFriendsList : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,380) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,381) /* FMulticastInlineDelegate */ __um(OnReadFriendsListComplete);                          // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            __Store__ListName;                                          // 0x0070   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemReadFriendsList.ReadFriendsList
	// class UOnlineFriendsSubsystemReadFriendsList* ReadFriendsList(class UOnlineFriendsSubsystem* Subsystem, int32_t LocalUserNum, FString ListName); // [0x841fc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriendsList
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UOnlineFriendsSubsystemDeleteFriendsList : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,382) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,383) /* FMulticastInlineDelegate */ __um(OnDeleteFriendsListComplete);                        // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            __Store__ListName;                                          // 0x0070   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriendsList.DeleteFriendsList
	// class UOnlineFriendsSubsystemDeleteFriendsList* DeleteFriendsList(class UOnlineFriendsSubsystem* Subsystem, int32_t LocalUserNum, FString ListName); // [0x840ea0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemSendInvite
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineFriendsSubsystemSendInvite : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,384) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,385) /* FMulticastInlineDelegate */ __um(OnSendInviteComplete);                               // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FUniqueNetIdRepl                                   __Store__FriendId;                                          // 0x0070   (0x0028)  
	FString                                            __Store__ListName;                                          // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemSendInvite.SendInvite
	// class UOnlineFriendsSubsystemSendInvite* SendInvite(class UOnlineFriendsSubsystem* Subsystem, int32_t LocalUserNum, FUniqueNetIdRepl FriendId, FString ListName); // [0x842310] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemAcceptInvite
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineFriendsSubsystemAcceptInvite : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,386) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,387) /* FMulticastInlineDelegate */ __um(OnAcceptInviteComplete);                             // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FUniqueNetIdRepl                                   __Store__FriendId;                                          // 0x0070   (0x0028)  
	FString                                            __Store__ListName;                                          // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemAcceptInvite.AcceptInvite
	// class UOnlineFriendsSubsystemAcceptInvite* AcceptInvite(class UOnlineFriendsSubsystem* Subsystem, int32_t LocalUserNum, FUniqueNetIdRepl FriendId, FString ListName); // [0x840440] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemSetFriendAlias
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineFriendsSubsystemSetFriendAlias : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,388) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,389) /* FMulticastInlineDelegate */ __um(OnSetFriendAliasComplete);                           // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FUniqueNetIdRepl                                   __Store__FriendId;                                          // 0x0070   (0x0028)  
	FString                                            __Store__ListName;                                          // 0x0098   (0x0010)  
	FString                                            __Store__Alias;                                             // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemSetFriendAlias.SetFriendAlias
	// class UOnlineFriendsSubsystemSetFriendAlias* SetFriendAlias(class UOnlineFriendsSubsystem* Subsystem, int32_t LocalUserNum, FUniqueNetIdRepl FriendId, FString ListName, FString Alias); // [0x842530] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriendAlias
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineFriendsSubsystemDeleteFriendAlias : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,390) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,391) /* FMulticastInlineDelegate */ __um(OnDeleteFriendAliasComplete);                        // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FUniqueNetIdRepl                                   __Store__FriendId;                                          // 0x0070   (0x0028)  
	FString                                            __Store__ListName;                                          // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriendAlias.DeleteFriendAlias
	// class UOnlineFriendsSubsystemDeleteFriendAlias* DeleteFriendAlias(class UOnlineFriendsSubsystem* Subsystem, int32_t LocalUserNum, FUniqueNetIdRepl FriendId, FString ListName); // [0x840c80] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.ReportPlayedWithUserInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FReportPlayedWithUserInfo
{ 
	FUniqueNetIdRepl                                   UserId;                                                     // 0x0000   (0x0028)  
	FString                                            PresenceStr;                                                // 0x0028   (0x0010)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemAddRecentPlayers
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineFriendsSubsystemAddRecentPlayers : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,392) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,393) /* FMulticastInlineDelegate */ __um(OnAddRecentPlayersComplete);                         // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0028)  
	TArray<FReportPlayedWithUserInfo>                  __Store__InRecentPlayers;                                   // 0x0090   (0x0010)  
	FString                                            __Store__ListName;                                          // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemAddRecentPlayers.AddRecentPlayers
	// class UOnlineFriendsSubsystemAddRecentPlayers* AddRecentPlayers(class UOnlineFriendsSubsystem* Subsystem, FUniqueNetIdRepl UserId, TArray<FReportPlayedWithUserInfo> InRecentPlayers, FString ListName); // [0x840660] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryFriendSettings
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UOnlineFriendsSubsystemQueryFriendSettings : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,394) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,395) /* FMulticastInlineDelegate */ __um(OnSettingsOperationComplete);                        // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryFriendSettings.QueryFriendSettings
	// class UOnlineFriendsSubsystemQueryFriendSettings* QueryFriendSettings(class UOnlineFriendsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId); // [0x841c90] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.FriendSettingsData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FFriendSettingsData
{ 
	TMap<FString, FString>                             Data;                                                       // 0x0000   (0x0050)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemUpdateFriendSettings
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x0000E0) align 8 MaxSize: 0x00E0
class UOnlineFriendsSubsystemUpdateFriendSettings : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,396) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,397) /* FMulticastInlineDelegate */ __um(OnSettingsOperationComplete);                        // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	FFriendSettingsData                                __Store__NewSettings;                                       // 0x0090   (0x0050)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemUpdateFriendSettings.UpdateFriendSettings
	// class UOnlineFriendsSubsystemUpdateFriendSettings* UpdateFriendSettings(class UOnlineFriendsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FFriendSettingsData NewSettings); // [0x842b80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemSetFriendSettings
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineFriendsSubsystemSetFriendSettings : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,398) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,399) /* FMulticastInlineDelegate */ __um(OnSetFriendSettingsComplete);                        // 0x0040   (0x0010)  
	class UOnlineFriendsSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0028)  
	FString                                            __Store__Source;                                            // 0x0090   (0x0010)  
	bool                                               __Store__bNeverShowAgain;                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineFriendsSubsystemSetFriendSettings.SetFriendSettings
	// class UOnlineFriendsSubsystemSetFriendSettings* SetFriendSettings(class UOnlineFriendsSubsystem* Subsystem, FUniqueNetIdRepl UserId, FString Source, bool bNeverShowAgain); // [0x8427e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystem
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineGameActivitySubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x847b50] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemResetAllActiveActivities
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UOnlineGameActivitySubsystemResetAllActiveActivities : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,400) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,401) /* FMulticastInlineDelegate */ __um(OnResetAllActiveActivitiesComplete);                 // 0x0040   (0x0010)  
	class UOnlineGameActivitySubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemResetAllActiveActivities.ResetAllActiveActivities
	// class UOnlineGameActivitySubsystemResetAllActiveActivities* ResetAllActiveActivities(class UOnlineGameActivitySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId); // [0x849620] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemSetActivityAvailability
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineGameActivitySubsystemSetActivityAvailability : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,402) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,403) /* FMulticastInlineDelegate */ __um(OnSetActivityAvailabilityComplete);                  // 0x0040   (0x0010)  
	class UOnlineGameActivitySubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	FString                                            __Store__ActivityId;                                        // 0x0090   (0x0010)  
	bool                                               __Store__bEnabled;                                          // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemSetActivityAvailability.SetActivityAvailability
	// class UOnlineGameActivitySubsystemSetActivityAvailability* SetActivityAvailability(class UOnlineGameActivitySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FString ActivityId, bool bEnabled); // [0x849900] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemSetActivityPriority
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x0000E0) align 8 MaxSize: 0x00E0
class UOnlineGameActivitySubsystemSetActivityPriority : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,404) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,405) /* FMulticastInlineDelegate */ __um(OnSetActivityPriorityComplete);                      // 0x0040   (0x0010)  
	class UOnlineGameActivitySubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	TMap<FString, int32_t>                             __Store__PrioritizedActivities;                             // 0x0090   (0x0050)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameActivitySubsystemSetActivityPriority.SetActivityPriority
	// class UOnlineGameActivitySubsystemSetActivityPriority* SetActivityPriority(class UOnlineGameActivitySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TMap<FString, int32_t> PrioritizedActivities); // [0x849b30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystem
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineGameItemStatsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x847b80] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemUsage
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineGameItemStatsSubsystemItemUsage : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,406) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,407) /* FMulticastInlineDelegate */ __um(OnItemUsageComplete);                                // 0x0040   (0x0010)  
	class UOnlineGameItemStatsSubsystem*               __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	FString                                            __Store__ItemUsedBy;                                        // 0x0090   (0x0010)  
	TArray<FString>                                    __Store__ItemsUsed;                                         // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemUsage.ItemUsage
	// class UOnlineGameItemStatsSubsystemItemUsage* ItemUsage(class UOnlineGameItemStatsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FString ItemUsedBy, TArray<FString> ItemsUsed); // [0x848ee0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemImpact
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UOnlineGameItemStatsSubsystemItemImpact : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,408) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,409) /* FMulticastInlineDelegate */ __um(OnItemImpactComplete);                               // 0x0040   (0x0010)  
	class UOnlineGameItemStatsSubsystem*               __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	TArray<FString>                                    __Store__TargetActors;                                      // 0x0090   (0x0010)  
	FString                                            __Store__ImpactInitiatedBy;                                 // 0x00A0   (0x0010)  
	TArray<FString>                                    __Store__ItemsUsed;                                         // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemImpact.ItemImpact
	// class UOnlineGameItemStatsSubsystemItemImpact* ItemImpact(class UOnlineGameItemStatsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TArray<FString> TargetActors, FString ImpactInitiatedBy, TArray<FString> ItemsUsed); // [0x848010] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemMitigation
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UOnlineGameItemStatsSubsystemItemMitigation : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,410) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,411) /* FMulticastInlineDelegate */ __um(OnItemMitigationComplete);                           // 0x0040   (0x0010)  
	class UOnlineGameItemStatsSubsystem*               __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	TArray<FString>                                    __Store__ItemsUsed;                                         // 0x0090   (0x0010)  
	TArray<FString>                                    __Store__ImpactItemsMitigated;                              // 0x00A0   (0x0010)  
	FString                                            __Store__ItemUsedBy;                                        // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemMitigation.ItemMitigation
	// class UOnlineGameItemStatsSubsystemItemMitigation* ItemMitigation(class UOnlineGameItemStatsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TArray<FString> ItemsUsed, TArray<FString> ImpactItemsMitigated, FString ItemUsedBy); // [0x848af0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemAvailabilityChange
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineGameItemStatsSubsystemItemAvailabilityChange : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,412) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,413) /* FMulticastInlineDelegate */ __um(OnItemAvailabilityChangeComplete);                   // 0x0040   (0x0010)  
	class UOnlineGameItemStatsSubsystem*               __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	TArray<FString>                                    __Store__AvailableItems;                                    // 0x0090   (0x0010)  
	TArray<FString>                                    __Store__UnavailableItems;                                  // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemAvailabilityChange.ItemAvailabilityChange
	// class UOnlineGameItemStatsSubsystemItemAvailabilityChange* ItemAvailabilityChange(class UOnlineGameItemStatsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TArray<FString> AvailableItems, TArray<FString> UnavailableItems); // [0x847ca0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemInventoryChange
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineGameItemStatsSubsystemItemInventoryChange : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,414) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,415) /* FMulticastInlineDelegate */ __um(OnItemInventoryChangeComplete);                      // 0x0040   (0x0010)  
	class UOnlineGameItemStatsSubsystem*               __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	TArray<FString>                                    __Store__ItemsToAdd;                                        // 0x0090   (0x0010)  
	TArray<FString>                                    __Store__ItemsToRemove;                                     // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemInventoryChange.ItemInventoryChange
	// class UOnlineGameItemStatsSubsystemItemInventoryChange* ItemInventoryChange(class UOnlineGameItemStatsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TArray<FString> ItemsToAdd, TArray<FString> ItemsToRemove); // [0x848410] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemLoadoutChange
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineGameItemStatsSubsystemItemLoadoutChange : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,416) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,417) /* FMulticastInlineDelegate */ __um(OnItemLoadoutChangeComplete);                        // 0x0040   (0x0010)  
	class UOnlineGameItemStatsSubsystem*               __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	TArray<FString>                                    __Store__EquippedItems;                                     // 0x0090   (0x0010)  
	TArray<FString>                                    __Store__UnequippedItems;                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemLoadoutChange.ItemLoadoutChange
	// class UOnlineGameItemStatsSubsystemItemLoadoutChange* ItemLoadoutChange(class UOnlineGameItemStatsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TArray<FString> EquippedItems, TArray<FString> UnequippedItems); // [0x848780] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineGroupsSubsystem
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineGroupsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineGroupsSubsystem.SetNamespace
	// void SetNamespace(FString Ns);                                                                                           // [0x849d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineGroupsSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x847bb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineGroupsSubsystem.GetNamespace
	// FString GetNamespace();                                                                                                  // [0x846ed0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOnlineHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.ReadFileDataAsString
	// FString ReadFileDataAsString(class UFileData* FileData);                                                                 // [0x849550] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.ReadFileDataAsSaveGame
	// class USaveGame* ReadFileDataAsSaveGame(class UFileData* FileData);                                                      // [0x8494c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.IsValid_PartyId
	// bool IsValid_PartyId(class UPartyId* A);                                                                                 // [0x847c10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.IsValid_LobbyId
	// bool IsValid_LobbyId(class ULobbyId* A);                                                                                 // [0x847c10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.GetResolvedConnectStringBySearchResult
	// void GetResolvedConnectStringBySearchResult(class UOnlineSessionSubsystem* Subsystem, FOnlineSessionSearchResultBP SearchResult, FName PortType, bool& bWasSuccessful, FString& OutConnectInfo); // [0x8473c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.GetResolvedConnectStringByName
	// void GetResolvedConnectStringByName(class UOnlineSessionSubsystem* Subsystem, FName SessionName, FName PortType, bool& bWasSuccessful, FString& OutConnectInfo); // [0x847210] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.GetPrimaryPartyType
	// int64_t GetPrimaryPartyType();                                                                                           // [0x8471f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.GetControllerUniqueNetId
	// FUniqueNetIdRepl GetControllerUniqueNetId(class APlayerController* PlayerController);                                    // [0x846d50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.FUniqueNetIdIsValid
	// bool FUniqueNetIdIsValid(FUniqueNetIdRepl InNetId);                                                                      // [0x846a50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.FUniqueNetIdGetType
	// FName FUniqueNetIdGetType(FUniqueNetIdRepl InNetId);                                                                     // [0x846930] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.EqualEqual_PartyIdPartyId
	// bool EqualEqual_PartyIdPartyId(class UPartyId* A, class UPartyId* B);                                                    // [0x846860] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.EqualEqual_LobbyIdLobbyId
	// bool EqualEqual_LobbyIdLobbyId(class ULobbyId* A, class ULobbyId* B);                                                    // [0x846860] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl
	// bool EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl(FUniqueNetIdRepl& InA, FUniqueNetIdRepl& InB);                          // [0x8466c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.CreateMutablePartyData
	// class UMutablePartyData* CreateMutablePartyData(class UReadablePartyData* ReadOnlyPartyData);                            // [0x8464e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.CreateFileDataFromString
	// class UFileData* CreateFileDataFromString(FString String);                                                               // [0x846440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.CreateFileDataFromSaveGame
	// class UFileData* CreateFileDataFromSaveGame(class USaveGame* SaveGame);                                                  // [0x8463b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.Conv_ULobbyIdToUOnlinePartyJoinInfo
	// class UOnlinePartyJoinInfo* Conv_ULobbyIdToUOnlinePartyJoinInfo(FUniqueNetIdRepl InLocalUserId, class UOnlinePartySubsystem* InPartySubsystem, class ULobbyId* InLobbyId); // [0x846220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineHelpers.Conv_FUniqueNetIdReplToString
	// FString Conv_FUniqueNetIdReplToString(FUniqueNetIdRepl InNetId);                                                         // [0x8460c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem
/// Size: 0x0128 (296 bytes) (0x000030 - 0x000128) align 8 MaxSize: 0x0128
class UOnlineIdentitySubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0xA8];                                      // 0x0030   (0x00A8)  MISSED
	SDK_UNDEFINED(16,418) /* FMulticastInlineDelegate */ __um(OnLoginChanged);                                     // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,419) /* FMulticastInlineDelegate */ __um(OnLoginStatusChanged);                               // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,420) /* FMulticastInlineDelegate */ __um(OnLoginComplete);                                    // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,421) /* FMulticastInlineDelegate */ __um(OnLogoutComplete);                                   // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,422) /* FMulticastInlineDelegate */ __um(OnLoginFlowLogout);                                  // 0x0118   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x847be0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetUserAccount
	// class UUserOnlineAccountRef* GetUserAccount(FUniqueNetIdRepl UserId);                                                    // [0x847890] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetUniquePlayerId
	// FUniqueNetIdRepl GetUniquePlayerId(int32_t LocalUserNum);                                                                // [0x8477a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetSponsorUniquePlayerId
	// FUniqueNetIdRepl GetSponsorUniquePlayerId(int32_t LocalUserNum);                                                         // [0x8476b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetPlayerNickname
	// FString GetPlayerNickname(FUniqueNetIdRepl UserId);                                                                      // [0x847080] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetPlatformUserIdFromUniqueNetId
	// int32_t GetPlatformUserIdFromUniqueNetId(FUniqueNetIdRepl UniqueNetId);                                                  // [0x846f50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetLoginStatus
	// EOnlineLoginStatus GetLoginStatus(int32_t LocalUserNum);                                                                 // [0x846e30] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetAuthType
	// FString GetAuthType();                                                                                                   // [0x846cd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetAuthToken
	// FString GetAuthToken(int32_t LocalUserNum);                                                                              // [0x846bf0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.GetAllUserAccounts
	// TArray<UUserOnlineAccountRef*> GetAllUserAccounts();                                                                     // [0x846b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystem.CreateUniquePlayerId
	// FUniqueNetIdRepl CreateUniquePlayerId(FString Str);                                                                      // [0x846570] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineAccountCredential
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FOnlineAccountCredential
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FString                                            ID;                                                         // 0x0010   (0x0010)  
	FString                                            Token;                                                      // 0x0020   (0x0010)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemLogin
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineIdentitySubsystemLogin : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,423) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,424) /* FMulticastInlineDelegate */ __um(OnLoginComplete);                                    // 0x0040   (0x0010)  
	class UOnlineIdentitySubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__LocalUserNum;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FOnlineAccountCredential                           __Store__AccountCredentials;                                // 0x0078   (0x0030)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemLogin.Login
	// class UOnlineIdentitySubsystemLogin* Login(class UOnlineIdentitySubsystem* Subsystem, int32_t LocalUserNum, FOnlineAccountCredential AccountCredentials); // [0x8491f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemLogout
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UOnlineIdentitySubsystemLogout : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,425) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,426) /* FMulticastInlineDelegate */ __um(OnLogoutComplete);                                   // 0x0040   (0x0010)  
	class UOnlineIdentitySubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__LocalUserNum;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemLogout.Logout
	// class UOnlineIdentitySubsystemLogout* Logout(class UOnlineIdentitySubsystem* Subsystem, int32_t LocalUserNum);           // [0x8493f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemAutoLogin
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UOnlineIdentitySubsystemAutoLogin : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,427) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,428) /* FMulticastInlineDelegate */ __um(OnLoginComplete);                                    // 0x0040   (0x0010)  
	class UOnlineIdentitySubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__LocalUserNum;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemAutoLogin.AutoLogin
	// class UOnlineIdentitySubsystemAutoLogin* AutoLogin(class UOnlineIdentitySubsystem* Subsystem, int32_t LocalUserNum);     // [0x845ff0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemRevokeAuthToken
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UOnlineIdentitySubsystemRevokeAuthToken : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,429) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,430) /* FMulticastInlineDelegate */ __um(OnRevokeAuthTokenComplete);                          // 0x0040   (0x0010)  
	class UOnlineIdentitySubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemRevokeAuthToken.RevokeAuthToken
	// class UOnlineIdentitySubsystemRevokeAuthToken* RevokeAuthToken(class UOnlineIdentitySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId); // [0x849790] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemGetUserPrivilege
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineIdentitySubsystemGetUserPrivilege : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,431) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,432) /* FMulticastInlineDelegate */ __um(OnGetUserPrivilegeComplete);                         // 0x0040   (0x0010)  
	class UOnlineIdentitySubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	EOnlineUserPrivilege                               __Store__Privilege;                                         // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0091   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineIdentitySubsystemGetUserPrivilege.GetUserPrivilege
	// class UOnlineIdentitySubsystemGetUserPrivilege* GetUserPrivilege(class UOnlineIdentitySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, EOnlineUserPrivilege Privilege); // [0x8479c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem
/// Size: 0x00C8 (200 bytes) (0x000030 - 0x0000C8) align 8 MaxSize: 0x00C8
class UOnlineLeaderboardsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x78];                                      // 0x0030   (0x0078)  MISSED
	SDK_UNDEFINED(16,433) /* FMulticastInlineDelegate */ __um(OnLeaderboardReadComplete);                          // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,434) /* FMulticastInlineDelegate */ __um(OnLeaderboardFlushComplete);                         // 0x00B8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem.WriteLeaderboards
	// bool WriteLeaderboards(FName SessionName, FUniqueNetIdRepl Player, class UOnlineLeaderboardWrite* WriteObject);          // [0x84f010] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x84d860] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem.FreeStats
	// void FreeStats(class UOnlineLeaderboardRead* ReadObject);                                                                // [0x84ce70] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem.FlushLeaderboards
	// bool FlushLeaderboards(FName SessionName);                                                                               // [0x84cdd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboards
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UOnlineLeaderboardsSubsystemReadLeaderboards : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,435) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,436) /* FMulticastInlineDelegate */ __um(OnLeaderboardReadComplete);                          // 0x0040   (0x0010)  
	class UOnlineLeaderboardsSubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	TArray<FUniqueNetIdRepl>                           __Store__Players;                                           // 0x0070   (0x0010)  
	class UOnlineLeaderboardRead*                      __Store__ReadObject;                                        // 0x0080   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboards.ReadLeaderboards
	// class UOnlineLeaderboardsSubsystemReadLeaderboards* ReadLeaderboards(class UOnlineLeaderboardsSubsystem* Subsystem, TArray<FUniqueNetIdRepl> Players, class UOnlineLeaderboardRead* ReadObject); // [0x84e0a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsForFriends
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,437) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,438) /* FMulticastInlineDelegate */ __um(OnLeaderboardReadComplete);                          // 0x0040   (0x0010)  
	class UOnlineLeaderboardsSubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__LocalUserNum;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	class UOnlineLeaderboardRead*                      __Store__ReadObject;                                        // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsForFriends.ReadLeaderboardsForFriends
	// class UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends* ReadLeaderboardsForFriends(class UOnlineLeaderboardsSubsystem* Subsystem, int32_t LocalUserNum, class UOnlineLeaderboardRead* ReadObject); // [0x84e590] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsAroundRank
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,439) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,440) /* FMulticastInlineDelegate */ __um(OnLeaderboardReadComplete);                          // 0x0040   (0x0010)  
	class UOnlineLeaderboardsSubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__Rank;                                              // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	int64_t                                            __Store__Range;                                             // 0x0078   (0x0008)  
	class UOnlineLeaderboardRead*                      __Store__ReadObject;                                        // 0x0080   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsAroundRank.ReadLeaderboardsAroundRank
	// class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank* ReadLeaderboardsAroundRank(class UOnlineLeaderboardsSubsystem* Subsystem, int32_t Rank, int64_t Range, class UOnlineLeaderboardRead* ReadObject); // [0x84e290] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsAroundUser
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,441) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,442) /* FMulticastInlineDelegate */ __um(OnLeaderboardReadComplete);                          // 0x0040   (0x0010)  
	class UOnlineLeaderboardsSubsystem*                __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__Player;                                            // 0x0070   (0x0028)  
	int64_t                                            __Store__Range;                                             // 0x0098   (0x0008)  
	class UOnlineLeaderboardRead*                      __Store__ReadObject;                                        // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsAroundUser.ReadLeaderboardsAroundUser
	// class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser* ReadLeaderboardsAroundUser(class UOnlineLeaderboardsSubsystem* Subsystem, FUniqueNetIdRepl Player, int64_t Range, class UOnlineLeaderboardRead* ReadObject); // [0x84e3d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000110) align 8 MaxSize: 0x0110
class UOnlineLobbySubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x90];                                      // 0x0030   (0x0090)  MISSED
	SDK_UNDEFINED(16,443) /* FMulticastInlineDelegate */ __um(OnLobbyUpdate);                                      // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,444) /* FMulticastInlineDelegate */ __um(OnLobbyDelete);                                      // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,445) /* FMulticastInlineDelegate */ __um(OnMemberConnect);                                    // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,446) /* FMulticastInlineDelegate */ __um(OnMemberUpdate);                                     // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,447) /* FMulticastInlineDelegate */ __um(OnMemberDisconnect);                                 // 0x0100   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.ParseSerializedLobbyId
	// class ULobbyId* ParseSerializedLobbyId(FString InLobbyId);                                                               // [0x84ddb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.MakeUpdateLobbyTransaction
	// class UOnlineLobbyTransaction* MakeUpdateLobbyTransaction(FUniqueNetIdRepl UserId, class ULobbyId* LobbyId);             // [0x84dc40] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.MakeUpdateLobbyMemberTransaction
	// class UOnlineLobbyMemberTransaction* MakeUpdateLobbyMemberTransaction(FUniqueNetIdRepl UserId, class ULobbyId* LobbyId, FUniqueNetIdRepl MemberId); // [0x84da20] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.MakeCreateLobbyTransaction
	// class UOnlineLobbyTransaction* MakeCreateLobbyTransaction(FUniqueNetIdRepl UserId);                                      // [0x84d8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x84d890] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.GetMemberUserId
	// bool GetMemberUserId(FUniqueNetIdRepl UserId, class ULobbyId* LobbyId, int32_t MemberIndex, FUniqueNetIdRepl& OutMemberId); // [0x84d630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.GetMemberMetadataValue
	// bool GetMemberMetadataValue(FUniqueNetIdRepl UserId, class ULobbyId* LobbyId, FUniqueNetIdRepl MemberId, FString MetadataKey, FVariantDataBP& OutMetadataValue); // [0x84d300] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.GetMemberCount
	// bool GetMemberCount(FUniqueNetIdRepl UserId, class ULobbyId* LobbyId, int32_t& OutMemberCount);                          // [0x84d160] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystem.GetLobbyMetadataValue
	// bool GetLobbyMetadataValue(FUniqueNetIdRepl UserId, class ULobbyId* LobbyId, FString MetadataKey, FVariantDataBP& OutMetadataValue); // [0x84cf00] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemCreateLobby
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineLobbySubsystemCreateLobby : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,448) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,449) /* FMulticastInlineDelegate */ __um(OnLobbyCreateOrConnectComplete);                     // 0x0040   (0x0010)  
	class UOnlineLobbySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0028)  
	class UOnlineLobbyTransaction*                     __Store__Transaction;                                       // 0x0090   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemCreateLobby.CreateLobby
	// class UOnlineLobbySubsystemCreateLobby* CreateLobby(class UOnlineLobbySubsystem* Subsystem, FUniqueNetIdRepl UserId, class UOnlineLobbyTransaction* Transaction); // [0x84c920] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemUpdateLobby
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineLobbySubsystemUpdateLobby : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,450) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,451) /* FMulticastInlineDelegate */ __um(OnLobbyOperationComplete);                           // 0x0040   (0x0010)  
	class UOnlineLobbySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0028)  
	class ULobbyId*                                    __Store__LobbyId;                                           // 0x0090   (0x0008)  
	class UOnlineLobbyTransaction*                     __Store__Transaction;                                       // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemUpdateLobby.UpdateLobby
	// class UOnlineLobbySubsystemUpdateLobby* UpdateLobby(class UOnlineLobbySubsystem* Subsystem, FUniqueNetIdRepl UserId, class ULobbyId* LobbyId, class UOnlineLobbyTransaction* Transaction); // [0x84ec90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemDeleteLobby
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineLobbySubsystemDeleteLobby : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,452) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,453) /* FMulticastInlineDelegate */ __um(OnLobbyOperationComplete);                           // 0x0040   (0x0010)  
	class UOnlineLobbySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0028)  
	class ULobbyId*                                    __Store__LobbyId;                                           // 0x0090   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemDeleteLobby.DeleteLobby
	// class UOnlineLobbySubsystemDeleteLobby* DeleteLobby(class UOnlineLobbySubsystem* Subsystem, FUniqueNetIdRepl UserId, class ULobbyId* LobbyId); // [0x84cab0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemConnectLobby
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineLobbySubsystemConnectLobby : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,454) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,455) /* FMulticastInlineDelegate */ __um(OnLobbyCreateOrConnectComplete);                     // 0x0040   (0x0010)  
	class UOnlineLobbySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0028)  
	class ULobbyId*                                    __Store__LobbyId;                                           // 0x0090   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemConnectLobby.ConnectLobby
	// class UOnlineLobbySubsystemConnectLobby* ConnectLobby(class UOnlineLobbySubsystem* Subsystem, FUniqueNetIdRepl UserId, class ULobbyId* LobbyId); // [0x84c790] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemDisconnectLobby
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineLobbySubsystemDisconnectLobby : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,456) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,457) /* FMulticastInlineDelegate */ __um(OnLobbyOperationComplete);                           // 0x0040   (0x0010)  
	class UOnlineLobbySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0028)  
	class ULobbyId*                                    __Store__LobbyId;                                           // 0x0090   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemDisconnectLobby.DisconnectLobby
	// class UOnlineLobbySubsystemDisconnectLobby* DisconnectLobby(class UOnlineLobbySubsystem* Subsystem, FUniqueNetIdRepl UserId, class ULobbyId* LobbyId); // [0x84cc40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemUpdateMemberSelf
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineLobbySubsystemUpdateMemberSelf : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,458) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,459) /* FMulticastInlineDelegate */ __um(OnLobbyOperationComplete);                           // 0x0040   (0x0010)  
	class UOnlineLobbySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0028)  
	class ULobbyId*                                    __Store__LobbyId;                                           // 0x0090   (0x0008)  
	class UOnlineLobbyMemberTransaction*               __Store__Transaction;                                       // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemUpdateMemberSelf.UpdateMemberSelf
	// class UOnlineLobbySubsystemUpdateMemberSelf* UpdateMemberSelf(class UOnlineLobbySubsystem* Subsystem, FUniqueNetIdRepl UserId, class ULobbyId* LobbyId, class UOnlineLobbyMemberTransaction* Transaction); // [0x84ee50] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.VariantDataBP
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FVariantDataBP
{ 
	EOnlineKeyValuePairDataType_                       Type;                                                       // 0x0000   (0x0001)  
	bool                                               AsBool;                                                     // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            AsInt;                                                      // 0x0004   (0x0004)  
	float                                              AsFloat;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            AsInt64;                                                    // 0x0010   (0x0008)  
	FString                                            AsString;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineLobbySearchQueryFilterBP
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FOnlineLobbySearchQueryFilterBP
{ 
	FString                                            Key;                                                        // 0x0000   (0x0010)  
	FVariantDataBP                                     Value;                                                      // 0x0010   (0x0028)  
	EOnlineLobbySearchQueryFilterComparator_           Comparison;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineLobbySearchQueryBP
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FOnlineLobbySearchQueryBP
{ 
	TArray<FOnlineLobbySearchQueryFilterBP>            Filters;                                                    // 0x0000   (0x0010)  
	int64_t                                            Limit;                                                      // 0x0010   (0x0008)  
	bool                                               HasLimit;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemSearch
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineLobbySubsystemSearch : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,460) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,461) /* FMulticastInlineDelegate */ __um(OnLobbySearchComplete);                              // 0x0040   (0x0010)  
	class UOnlineLobbySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0028)  
	FOnlineLobbySearchQueryBP                          __Store__Query;                                             // 0x0090   (0x0020)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbySubsystemSearch.Search
	// class UOnlineLobbySubsystemSearch* Search(class UOnlineLobbySubsystem* Subsystem, FUniqueNetIdRepl UserId, FOnlineLobbySearchQueryBP Query); // [0x84e9a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystem
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineMessageSanitizerSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystem.ResetBlockedUserCache
	// void ResetBlockedUserCache();                                                                                            // [0x84e690] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x84d8c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemSanitizeDisplayName
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UOnlineMessageSanitizerSubsystemSanitizeDisplayName : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,462) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,463) /* FMulticastInlineDelegate */ __um(OnMessageProcessed);                                 // 0x0040   (0x0010)  
	class UOnlineMessageSanitizerSubsystem*            __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FString                                            __Store__DisplayName;                                       // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemSanitizeDisplayName.SanitizeDisplayName
	// class UOnlineMessageSanitizerSubsystemSanitizeDisplayName* SanitizeDisplayName(class UOnlineMessageSanitizerSubsystem* Subsystem, FString DisplayName); // [0x84e6b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemSanitizeDisplayNames
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UOnlineMessageSanitizerSubsystemSanitizeDisplayNames : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,464) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,465) /* FMulticastInlineDelegate */ __um(OnMessageArrayProcessed);                            // 0x0040   (0x0010)  
	class UOnlineMessageSanitizerSubsystem*            __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	TArray<FString>                                    __Store__DisplayNames;                                      // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemSanitizeDisplayNames.SanitizeDisplayNames
	// class UOnlineMessageSanitizerSubsystemSanitizeDisplayNames* SanitizeDisplayNames(class UOnlineMessageSanitizerSubsystem* Subsystem, TArray<FString> DisplayNames); // [0x84e7e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemQueryBlockedUser
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UOnlineMessageSanitizerSubsystemQueryBlockedUser : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,466) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,467) /* FMulticastInlineDelegate */ __um(OnQueryUserBlockedResponse);                         // 0x0040   (0x0010)  
	class UOnlineMessageSanitizerSubsystem*            __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	int32_t                                            __Store__LocalUserNum;                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            __Store__FromUserId;                                        // 0x0070   (0x0010)  
	FString                                            __Store__FromPlatform;                                      // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemQueryBlockedUser.QueryBlockedUser
	// class UOnlineMessageSanitizerSubsystemQueryBlockedUser* QueryBlockedUser(class UOnlineMessageSanitizerSubsystem* Subsystem, int32_t LocalUserNum, FString FromUserId, FString FromPlatform); // [0x84deb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineMessageSubsystem
/// Size: 0x00D8 (216 bytes) (0x000030 - 0x0000D8) align 8 MaxSize: 0x00D8
class UOnlineMessageSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x88];                                      // 0x0030   (0x0088)  MISSED
	SDK_UNDEFINED(16,468) /* FMulticastInlineDelegate */ __um(OnEnumerateMessagesComplete);                        // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,469) /* FMulticastInlineDelegate */ __um(OnSendMessageComplete);                              // 0x00C8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x853610] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSubsystem.EnumerateMessages
	// bool EnumerateMessages(int32_t LocalUserNum);                                                                            // [0x8523b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSubsystem.ClearMessages
	// bool ClearMessages(int32_t LocalUserNum);                                                                                // [0x851ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineMessageSubsystem.ClearMessageHeaders
	// bool ClearMessageHeaders(int32_t LocalUserNum);                                                                          // [0x851f50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem
/// Size: 0x0218 (536 bytes) (0x000030 - 0x000218) align 8 MaxSize: 0x0218
class UOnlinePartySubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0xE8];                                      // 0x0030   (0x00E8)  MISSED
	SDK_UNDEFINED(16,470) /* FMulticastInlineDelegate */ __um(OnPartyJoined);                                      // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,471) /* FMulticastInlineDelegate */ __um(OnPartyExited);                                      // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,472) /* FMulticastInlineDelegate */ __um(OnPartyStateChanged);                                // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,473) /* FMulticastInlineDelegate */ __um(OnPartyJIP);                                         // 0x0148   (0x0010)  
	SDK_UNDEFINED(16,474) /* FMulticastInlineDelegate */ __um(OnPartyPromotionLockoutChanged);                     // 0x0158   (0x0010)  
	SDK_UNDEFINED(16,475) /* FMulticastInlineDelegate */ __um(OnPartyConfigChanged);                               // 0x0168   (0x0010)  
	SDK_UNDEFINED(16,476) /* FMulticastInlineDelegate */ __um(OnPartyDataReceived);                                // 0x0178   (0x0010)  
	SDK_UNDEFINED(16,477) /* FMulticastInlineDelegate */ __um(OnPartyMemberPromoted);                              // 0x0188   (0x0010)  
	SDK_UNDEFINED(16,478) /* FMulticastInlineDelegate */ __um(OnPartyMemberExited);                                // 0x0198   (0x0010)  
	SDK_UNDEFINED(16,479) /* FMulticastInlineDelegate */ __um(OnPartyMemberJoined);                                // 0x01A8   (0x0010)  
	SDK_UNDEFINED(16,480) /* FMulticastInlineDelegate */ __um(OnPartyMemberDataReceived);                          // 0x01B8   (0x0010)  
	SDK_UNDEFINED(16,481) /* FMulticastInlineDelegate */ __um(OnPartyInvitesChanged);                              // 0x01C8   (0x0010)  
	SDK_UNDEFINED(16,482) /* FMulticastInlineDelegate */ __um(OnPartyInviteRequestReceived);                       // 0x01D8   (0x0010)  
	SDK_UNDEFINED(16,483) /* FMulticastInlineDelegate */ __um(OnPartyInviteReceived);                              // 0x01E8   (0x0010)  
	SDK_UNDEFINED(16,484) /* FMulticastInlineDelegate */ __um(OnPartyJIPRequestReceived);                          // 0x01F8   (0x0010)  
	SDK_UNDEFINED(16,485) /* FMulticastInlineDelegate */ __um(OnFillPartyJoinRequestData);                         // 0x0208   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.UpdatePartyMemberData
	// bool UpdatePartyMemberData(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FName Namespace, class UReadablePartyData* PartyMemberData); // [0x8555f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.UpdatePartyData
	// bool UpdatePartyData(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FName Namespace, class UReadablePartyData* PartyData); // [0x855410] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.RespondToQueryJoinability
	// void RespondToQueryJoinability(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl RecipientId, bool bCanJoin, int32_t DeniedResultCode); // [0x854910] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.RejectInvitation
	// bool RejectInvitation(FUniqueNetIdRepl LocalUserId, FUniqueNetIdRepl SenderId);                                          // [0x854460] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.MakeTokenFromJoinInfo
	// FString MakeTokenFromJoinInfo(class UOnlinePartyJoinInfo* JoinInfo);                                                     // [0x853fb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.MakeJoinInfoJson
	// FString MakeJoinInfoJson(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId);                                         // [0x853e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.JIPFromWithinParty
	// bool JIPFromWithinParty(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl PartyLeaderId);          // [0x853670] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x853640] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.IsMemberLeader
	// bool IsMemberLeader(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl MemberId);                   // [0x853400] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPendingInvites
	// bool GetPendingInvites(FUniqueNetIdRepl LocalUserId, TArray<UOnlinePartyJoinInfo*>& OutPendingInvitesArray);             // [0x853280] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPendingInvitedUsers
	// bool GetPendingInvitedUsers(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, TArray<FUniqueNetIdRepl>& OutPendingInvitedUserArray); // [0x853070] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyMembers
	// bool GetPartyMembers(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, TArray<UBlueprintPartyMember*>& OutPartyMembersArray); // [0x852eb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyMemberData
	// class UReadablePartyData* GetPartyMemberData(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl MemberId, FName Namespace); // [0x852c60] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyMemberCount
	// int64_t GetPartyMemberCount(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId);                                      // [0x852af0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyMember
	// class UBlueprintPartyMember* GetPartyMember(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl MemberId); // [0x8528d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetPartyData
	// class UReadablePartyData* GetPartyData(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FName Namespace);          // [0x852740] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetParty
	// class UParty* GetParty(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId);                                           // [0x8525d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.GetJoinedParties
	// bool GetJoinedParties(FUniqueNetIdRepl LocalUserId, TArray<UPartyId*>& OutPartyIdArray);                                 // [0x852450] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.DumpPartyState
	// void DumpPartyState();                                                                                                   // [0x852390] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.ApproveJoinRequest
	// bool ApproveJoinRequest(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl RecipientId, bool bIsApproved, int32_t DeniedResultCode); // [0x851b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystem.ApproveJIPRequest
	// bool ApproveJIPRequest(FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl RecipientId, bool bIsApproved, int32_t DeniedResultCode); // [0x8518c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemRestoreParties
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UOnlinePartySubsystemRestoreParties : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,486) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,487) /* FMulticastInlineDelegate */ __um(OnRestorePartiesComplete);                           // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemRestoreParties.RestoreParties
	// class UOnlinePartySubsystemRestoreParties* RestoreParties(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId); // [0x854d10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemRestoreInvites
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UOnlinePartySubsystemRestoreInvites : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,488) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,489) /* FMulticastInlineDelegate */ __um(OnRestoreInvitesComplete);                           // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemRestoreInvites.RestoreInvites
	// class UOnlinePartySubsystemRestoreInvites* RestoreInvites(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId); // [0x854ba0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemCleanupParties
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UOnlinePartySubsystemCleanupParties : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,490) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,491) /* FMulticastInlineDelegate */ __um(OnCleanupPartiesComplete);                           // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemCleanupParties.CleanupParties
	// class UOnlinePartySubsystemCleanupParties* CleanupParties(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId); // [0x851de0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlinePartyConfiguration
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FOnlinePartyConfiguration
{ 
	EJoinRequestAction_                                JoinRequestAction;                                          // 0x0000   (0x0001)  
	EPartySystemPermissions                            PresencePermissions;                                        // 0x0001   (0x0001)  
	EPartySystemPermissions                            InvitePermissions;                                          // 0x0002   (0x0001)  
	bool                                               ChatEnabled;                                                // 0x0003   (0x0001)  
	bool                                               ShouldRemoveOnDisconnection;                                // 0x0004   (0x0001)  
	bool                                               IsAcceptingMembers;                                         // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	int32_t                                            NotAcceptingMembersReason;                                  // 0x0008   (0x0004)  
	int32_t                                            MaxMembers;                                                 // 0x000C   (0x0004)  
	FString                                            Nickname;                                                   // 0x0010   (0x0010)  
	FString                                            Description;                                                // 0x0020   (0x0010)  
	FString                                            Password;                                                   // 0x0030   (0x0010)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemCreateParty
/// Size: 0x00D8 (216 bytes) (0x000030 - 0x0000D8) align 8 MaxSize: 0x00D8
class UOnlinePartySubsystemCreateParty : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,492) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,493) /* FMulticastInlineDelegate */ __um(OnCreatePartyComplete);                              // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	int64_t                                            __Store__PartyTypeId;                                       // 0x0090   (0x0008)  
	FOnlinePartyConfiguration                          __Store__PartyConfig;                                       // 0x0098   (0x0040)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemCreateParty.CreateParty
	// class UOnlinePartySubsystemCreateParty* CreateParty(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, int64_t PartyTypeId, FOnlinePartyConfiguration PartyConfig); // [0x852090] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemUpdateParty
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x0000E0) align 8 MaxSize: 0x00E0
class UOnlinePartySubsystemUpdateParty : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,494) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,495) /* FMulticastInlineDelegate */ __um(OnUpdatePartyComplete);                              // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	class UPartyId*                                    __Store__PartyId;                                           // 0x0090   (0x0008)  
	FOnlinePartyConfiguration                          __Store__PartyConfig;                                       // 0x0098   (0x0040)  
	bool                                               __Store__bShouldRegenerateReservationKey;                   // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00D9   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemUpdateParty.UpdateParty
	// class UOnlinePartySubsystemUpdateParty* UpdateParty(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FOnlinePartyConfiguration PartyConfig, bool bShouldRegenerateReservationKey); // [0x8550c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemJoinParty
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlinePartySubsystemJoinParty : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,496) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,497) /* FMulticastInlineDelegate */ __um(OnJoinPartyComplete);                                // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	class UOnlinePartyJoinInfo*                        __Store__OnlinePartyJoinInfo;                               // 0x0090   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemJoinParty.JoinParty
	// class UOnlinePartySubsystemJoinParty* JoinParty(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, class UOnlinePartyJoinInfo* OnlinePartyJoinInfo); // [0x853880] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemQueryPartyJoinability
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlinePartySubsystemQueryPartyJoinability : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,498) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,499) /* FMulticastInlineDelegate */ __um(OnQueryPartyJoinabilityComplete);                    // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	class UOnlinePartyJoinInfo*                        __Store__OnlinePartyJoinInfo;                               // 0x0090   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemQueryPartyJoinability.QueryPartyJoinability
	// class UOnlinePartySubsystemQueryPartyJoinability* QueryPartyJoinability(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, class UOnlinePartyJoinInfo* OnlinePartyJoinInfo); // [0x8542d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemRejoinParty
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlinePartySubsystemRejoinParty : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,500) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,501) /* FMulticastInlineDelegate */ __um(OnJoinPartyComplete);                                // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	class UPartyId*                                    __Store__PartyId;                                           // 0x0090   (0x0008)  
	int64_t                                            __Store__PartyTypeId;                                       // 0x0098   (0x0008)  
	TArray<FUniqueNetIdRepl>                           __Store__FormerMembers;                                     // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemRejoinParty.RejoinParty
	// class UOnlinePartySubsystemRejoinParty* RejoinParty(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, int64_t PartyTypeId, TArray<FUniqueNetIdRepl> FormerMembers); // [0x854630] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemLeaveParty
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlinePartySubsystemLeaveParty : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,502) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,503) /* FMulticastInlineDelegate */ __um(OnLeavePartyComplete);                               // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	class UPartyId*                                    __Store__PartyId;                                           // 0x0090   (0x0008)  
	bool                                               __Store__bSynchronizeLeave;                                 // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0099   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemLeaveParty.LeaveParty
	// class UOnlinePartySubsystemLeaveParty* LeaveParty(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, bool bSynchronizeLeave); // [0x853c50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemSendInvitation
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UOnlinePartySubsystemSendInvitation : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,504) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,505) /* FMulticastInlineDelegate */ __um(OnSendPartyInvitationComplete);                      // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	class UPartyId*                                    __Store__PartyId;                                           // 0x0090   (0x0008)  
	FUniqueNetIdRepl                                   __Store__Recipient;                                         // 0x0098   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemSendInvitation.SendInvitation
	// class UOnlinePartySubsystemSendInvitation* SendInvitation(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl Recipient); // [0x854e80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemKickMember
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UOnlinePartySubsystemKickMember : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,506) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,507) /* FMulticastInlineDelegate */ __um(OnKickPartyMemberComplete);                          // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	class UPartyId*                                    __Store__PartyId;                                           // 0x0090   (0x0008)  
	FUniqueNetIdRepl                                   __Store__TargetMemberId;                                    // 0x0098   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemKickMember.KickMember
	// class UOnlinePartySubsystemKickMember* KickMember(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl TargetMemberId); // [0x853a10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemPromoteMember
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UOnlinePartySubsystemPromoteMember : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,508) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,509) /* FMulticastInlineDelegate */ __um(OnPromotePartyMemberComplete);                       // 0x0040   (0x0010)  
	class UOnlinePartySubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	class UPartyId*                                    __Store__PartyId;                                           // 0x0090   (0x0008)  
	FUniqueNetIdRepl                                   __Store__TargetMemberId;                                    // 0x0098   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartySubsystemPromoteMember.PromoteMember
	// class UOnlinePartySubsystemPromoteMember* PromoteMember(class UOnlinePartySubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, class UPartyId* PartyId, FUniqueNetIdRepl TargetMemberId); // [0x854090] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePresenceSubsystem
/// Size: 0x00C8 (200 bytes) (0x000030 - 0x0000C8) align 8 MaxSize: 0x00C8
class UOnlinePresenceSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x78];                                      // 0x0030   (0x0078)  MISSED
	SDK_UNDEFINED(16,510) /* FMulticastInlineDelegate */ __um(OnPresenceReceived);                                 // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,511) /* FMulticastInlineDelegate */ __um(OnPresenceArrayUpdated);                             // 0x00B8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePresenceSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x85b680] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePresenceSubsystem.GetCachedPresenceForApp
	// EOnlineCachedResult_ GetCachedPresenceForApp(FUniqueNetIdRepl LocalUserId, FUniqueNetIdRepl User, FString AppId, FOnlineUserPresenceData& OutPresence); // [0x85adb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePresenceSubsystem.GetCachedPresence
	// EOnlineCachedResult_ GetCachedPresence(FUniqueNetIdRepl User, FOnlineUserPresenceData& OutPresence);                     // [0x85ab50] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineUserPresenceStatusData
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FOnlineUserPresenceStatusData
{ 
	FString                                            Status;                                                     // 0x0000   (0x0010)  
	FOnlineUserPresenceStatusState                     State;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	TMap<FString, FString>                             Properties;                                                 // 0x0018   (0x0050)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePresenceSubsystemSetPresence
/// Size: 0x00F8 (248 bytes) (0x000030 - 0x0000F8) align 8 MaxSize: 0x00F8
class UOnlinePresenceSubsystemSetPresence : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,512) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,513) /* FMulticastInlineDelegate */ __um(OnPresenceTaskComplete);                             // 0x0040   (0x0010)  
	class UOnlinePresenceSubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__User;                                              // 0x0068   (0x0028)  
	FOnlineUserPresenceStatusData                      __Store__Status;                                            // 0x0090   (0x0068)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePresenceSubsystemSetPresence.SetPresence
	// class UOnlinePresenceSubsystemSetPresence* SetPresence(class UOnlinePresenceSubsystem* Subsystem, FUniqueNetIdRepl User, FOnlineUserPresenceStatusData Status); // [0x85c7c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePresenceSubsystemQueryPresence
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UOnlinePresenceSubsystemQueryPresence : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,514) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,515) /* FMulticastInlineDelegate */ __um(OnPresenceTaskComplete);                             // 0x0040   (0x0010)  
	class UOnlinePresenceSubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__User;                                              // 0x0068   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePresenceSubsystemQueryPresence.QueryPresence
	// class UOnlinePresenceSubsystemQueryPresence* QueryPresence(class UOnlinePresenceSubsystem* Subsystem, FUniqueNetIdRepl User); // [0x85bbe0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystem
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlinePurchaseSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x70];                                      // 0x0030   (0x0070)  MISSED
	SDK_UNDEFINED(16,516) /* FMulticastInlineDelegate */ __um(OnUnexpectedPurchaseReceipt);                        // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x85b6b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystem.IsAllowedToPurchase
	// bool IsAllowedToPurchase(FUniqueNetIdRepl UserId);                                                                       // [0x85b3f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystem.FinalizePurchase
	// void FinalizePurchase(FUniqueNetIdRepl UserId, FString ReceiptId);                                                       // [0x85a120] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystemQueryReceipts
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlinePurchaseSubsystemQueryReceipts : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,517) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,518) /* FMulticastInlineDelegate */ __um(OnQueryReceiptsComplete);                            // 0x0040   (0x0010)  
	class UOnlinePurchaseSubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0028)  
	bool                                               __Store__bRestoreReceipts;                                  // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0091   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystemQueryReceipts.QueryReceipts
	// class UOnlinePurchaseSubsystemQueryReceipts* QueryReceipts(class UOnlinePurchaseSubsystem* Subsystem, FUniqueNetIdRepl UserId, bool bRestoreReceipts); // [0x85bd50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystemFinalizeReceiptValidationInfo
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,519) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,520) /* FMulticastInlineDelegate */ __um(OnFinalizeReceiptValidationInfoComplete);            // 0x0040   (0x0010)  
	class UOnlinePurchaseSubsystem*                    __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0028)  
	FString                                            __Store__InReceiptValidationInfo;                           // 0x0090   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePurchaseSubsystemFinalizeReceiptValidationInfo.FinalizeReceiptValidationInfo
	// class UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo* FinalizeReceiptValidationInfo(class UOnlinePurchaseSubsystem* Subsystem, FUniqueNetIdRepl UserId, FString InReceiptValidationInfo); // [0x85a2d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineRecentPlayerRef
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UOnlineRecentPlayerRef : public UOnlineUserRef
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0048   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineRecentPlayerRef.GetLastSeen
	// FDateTime GetLastSeen();                                                                                                 // [0x85b170] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem
/// Size: 0x0280 (640 bytes) (0x000030 - 0x000280) align 8 MaxSize: 0x0280
class UOnlineSessionSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x110];                                     // 0x0030   (0x0110)  MISSED
	SDK_UNDEFINED(16,521) /* FMulticastInlineDelegate */ __um(OnCreateSessionComplete);                            // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,522) /* FMulticastInlineDelegate */ __um(OnStartSessionComplete);                             // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,523) /* FMulticastInlineDelegate */ __um(OnUpdateSessionComplete);                            // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,524) /* FMulticastInlineDelegate */ __um(OnEndSessionComplete);                               // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,525) /* FMulticastInlineDelegate */ __um(OnDestroySessionComplete);                           // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,526) /* FMulticastInlineDelegate */ __um(OnMatchmakingComplete);                              // 0x0190   (0x0010)  
	SDK_UNDEFINED(16,527) /* FMulticastInlineDelegate */ __um(OnCancelMatchmakingComplete);                        // 0x01A0   (0x0010)  
	SDK_UNDEFINED(16,528) /* FMulticastInlineDelegate */ __um(OnFindSessionsComplete);                             // 0x01B0   (0x0010)  
	SDK_UNDEFINED(16,529) /* FMulticastInlineDelegate */ __um(OnCancelFindSessionsComplete);                       // 0x01C0   (0x0010)  
	SDK_UNDEFINED(16,530) /* FMulticastInlineDelegate */ __um(OnPingSearchResultsComplete);                        // 0x01D0   (0x0010)  
	SDK_UNDEFINED(16,531) /* FMulticastInlineDelegate */ __um(OnJoinSessionComplete);                              // 0x01E0   (0x0010)  
	SDK_UNDEFINED(16,532) /* FMulticastInlineDelegate */ __um(OnSessionParticipantsChange);                        // 0x01F0   (0x0010)  
	SDK_UNDEFINED(16,533) /* FMulticastInlineDelegate */ __um(OnQosDataRequested);                                 // 0x0200   (0x0010)  
	SDK_UNDEFINED(16,534) /* FMulticastInlineDelegate */ __um(OnSessionCustomDataChanged);                         // 0x0210   (0x0010)  
	SDK_UNDEFINED(16,535) /* FMulticastInlineDelegate */ __um(OnFindFriendSessionComplete);                        // 0x0220   (0x0010)  
	SDK_UNDEFINED(16,536) /* FMulticastInlineDelegate */ __um(OnSessionUserInviteAccepted);                        // 0x0230   (0x0010)  
	SDK_UNDEFINED(16,537) /* FMulticastInlineDelegate */ __um(OnSessionInviteReceived);                            // 0x0240   (0x0010)  
	SDK_UNDEFINED(16,538) /* FMulticastInlineDelegate */ __um(OnRegisterPlayersComplete);                          // 0x0250   (0x0010)  
	SDK_UNDEFINED(16,539) /* FMulticastInlineDelegate */ __um(OnUnregisterPlayersComplete);                        // 0x0260   (0x0010)  
	SDK_UNDEFINED(16,540) /* FMulticastInlineDelegate */ __um(OnSessionFailure);                                   // 0x0270   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.SendSessionInviteToFriends
	// bool SendSessionInviteToFriends(FUniqueNetIdRepl LocalUserId, FName SessionName, TArray<FUniqueNetIdRepl> Friends);      // [0x85c540] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.SendSessionInviteToFriend
	// bool SendSessionInviteToFriend(FUniqueNetIdRepl LocalUserId, FName SessionName, FUniqueNetIdRepl Friend);                // [0x85c330] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.RemoveNamedSession
	// void RemoveNamedSession(FName SessionName);                                                                              // [0x85c2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x85b6e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.IsPlayerInSession
	// bool IsPlayerInSession(FName SessionName, FUniqueNetIdRepl UniqueId);                                                    // [0x85b520] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.HasPresenceSession
	// bool HasPresenceSession();                                                                                               // [0x85b3c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetSessionState
	// EOnlineSessionState_ GetSessionState(FName SessionName);                                                                 // [0x85b320] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetSessionSettings
	// class UOnlineSessionSettings* GetSessionSettings(FName SessionName);                                                     // [0x85b280] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetNumSessions
	// int32_t GetNumSessions();                                                                                                // [0x85b250] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.GetNamedSession
	// class UNamedOnlineSession* GetNamedSession(FName SessionName);                                                           // [0x85b1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.DumpSessionState
	// void DumpSessionState();                                                                                                 // [0x85a030] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystem.CreateSessionIdFromString
	// FUniqueNetIdRepl CreateSessionIdFromString(FString SessionIdStr);                                                        // [0x859e10] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineSessionSettingBP
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FOnlineSessionSettingBP
{ 
	FVariantDataBP                                     Data;                                                       // 0x0000   (0x0028)  
	EOnlineDataAdvertisementType_                      AdvertisementType;                                          // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            ID;                                                         // 0x002C   (0x0004)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineSessionSettingsBP
/// Size: 0x0128 (296 bytes) (0x000000 - 0x000128) align 8 MaxSize: 0x0128
struct FOnlineSessionSettingsBP
{ 
	unsigned char                                      UnknownData00_7[0xC0];                                      // 0x0000   (0x00C0)  MISSED
	int32_t                                            NumPublicConnections;                                       // 0x00C0   (0x0004)  
	int32_t                                            NumPrivateConnections;                                      // 0x00C4   (0x0004)  
	bool                                               bShouldAdvertise;                                           // 0x00C8   (0x0001)  
	bool                                               bAllowJoinInProgress;                                       // 0x00C9   (0x0001)  
	bool                                               bIsLANMatch;                                                // 0x00CA   (0x0001)  
	bool                                               bIsDedicated;                                               // 0x00CB   (0x0001)  
	bool                                               bUsesStats;                                                 // 0x00CC   (0x0001)  
	bool                                               bAllowInvites;                                              // 0x00CD   (0x0001)  
	bool                                               bUsesPresence;                                              // 0x00CE   (0x0001)  
	bool                                               bAllowJoinViaPresence;                                      // 0x00CF   (0x0001)  
	bool                                               bAllowJoinViaPresenceFriendsOnly;                           // 0x00D0   (0x0001)  
	bool                                               bAntiCheatProtected;                                        // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00D2   (0x0002)  MISSED
	int32_t                                            BuildUniqueId;                                              // 0x00D4   (0x0004)  
	TMap<FName, FOnlineSessionSettingBP>               Settings;                                                   // 0x00D8   (0x0050)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemCreateSession
/// Size: 0x01C8 (456 bytes) (0x000030 - 0x0001C8) align 8 MaxSize: 0x01C8
class UOnlineSessionSubsystemCreateSession : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,541) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,542) /* FMulticastInlineDelegate */ __um(OnCreateSessionComplete);                            // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__HostingPlayerId;                                   // 0x0070   (0x0028)  
	FName                                              __Store__SessionName;                                       // 0x0098   (0x0008)  
	FOnlineSessionSettingsBP                           __Store__NewSessionSettings;                                // 0x00A0   (0x0128)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemCreateSession.CreateSession
	// class UOnlineSessionSubsystemCreateSession* CreateSession(class UOnlineSessionSubsystem* Subsystem, FUniqueNetIdRepl HostingPlayerId, FName SessionName, FOnlineSessionSettingsBP NewSessionSettings); // [0x859a30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemStartSession
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UOnlineSessionSubsystemStartSession : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,543) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,544) /* FMulticastInlineDelegate */ __um(OnStartSessionComplete);                             // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FName                                              __Store__SessionName;                                       // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemStartSession.StartSession
	// class UOnlineSessionSubsystemStartSession* StartSession(class UOnlineSessionSubsystem* Subsystem, FName SessionName);    // [0x85cee0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemUpdateSession
/// Size: 0x01A8 (424 bytes) (0x000030 - 0x0001A8) align 8 MaxSize: 0x01A8
class UOnlineSessionSubsystemUpdateSession : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,545) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,546) /* FMulticastInlineDelegate */ __um(OnUpdateSessionComplete);                            // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FName                                              __Store__SessionName;                                       // 0x0070   (0x0008)  
	FOnlineSessionSettingsBP                           __Store__UpdatedSessionSettings;                            // 0x0078   (0x0128)  
	bool                                               __Store__bShouldRefreshOnlineData;                          // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x01A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemUpdateSession.UpdateSession
	// class UOnlineSessionSubsystemUpdateSession* UpdateSession(class UOnlineSessionSubsystem* Subsystem, FName SessionName, FOnlineSessionSettingsBP UpdatedSessionSettings, bool bShouldRefreshOnlineData); // [0x85d330] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemEndSession
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UOnlineSessionSubsystemEndSession : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,547) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,548) /* FMulticastInlineDelegate */ __um(OnEndSessionComplete);                               // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FName                                              __Store__SessionName;                                       // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemEndSession.EndSession
	// class UOnlineSessionSubsystemEndSession* EndSession(class UOnlineSessionSubsystem* Subsystem, FName SessionName);        // [0x85a050] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemDestroySession
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UOnlineSessionSubsystemDestroySession : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,549) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,550) /* FMulticastInlineDelegate */ __um(OnDestroySessionComplete);                           // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FName                                              __Store__SessionName;                                       // 0x0068   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemDestroySession.DestroySession
	// class UOnlineSessionSubsystemDestroySession* DestroySession(class UOnlineSessionSubsystem* Subsystem, FName SessionName); // [0x859f60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemStartMatchmaking
/// Size: 0x01B8 (440 bytes) (0x000030 - 0x0001B8) align 8 MaxSize: 0x01B8
class UOnlineSessionSubsystemStartMatchmaking : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,551) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,552) /* FMulticastInlineDelegate */ __um(OnMatchmakingComplete);                              // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	TArray<FUniqueNetIdRepl>                           __Store__LocalPlayers;                                      // 0x0070   (0x0010)  
	FName                                              __Store__SessionName;                                       // 0x0080   (0x0008)  
	FOnlineSessionSettingsBP                           __Store__NewSessionSettings;                                // 0x0088   (0x0128)  
	class UOnlineSessionSearch*                        __Store__SearchSettings;                                    // 0x01B0   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemStartMatchmaking.StartMatchmaking
	// class UOnlineSessionSubsystemStartMatchmaking* StartMatchmaking(class UOnlineSessionSubsystem* Subsystem, TArray<FUniqueNetIdRepl> LocalPlayers, FName SessionName, FOnlineSessionSettingsBP NewSessionSettings, class UOnlineSessionSearch* SearchSettings); // [0x85ca60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemCancelMatchmaking
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineSessionSubsystemCancelMatchmaking : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,553) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,554) /* FMulticastInlineDelegate */ __um(OnCancelMatchmakingComplete);                        // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__SearchingPlayerId;                                 // 0x0070   (0x0028)  
	FName                                              __Store__SessionName;                                       // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemCancelMatchmaking.CancelMatchmaking
	// class UOnlineSessionSubsystemCancelMatchmaking* CancelMatchmaking(class UOnlineSessionSubsystem* Subsystem, FUniqueNetIdRepl SearchingPlayerId, FName SessionName); // [0x8598a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemFindSessions
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineSessionSubsystemFindSessions : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,555) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,556) /* FMulticastInlineDelegate */ __um(OnFindSessionsComplete);                             // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__SearchingPlayerId;                                 // 0x0070   (0x0028)  
	class UOnlineSessionSearch*                        __Store__SearchSettings;                                    // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemFindSessions.FindSessions
	// class UOnlineSessionSubsystemFindSessions* FindSessions(class UOnlineSessionSubsystem* Subsystem, FUniqueNetIdRepl SearchingPlayerId, class UOnlineSessionSearch* SearchSettings); // [0x85a9c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemFindSessionById
/// Size: 0x00F0 (240 bytes) (0x000030 - 0x0000F0) align 8 MaxSize: 0x00F0
class UOnlineSessionSubsystemFindSessionById : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,557) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,558) /* FMulticastInlineDelegate */ __um(OnSingleSessionResultComplete);                      // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__SearchingUserId;                                   // 0x0068   (0x0028)  
	FUniqueNetIdRepl                                   __Store__SessionId;                                         // 0x0090   (0x0028)  
	FUniqueNetIdRepl                                   __Store__FriendId;                                          // 0x00B8   (0x0028)  
	FString                                            __Store__UserData;                                          // 0x00E0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemFindSessionById.FindSessionById
	// class UOnlineSessionSubsystemFindSessionById* FindSessionById(class UOnlineSessionSubsystem* Subsystem, FUniqueNetIdRepl SearchingUserId, FUniqueNetIdRepl SessionId, FUniqueNetIdRepl FriendId, FString UserData); // [0x85a650] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemCancelFindSessions
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UOnlineSessionSubsystemCancelFindSessions : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,559) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,560) /* FMulticastInlineDelegate */ __um(OnCancelFindSessionsComplete);                       // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0068   (0x0008)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemCancelFindSessions.CancelFindSessions
	// class UOnlineSessionSubsystemCancelFindSessions* CancelFindSessions(class UOnlineSessionSubsystem* Subsystem);           // [0x859810] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineSessionBP
/// Size: 0x0180 (384 bytes) (0x000000 - 0x000180) align 8 MaxSize: 0x0180
struct FOnlineSessionBP
{ 
	FUniqueNetIdRepl                                   OwningUserId;                                               // 0x0000   (0x0028)  
	FString                                            OwningUserName;                                             // 0x0028   (0x0010)  
	FOnlineSessionSettingsBP                           SessionSettings;                                            // 0x0038   (0x0128)  
	class UOnlineSessionInfo*                          SessionInfo;                                                // 0x0160   (0x0008)  
	int32_t                                            NumOpenPrivateConnections;                                  // 0x0168   (0x0004)  
	int32_t                                            NumOpenPublicConnections;                                   // 0x016C   (0x0004)  
	FString                                            SessionId;                                                  // 0x0170   (0x0010)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineSessionSearchResultBP
/// Size: 0x0188 (392 bytes) (0x000000 - 0x000188) align 8 MaxSize: 0x0188
struct FOnlineSessionSearchResultBP
{ 
	FOnlineSessionBP                                   Session;                                                    // 0x0000   (0x0180)  
	int32_t                                            PingInMs;                                                   // 0x0180   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0184   (0x0004)  MISSED
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemPingSearchResults
/// Size: 0x01F8 (504 bytes) (0x000030 - 0x0001F8) align 8 MaxSize: 0x01F8
class UOnlineSessionSubsystemPingSearchResults : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,561) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,562) /* FMulticastInlineDelegate */ __um(OnPingSearchResultsComplete);                        // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FOnlineSessionSearchResultBP                       __Store__SearchResult;                                      // 0x0070   (0x0188)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemPingSearchResults.PingSearchResults
	// class UOnlineSessionSubsystemPingSearchResults* PingSearchResults(class UOnlineSessionSubsystem* Subsystem, FOnlineSessionSearchResultBP SearchResult); // [0x85ba00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemJoinSession
/// Size: 0x0228 (552 bytes) (0x000030 - 0x000228) align 8 MaxSize: 0x0228
class UOnlineSessionSubsystemJoinSession : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,563) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,564) /* FMulticastInlineDelegate */ __um(OnJoinSessionComplete);                              // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0070   (0x0028)  
	FName                                              __Store__SessionName;                                       // 0x0098   (0x0008)  
	FOnlineSessionSearchResultBP                       __Store__DesiredSession;                                    // 0x00A0   (0x0188)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemJoinSession.JoinSession
	// class UOnlineSessionSubsystemJoinSession* JoinSession(class UOnlineSessionSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, FName SessionName, FOnlineSessionSearchResultBP DesiredSession); // [0x85b710] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemFindFriendSession
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineSessionSubsystemFindFriendSession : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,565) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,566) /* FMulticastInlineDelegate */ __um(OnFindFriendSessionComplete);                        // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__LocalUserNum;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FUniqueNetIdRepl                                   __Store__Friend;                                            // 0x0078   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemFindFriendSession.FindFriendSession
	// class UOnlineSessionSubsystemFindFriendSession* FindFriendSession(class UOnlineSessionSubsystem* Subsystem, int32_t LocalUserNum, FUniqueNetIdRepl Friend); // [0x85a4c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemRegisterPlayers
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UOnlineSessionSubsystemRegisterPlayers : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,567) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,568) /* FMulticastInlineDelegate */ __um(OnRegisterPlayersComplete);                          // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FName                                              __Store__SessionName;                                       // 0x0070   (0x0008)  
	TArray<FUniqueNetIdRepl>                           __Store__Players;                                           // 0x0078   (0x0010)  
	bool                                               __Store__bWasInvited;                                       // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0089   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemRegisterPlayers.RegisterPlayers
	// class UOnlineSessionSubsystemRegisterPlayers* RegisterPlayers(class UOnlineSessionSubsystem* Subsystem, FName SessionName, TArray<FUniqueNetIdRepl> Players, bool bWasInvited); // [0x85c070] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemUnregisterPlayers
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UOnlineSessionSubsystemUnregisterPlayers : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,569) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,570) /* FMulticastInlineDelegate */ __um(OnUnregisterPlayersComplete);                        // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FName                                              __Store__SessionName;                                       // 0x0070   (0x0008)  
	TArray<FUniqueNetIdRepl>                           __Store__Players;                                           // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemUnregisterPlayers.UnregisterPlayers
	// class UOnlineSessionSubsystemUnregisterPlayers* UnregisterPlayers(class UOnlineSessionSubsystem* Subsystem, FName SessionName, TArray<FUniqueNetIdRepl> Players); // [0x85d140] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemRegisterLocalPlayer
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineSessionSubsystemRegisterLocalPlayer : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,571) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,572) /* FMulticastInlineDelegate */ __um(OnRegisterLocalPlayerComplete);                      // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__PlayerId;                                          // 0x0068   (0x0028)  
	FName                                              __Store__SessionName;                                       // 0x0090   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemRegisterLocalPlayer.RegisterLocalPlayer
	// class UOnlineSessionSubsystemRegisterLocalPlayer* RegisterLocalPlayer(class UOnlineSessionSubsystem* Subsystem, FUniqueNetIdRepl PlayerId, FName SessionName); // [0x85bee0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemUnregisterLocalPlayer
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineSessionSubsystemUnregisterLocalPlayer : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,573) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,574) /* FMulticastInlineDelegate */ __um(OnUnregisterLocalPlayerComplete);                    // 0x0040   (0x0010)  
	class UOnlineSessionSubsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__PlayerId;                                          // 0x0068   (0x0028)  
	FName                                              __Store__SessionName;                                       // 0x0090   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSubsystemUnregisterLocalPlayer.UnregisterLocalPlayer
	// class UOnlineSessionSubsystemUnregisterLocalPlayer* UnregisterLocalPlayer(class UOnlineSessionSubsystem* Subsystem, FUniqueNetIdRepl PlayerId, FName SessionName); // [0x85cfb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSharedCloudSubsystem
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineSharedCloudSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSharedCloudSubsystem.WriteSharedFile
	// bool WriteSharedFile(FUniqueNetIdRepl UserId, FString Filename, class UFileData*& Contents);                             // [0x8611e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSharedCloudSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x8602a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSharedCloudSubsystem.ClearSharedFiles
	// bool ClearSharedFiles();                                                                                                 // [0x85fc00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSharingSubsystem
/// Size: 0x0118 (280 bytes) (0x000030 - 0x000118) align 8 MaxSize: 0x0118
class UOnlineSharingSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0xA8];                                      // 0x0030   (0x00A8)  MISSED
	SDK_UNDEFINED(16,575) /* FMulticastInlineDelegate */ __um(OnRequestNewReadPermissionsComplete);                // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,576) /* FMulticastInlineDelegate */ __um(OnRequestNewPublishPermissionsComplete);             // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,577) /* FMulticastInlineDelegate */ __um(OnReadNewsFeedComplete);                             // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,578) /* FMulticastInlineDelegate */ __um(OnSharePostComplete);                                // 0x0108   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSharingSubsystem.ReadNewsFeed
	// bool ReadNewsFeed(int32_t LocalUserNum, int32_t NumPostsToRead);                                                         // [0x860eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSharingSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x8602d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineStatsSubsystem
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineStatsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineStatsSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x860300] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineStatsSubsystem.GetStats
	// FOnlineStatsUserStatsBP GetStats(FUniqueNetIdRepl StatsUserId);                                                          // [0x860090] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineStatsSubsystemQueryStats
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineStatsSubsystemQueryStats : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,579) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,580) /* FMulticastInlineDelegate */ __um(OnlineStatsQueryUsersStatsComplete);                 // 0x0040   (0x0010)  
	class UOnlineStatsSubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	TArray<FUniqueNetIdRepl>                           __Store__StatUsers;                                         // 0x0090   (0x0010)  
	TArray<FString>                                    __Store__StatNames;                                         // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineStatsSubsystemQueryStats.QueryStats
	// class UOnlineStatsSubsystemQueryStats* QueryStats(class UOnlineStatsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TArray<FUniqueNetIdRepl> StatUsers, TArray<FString> StatNames); // [0x860a00] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineStatUpdateBP
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FOnlineStatUpdateBP
{ 
	EOnlineStatModificationType_                       Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVariantDataBP                                     Value;                                                      // 0x0008   (0x0028)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineStatsUserUpdatedStatsBP
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FOnlineStatsUserUpdatedStatsBP
{ 
	FUniqueNetIdRepl                                   PlayerId;                                                   // 0x0000   (0x0028)  
	TMap<FString, FOnlineStatUpdateBP>                 Stats;                                                      // 0x0028   (0x0050)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineStatsSubsystemUpdateStats
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineStatsSubsystemUpdateStats : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,581) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,582) /* FMulticastInlineDelegate */ __um(OnlineStatsUpdateStatsComplete);                     // 0x0040   (0x0010)  
	class UOnlineStatsSubsystem*                       __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__LocalUserId;                                       // 0x0068   (0x0028)  
	TArray<FOnlineStatsUserUpdatedStatsBP>             __Store__UpdatedUserStats;                                  // 0x0090   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineStatsSubsystemUpdateStats.UpdateStats
	// class UOnlineStatsSubsystemUpdateStats* UpdateStats(class UOnlineStatsSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TArray<FOnlineStatsUserUpdatedStatsBP> UpdatedUserStats); // [0x860f80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineStoreV2Subsystem
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineStoreV2Subsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x70];                                      // 0x0030   (0x0070)  MISSED
	SDK_UNDEFINED(16,583) /* FMulticastInlineDelegate */ __um(OnQueryForAvailablePurchasesComplete);               // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreV2Subsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x860330] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryCategories
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UOnlineStoreV2SubsystemQueryCategories : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,584) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,585) /* FMulticastInlineDelegate */ __um(OnQueryOnlineStoreCategoriesComplete);               // 0x0040   (0x0010)  
	class UOnlineStoreV2Subsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryCategories.QueryCategories
	// class UOnlineStoreV2SubsystemQueryCategories* QueryCategories(class UOnlineStoreV2Subsystem* Subsystem, FUniqueNetIdRepl UserId); // [0x8605e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryOffersById
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineStoreV2SubsystemQueryOffersById : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,586) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,587) /* FMulticastInlineDelegate */ __um(OnQueryOnlineStoreOffersComplete);                   // 0x0040   (0x0010)  
	class UOnlineStoreV2Subsystem*                     __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0028)  
	TArray<FString>                                    __Store__OfferIds;                                          // 0x0090   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryOffersById.QueryOffersById
	// class UOnlineStoreV2SubsystemQueryOffersById* QueryOffersById(class UOnlineStoreV2Subsystem* Subsystem, FUniqueNetIdRepl UserId, TArray<FString> OfferIds); // [0x860750] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineTimeSubsystem
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineTimeSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x70];                                      // 0x0030   (0x0070)  MISSED
	SDK_UNDEFINED(16,588) /* FMulticastInlineDelegate */ __um(OnQueryServerUtcTimeComplete);                       // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineTimeSubsystem.QueryServerUtcTime
	// bool QueryServerUtcTime();                                                                                               // [0x8609d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineTimeSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x860360] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineTimeSubsystem.GetLastServerUtcTime
	// FString GetLastServerUtcTime();                                                                                          // [0x85ffe0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystem
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x0000E0) align 8 MaxSize: 0x00E0
class UOnlineTitleFileSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x80];                                      // 0x0030   (0x0080)  MISSED
	SDK_UNDEFINED(16,589) /* FMulticastInlineDelegate */ __um(OnEnumerateFilesComplete);                           // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,590) /* FMulticastInlineDelegate */ __um(OnReadFileComplete);                                 // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,591) /* FMulticastInlineDelegate */ __um(OnReadFileProgress);                                 // 0x00D0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x860390] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.GetFileList
	// void GetFileList(TArray<FCloudFileHeaderBP>& Files);                                                                     // [0x85fee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.GetFileContents
	// bool GetFileContents(FString Filename, class UFileData*& FileContents);                                                  // [0x85fd90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.DeleteCachedFiles
	// void DeleteCachedFiles(bool bSkipEnumerated);                                                                            // [0x85fc30] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.ClearFiles
	// bool ClearFiles();                                                                                                       // [0x85fbd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystem.ClearFile
	// bool ClearFile(FString Filename);                                                                                        // [0x85fad0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.PagedQueryBP
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPagedQueryBP
{ 
	int32_t                                            Start;                                                      // 0x0000   (0x0004)  
	int32_t                                            Count;                                                      // 0x0004   (0x0004)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystemEnumerateFiles
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UOnlineTitleFileSubsystemEnumerateFiles : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,592) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,593) /* FMulticastInlineDelegate */ __um(OnEnumerateFilesComplete);                           // 0x0040   (0x0010)  
	class UOnlineTitleFileSubsystem*                   __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FPagedQueryBP                                      __Store__Page;                                              // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystemEnumerateFiles.EnumerateFiles
	// class UOnlineTitleFileSubsystemEnumerateFiles* EnumerateFiles(class UOnlineTitleFileSubsystem* Subsystem, FPagedQueryBP Page); // [0x85fcc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystemReadFile
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineTitleFileSubsystemReadFile : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,594) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,595) /* FMulticastInlineDelegate */ __um(OnReadFileComplete);                                 // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,596) /* FMulticastInlineDelegate */ __um(OnReadFileProgress);                                 // 0x0050   (0x0010)  
	class UOnlineTitleFileSubsystem*                   __Store__Subsystem;                                         // 0x0060   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0078   (0x0010)  MISSED
	FString                                            __Store__FileName;                                          // 0x0088   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineTitleFileSubsystemReadFile.ReadFile
	// class UOnlineTitleFileSubsystemReadFile* ReadFile(class UOnlineTitleFileSubsystem* Subsystem, FString Filename);         // [0x860d80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineTournamentSubsystem
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineTournamentSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineTournamentSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x8603c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineTurnBasedSubsystem
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineTurnBasedSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineTurnBasedSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x8603f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineTurnBasedSubsystem.GetMatchDataSize
	// int32_t GetMatchDataSize();                                                                                              // [0x860060] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineTurnBasedSubsystemLoadAllMatches
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UOnlineTurnBasedSubsystemLoadAllMatches : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,597) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,598) /* FMulticastInlineDelegate */ __um(LoadTurnBasedMatchesSignature);                      // 0x0040   (0x0010)  
	class UOnlineTurnBasedSubsystem*                   __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineTurnBasedSubsystemLoadAllMatches.LoadAllMatches
	// class UOnlineTurnBasedSubsystemLoadAllMatches* LoadAllMatches(class UOnlineTurnBasedSubsystem* Subsystem);               // [0x860420] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineTurnBasedSubsystemLoadMatchWithID
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UOnlineTurnBasedSubsystemLoadMatchWithID : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,599) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,600) /* FMulticastInlineDelegate */ __um(LoadTurnBasedMatchWithIDSignature);                  // 0x0040   (0x0010)  
	class UOnlineTurnBasedSubsystem*                   __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FString                                            __Store__MatchID;                                           // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineTurnBasedSubsystemLoadMatchWithID.LoadMatchWithID
	// class UOnlineTurnBasedSubsystemLoadMatchWithID* LoadMatchWithID(class UOnlineTurnBasedSubsystem* Subsystem, FString MatchID); // [0x8604b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem
/// Size: 0x0128 (296 bytes) (0x000030 - 0x000128) align 8 MaxSize: 0x0128
class UOnlineUserCloudSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x98];                                      // 0x0030   (0x0098)  MISSED
	SDK_UNDEFINED(16,601) /* FMulticastInlineDelegate */ __um(OnEnumerateUserFilesComplete);                       // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,602) /* FMulticastInlineDelegate */ __um(OnReadUserFileComplete);                             // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,603) /* FMulticastInlineDelegate */ __um(OnWriteUserFileProgress);                            // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,604) /* FMulticastInlineDelegate */ __um(OnWriteUserFileComplete);                            // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,605) /* FMulticastInlineDelegate */ __um(OnWriteUserFileCanceled);                            // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,606) /* FMulticastInlineDelegate */ __um(OnDeleteUserFileComplete);                           // 0x0118   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.RequestUsageInfo
	// bool RequestUsageInfo(FUniqueNetIdRepl UserId);                                                                          // [0x866e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x865f20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.GetUserFileList
	// void GetUserFileList(FUniqueNetIdRepl UserId, TArray<FCloudFileHeaderBP>& UserFiles);                                    // [0x865700] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.GetFileContents
	// bool GetFileContents(FUniqueNetIdRepl UserId, FString Filename, class UFileData*& FileContents);                         // [0x8652c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.DumpCloudState
	// void DumpCloudState(FUniqueNetIdRepl UserId);                                                                            // [0x8646b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.DumpCloudFileState
	// void DumpCloudFileState(FUniqueNetIdRepl UserId, FString Filename);                                                      // [0x864500] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.ClearFiles
	// bool ClearFiles(FUniqueNetIdRepl UserId);                                                                                // [0x864120] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.ClearFile
	// bool ClearFile(FUniqueNetIdRepl UserId, FString Filename);                                                               // [0x863f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystem.CancelWriteUserFile
	// void CancelWriteUserFile(FUniqueNetIdRepl UserId, FString Filename);                                                     // [0x863db0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystemEnumerateUserFiles
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOnlineUserCloudSubsystemEnumerateUserFiles : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,607) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,608) /* FMulticastInlineDelegate */ __um(OnEnumerateUserFilesComplete);                       // 0x0040   (0x0010)  
	class UOnlineUserCloudSubsystem*                   __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0070   (0x0028)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystemEnumerateUserFiles.EnumerateUserFiles
	// class UOnlineUserCloudSubsystemEnumerateUserFiles* EnumerateUserFiles(class UOnlineUserCloudSubsystem* Subsystem, FUniqueNetIdRepl UserId); // [0x8647d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystemReadUserFile
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnlineUserCloudSubsystemReadUserFile : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,609) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,610) /* FMulticastInlineDelegate */ __um(OnReadUserFileComplete);                             // 0x0040   (0x0010)  
	class UOnlineUserCloudSubsystem*                   __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0070   (0x0028)  
	FString                                            __Store__FileName;                                          // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystemReadUserFile.ReadUserFile
	// class UOnlineUserCloudSubsystemReadUserFile* ReadUserFile(class UOnlineUserCloudSubsystem* Subsystem, FUniqueNetIdRepl UserId, FString Filename); // [0x866a90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystemWriteUserFile
/// Size: 0x00E8 (232 bytes) (0x000030 - 0x0000E8) align 8 MaxSize: 0x00E8
class UOnlineUserCloudSubsystemWriteUserFile : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,611) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,612) /* FMulticastInlineDelegate */ __um(OnWriteUserFileComplete);                            // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,613) /* FMulticastInlineDelegate */ __um(OnWriteUserFileProgress);                            // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,614) /* FMulticastInlineDelegate */ __um(OnWriteUserFileCanceled);                            // 0x0060   (0x0010)  
	class UOnlineUserCloudSubsystem*                   __Store__Subsystem;                                         // 0x0070   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0088   (0x0018)  MISSED
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x00A0   (0x0028)  
	FString                                            __Store__FileName;                                          // 0x00C8   (0x0010)  
	class UFileData*                                   __Store__FileContents;                                      // 0x00D8   (0x0008)  
	bool                                               __Store__bCompressBeforeUpload;                             // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00E1   (0x0007)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystemWriteUserFile.WriteUserFile
	// class UOnlineUserCloudSubsystemWriteUserFile* WriteUserFile(class UOnlineUserCloudSubsystem* Subsystem, FUniqueNetIdRepl UserId, FString Filename, class UFileData* FileContents, bool bCompressBeforeUpload); // [0x8677a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystemDeleteUserFile
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineUserCloudSubsystemDeleteUserFile : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,615) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,616) /* FMulticastInlineDelegate */ __um(OnDeleteUserFileComplete);                           // 0x0040   (0x0010)  
	class UOnlineUserCloudSubsystem*                   __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0070   (0x0028)  
	FString                                            __Store__FileName;                                          // 0x0098   (0x0010)  
	bool                                               __Store__bShouldCloudDelete;                                // 0x00A8   (0x0001)  
	bool                                               __Store__bShouldLocallyDelete;                              // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x00AA   (0x0006)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserCloudSubsystemDeleteUserFile.DeleteUserFile
	// class UOnlineUserCloudSubsystemDeleteUserFile* DeleteUserFile(class UOnlineUserCloudSubsystem* Subsystem, FUniqueNetIdRepl UserId, FString Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete); // [0x864270] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.UserOnlineAccountRef
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UUserOnlineAccountRef : public UOnlineUserRef
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0048   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.UserOnlineAccountRef.SetUserAttribute
	// bool SetUserAttribute(FString Key, FString Value);                                                                       // [0x866fc0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.UserOnlineAccountRef.GetAuthAttribute
	// FString GetAuthAttribute(FString Key, bool& Found);                                                                      // [0x864bf0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.UserOnlineAccountRef.GetAccessToken
	// FString GetAccessToken();                                                                                                // [0x864940] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserSubsystem
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineUserSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x78];                                      // 0x0030   (0x0078)  MISSED
	SDK_UNDEFINED(16,617) /* FMulticastInlineDelegate */ __um(OnQueryUserInfoComplete);                            // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x865f50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserSubsystem.GetUserInfo
	// class UOnlineUserRef* GetUserInfo(int32_t LocalUserNum, FUniqueNetIdRepl UserId);                                        // [0x865950] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserSubsystem.GetExternalIdMappings
	// void GetExternalIdMappings(FExternalIdQueryOptionsBP QueryOptions, TArray<FString> ExternalIds, TArray<FUniqueNetIdRepl>& OutIds); // [0x864fe0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserSubsystem.GetExternalIdMapping
	// FUniqueNetIdRepl GetExternalIdMapping(FExternalIdQueryOptionsBP QueryOptions, FString ExternalId);                       // [0x864e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserSubsystem.GetAllUserInfo
	// bool GetAllUserInfo(int32_t LocalUserNum, TArray<UOnlineUserRef*>& OutUsers);                                            // [0x8649c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserSubsystemQueryUserInfo
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UOnlineUserSubsystemQueryUserInfo : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,618) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,619) /* FMulticastInlineDelegate */ __um(OnQueryUserInfoComplete);                            // 0x0040   (0x0010)  
	class UOnlineUserSubsystem*                        __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	int32_t                                            __Store__LocalUserNum;                                      // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<FUniqueNetIdRepl>                           __Store__UserIds;                                           // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserSubsystemQueryUserInfo.QueryUserInfo
	// class UOnlineUserSubsystemQueryUserInfo* QueryUserInfo(class UOnlineUserSubsystem* Subsystem, int32_t LocalUserNum, TArray<FUniqueNetIdRepl> UserIds); // [0x8668a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserSubsystemQueryUserIdMapping
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOnlineUserSubsystemQueryUserIdMapping : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,620) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,621) /* FMulticastInlineDelegate */ __um(OnQueryUserMappingComplete);                         // 0x0040   (0x0010)  
	class UOnlineUserSubsystem*                        __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0028)  
	FString                                            __Store__DisplayNameOrEmail;                                // 0x0090   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserSubsystemQueryUserIdMapping.QueryUserIdMapping
	// class UOnlineUserSubsystemQueryUserIdMapping* QueryUserIdMapping(class UOnlineUserSubsystem* Subsystem, FUniqueNetIdRepl UserId, FString DisplayNameOrEmail); // [0x8666b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemBlueprints.ExternalIdQueryOptionsBP
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FExternalIdQueryOptionsBP
{ 
	bool                                               bLookupByDisplayName;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            AuthType;                                                   // 0x0008   (0x0010)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineUserSubsystemQueryExternalIdMappings
/// Size: 0x00B8 (184 bytes) (0x000030 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOnlineUserSubsystemQueryExternalIdMappings : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,622) /* FMulticastInlineDelegate */ __um(OnCallFailed);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,623) /* FMulticastInlineDelegate */ __um(OnQueryExternalIdMappingsComplete);                  // 0x0040   (0x0010)  
	class UOnlineUserSubsystem*                        __Store__Subsystem;                                         // 0x0050   (0x0008)  
	FString                                            __Store__CallUniquenessId;                                  // 0x0058   (0x0010)  
	FUniqueNetIdRepl                                   __Store__UserId;                                            // 0x0068   (0x0028)  
	FExternalIdQueryOptionsBP                          __Store__QueryOptions;                                      // 0x0090   (0x0018)  
	TArray<FString>                                    __Store__ExternalIds;                                       // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineUserSubsystemQueryExternalIdMappings.QueryExternalIdMappings
	// class UOnlineUserSubsystemQueryExternalIdMappings* QueryExternalIdMappings(class UOnlineUserSubsystem* Subsystem, FUniqueNetIdRepl UserId, FExternalIdQueryOptionsBP QueryOptions, TArray<FString> ExternalIds); // [0x8663a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineVoiceSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x70];                                      // 0x0030   (0x0070)  MISSED
	SDK_UNDEFINED(16,624) /* FMulticastInlineDelegate */ __um(OnPlayerTalkingStateChanged);                        // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.UnregisterRemoteTalker
	// bool UnregisterRemoteTalker(FUniqueNetIdRepl UniqueId);                                                                  // [0x867670] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.UnregisterLocalTalkers
	// void UnregisterLocalTalkers();                                                                                           // [0x867650] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.UnregisterLocalTalker
	// bool UnregisterLocalTalker(int64_t LocalUserNum);                                                                        // [0x8675b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.UnmuteRemoteTalker
	// bool UnmuteRemoteTalker(int32_t LocalUserNum, FUniqueNetIdRepl PlayerId, bool bIsSystemWide);                            // [0x867420] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.StopNetworkedVoice
	// void StopNetworkedVoice(int32_t LocalUserNum);                                                                           // [0x867390] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.StartNetworkedVoice
	// void StartNetworkedVoice(int32_t LocalUserNum);                                                                          // [0x867300] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.RemoveAllRemoteTalkers
	// void RemoveAllRemoteTalkers();                                                                                           // [0x866e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.RegisterRemoteTalker
	// bool RegisterRemoteTalker(FUniqueNetIdRepl UniqueId);                                                                    // [0x866d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.RegisterLocalTalkers
	// void RegisterLocalTalkers();                                                                                             // [0x866d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.RegisterLocalTalker
	// bool RegisterLocalTalker(int64_t LocalUserNum);                                                                          // [0x866c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.ProcessMuteChangeNotification
	// void ProcessMuteChangeNotification();                                                                                    // [0x866380] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.PatchRemoteTalkerOutputToEndpoint
	// bool PatchRemoteTalkerOutputToEndpoint(FString InDeviceName, bool bMuteInGameOutput);                                    // [0x866240] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.PatchLocalTalkerOutputToEndpoint
	// bool PatchLocalTalkerOutputToEndpoint(FString InDeviceName);                                                             // [0x866140] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.MuteRemoteTalker
	// bool MuteRemoteTalker(int32_t LocalUserNum, FUniqueNetIdRepl PlayerId, bool bIsSystemWide);                              // [0x865fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsSubsystemAvailable
	// bool IsSubsystemAvailable();                                                                                             // [0x865f80] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsRemotePlayerTalking
	// bool IsRemotePlayerTalking(FUniqueNetIdRepl UniqueId);                                                                   // [0x865df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsMuted
	// bool IsMuted(int64_t LocalUserNum, FUniqueNetIdRepl UniqueId);                                                           // [0x865c80] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsLocalPlayerTalking
	// bool IsLocalPlayerTalking(int64_t LocalUserNum);                                                                         // [0x865be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.IsHeadsetPresent
	// bool IsHeadsetPresent(int64_t LocalUserNum);                                                                             // [0x865b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.GetVoiceDebugState
	// FString GetVoiceDebugState();                                                                                            // [0x865ac0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.GetNumLocalTalkers
	// int32_t GetNumLocalTalkers();                                                                                            // [0x8654c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.GetAmplitudeOfRemoteTalker
	// float GetAmplitudeOfRemoteTalker(FUniqueNetIdRepl PlayerId);                                                             // [0x864ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.DisconnectAllEndpoints
	// void DisconnectAllEndpoints();                                                                                           // [0x8644e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineVoiceSubsystem.ClearVoicePackets
	// void ClearVoicePackets();                                                                                                // [0x864250] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.FileData
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UFileData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOnlineLeaderboardRead : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.SetSortedColumn
	// void SetSortedColumn(FName SortedColumn);                                                                                // [0x86e650] Final|Native|Private|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.SetLeaderboardName
	// void SetLeaderboardName(FName LeaderboardName);                                                                          // [0x86e280] Final|Native|Private|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.SetColumns
	// void SetColumns(TArray<FColumnMetaDataBP> InColumns);                                                                    // [0x86e190] Final|Native|Private|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetSortedColumn
	// FName GetSortedColumn();                                                                                                 // [0x86da20] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetRows
	// TArray<FOnlineStatsRowBP> GetRows();                                                                                     // [0x86d6f0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetReadState
	// EOnlineAsyncTaskState_ GetReadState();                                                                                   // [0x86d640] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetLeaderboardName
	// FName GetLeaderboardName();                                                                                              // [0x86d4f0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.GetColumns
	// TArray<FColumnMetaDataBP> GetColumns();                                                                                  // [0x86d2d0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLeaderboardRead.FindPlayerRecord
	// FOnlineStatsRowBP FindPlayerRecord(FUniqueNetIdRepl UserId, bool& OutFound);                                             // [0x86cf50] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLeaderboardWrite
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOnlineLeaderboardWrite : public UObject
{ 
public:
};

/// Class /Script/OnlineSubsystemBlueprints.LobbyId
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULobbyId : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.LobbyId.ToDebugString
	// FString ToDebugString();                                                                                                 // [0x86e6e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.Lobby
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULobby : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.Lobby.GetOwnerId
	// FUniqueNetIdRepl GetOwnerId();                                                                                           // [0x86d530] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.Lobby.GetId
	// class ULobbyId* GetId();                                                                                                 // [0x86d440] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbyTransaction
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOnlineLobbyTransaction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetPublic
	// void SetPublic(bool Public);                                                                                             // [0x86e5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetMetadataByMap
	// void SetMetadataByMap(TMap<FString, FVariantDataBP>& MetaData);                                                          // [0x86e4a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetMetadata
	// void SetMetadata(FString Key, FVariantDataBP& Value);                                                                    // [0x86e3a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetLocked
	// void SetLocked(bool Locked);                                                                                             // [0x86e310] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyTransaction.SetCapacity
	// void SetCapacity(int64_t Capacity);                                                                                      // [0x86e100] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyTransaction.DeleteMetadataByArray
	// void DeleteMetadataByArray(TArray<FString>& MetadataKeys);                                                               // [0x86ce80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyTransaction.DeleteMetadata
	// void DeleteMetadata(FString Key);                                                                                        // [0x86cde0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOnlineLobbyMemberTransaction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction.SetMetadataByMap
	// void SetMetadataByMap(TMap<FString, FVariantDataBP>& MetaData);                                                          // [0x86e4a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction.SetMetadata
	// void SetMetadata(FString Key, FVariantDataBP& Value);                                                                    // [0x86e3a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction.DeleteMetadataByArray
	// void DeleteMetadataByArray(TArray<FString>& MetadataKeys);                                                               // [0x86ce80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction.DeleteMetadata
	// void DeleteMetadata(FString Key);                                                                                        // [0x86cde0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.Party
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UParty : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.Party.GetPartyTypeId
	// int64_t GetPartyTypeId();                                                                                                // [0x86d610] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.Party.GetPartyId
	// class UPartyId* GetPartyId();                                                                                            // [0x86d5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.Party.GetLeaderId
	// FUniqueNetIdRepl GetLeaderId();                                                                                          // [0x86d470] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.BlueprintPartyMember
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UBlueprintPartyMember : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0028   (0x0020)  MISSED
	SDK_UNDEFINED(16,625) /* FMulticastInlineDelegate */ __um(OnAttributeChanged);                                 // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,626) /* FMulticastInlineDelegate */ __um(OnConnectionStatusChanged);                          // 0x0058   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.BlueprintPartyMember.GetUserId
	// FUniqueNetIdRepl GetUserId();                                                                                            // [0x86dc70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.BlueprintPartyMember.GetUserAttribute
	// bool GetUserAttribute(FString AttrName, FString& OutAttrValue);                                                          // [0x86db60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.BlueprintPartyMember.GetRealName
	// FString GetRealName();                                                                                                   // [0x86d670] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.BlueprintPartyMember.GetDisplayName
	// FString GetDisplayName(FString Platform);                                                                                // [0x86d350] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.ReadablePartyData
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UReadablePartyData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.ReadablePartyData.GetAttribute
	// void GetAttribute(FString AttrName, bool& OutFound, FVariantDataBP& OutAttrValue);                                       // [0x86d170] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/OnlineSubsystemBlueprints.MutablePartyData
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UMutablePartyData : public UReadablePartyData
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.MutablePartyData.SetAttribute
	// void SetAttribute(FString AttrName, FVariantDataBP AttrValue);                                                           // [0x86df90] Final|Native|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemBlueprints.MutablePartyData.RemoveAttribute
	// void RemoveAttribute(FString AttrName);                                                                                  // [0x86def0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemBlueprints.PartyId
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPartyId : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.PartyId.ToDebugString
	// FString ToDebugString();                                                                                                 // [0x86e6e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlinePartyJoinInfo
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOnlinePartyJoinInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartyJoinInfo.ToDebugString
	// FString ToDebugString();                                                                                                 // [0x86e780] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartyJoinInfo.GetSourceUserId
	// FUniqueNetIdRepl GetSourceUserId();                                                                                      // [0x86dae0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartyJoinInfo.GetSourceDisplayName
	// FString GetSourceDisplayName();                                                                                          // [0x86da60] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemBlueprints.OnlinePartyJoinInfo.GetPartyId
	// class UPartyId* GetPartyId();                                                                                            // [0x86d5b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionInfo
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOnlineSessionInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSettings
/// Size: 0x0150 (336 bytes) (0x000028 - 0x000150) align 8 MaxSize: 0x0150
class UOnlineSessionSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x128];                                     // 0x0028   (0x0128)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSettings.GetValue
	// FOnlineSessionSettingsBP GetValue();                                                                                     // [0x86de30] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/OnlineSubsystemBlueprints.NamedOnlineSession
/// Size: 0x01F8 (504 bytes) (0x000028 - 0x0001F8) align 8 MaxSize: 0x01F8
class UNamedOnlineSession : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x1D0];                                     // 0x0028   (0x01D0)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.NamedOnlineSession.GetValue
	// FNamedOnlineSessionBP GetValue();                                                                                        // [0x86dcf0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/OnlineSubsystemBlueprints.SessionSearchParamBP
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FSessionSearchParamBP
{ 
	FVariantDataBP                                     Data;                                                       // 0x0000   (0x0028)  
	EOnlineComparisonOp_                               Op;                                                         // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            ID;                                                         // 0x002C   (0x0004)  
};

/// Class /Script/OnlineSubsystemBlueprints.OnlineSessionSearch
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnlineSessionSearch : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0028   (0x0020)  MISSED
	int32_t                                            MaxSearchResults;                                           // 0x0048   (0x0004)  
	bool                                               bIsLanQuery;                                                // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	int32_t                                            PingBucketSize;                                             // 0x0050   (0x0004)  
	int32_t                                            PlatformHash;                                               // 0x0054   (0x0004)  
	float                                              TimeoutInSeconds;                                           // 0x0058   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TMap<FName, FSessionSearchParamBP>                 SearchParams;                                               // 0x0060   (0x0050)  


	/// Functions
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSearch.GetSearchState
	// EOnlineAsyncTaskState_ GetSearchState();                                                                                 // [0x86d9f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OnlineSubsystemBlueprints.OnlineSessionSearch.GetSearchResults
	// TArray<FOnlineSessionSearchResultBP> GetSearchResults();                                                                 // [0x86d910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineErrorInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FOnlineErrorInfo
{ 
	bool                                               Successful;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            ErrorRaw;                                                   // 0x0008   (0x0010)  
	FString                                            ErrorCode;                                                  // 0x0018   (0x0010)  
	FText                                              ErrorMessage;                                               // 0x0028   (0x0018)  
};

/// Struct /Script/OnlineSubsystemBlueprints.BlockedQueryResultInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBlockedQueryResultInfo
{ 
	bool                                               Blocked;                                                    // 0x0000   (0x0001)  
	bool                                               BlockedNonFriends;                                          // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FString                                            UserId;                                                     // 0x0008   (0x0010)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineUserPresenceData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FOnlineUserPresenceData
{ 
	FUniqueNetIdRepl                                   SessionId;                                                  // 0x0000   (0x0028)  
	bool                                               IsOnline;                                                   // 0x0028   (0x0001)  
	bool                                               IsPlaying;                                                  // 0x0029   (0x0001)  
	bool                                               IsPlayingThisGame;                                          // 0x002A   (0x0001)  
	bool                                               IsJoinable;                                                 // 0x002B   (0x0001)  
	bool                                               HasVoiceSupport;                                            // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	FDateTime                                          LastOnline;                                                 // 0x0030   (0x0008)  
	FOnlineUserPresenceStatusData                      Status;                                                     // 0x0038   (0x0068)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineStatsUserStatsBP
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FOnlineStatsUserStatsBP
{ 
	FUniqueNetIdRepl                                   PlayerId;                                                   // 0x0000   (0x0028)  
	TMap<FString, FVariantDataBP>                      Stats;                                                      // 0x0028   (0x0050)  
};

/// Struct /Script/OnlineSubsystemBlueprints.LoginFlowResultBP
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FLoginFlowResultBP
{ 
	FString                                            Token;                                                      // 0x0000   (0x0010)  
	FText                                              ErrorMessage;                                               // 0x0010   (0x0018)  
	FString                                            ErrorRaw;                                                   // 0x0028   (0x0010)  
	int32_t                                            NumericErrorCode;                                           // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineFriendSettingsSourceDataConfig
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FOnlineFriendSettingsSourceDataConfig
{ 
	bool                                               NeverShowAgain;                                             // 0x0000   (0x0001)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineAchievementDescBP
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FOnlineAchievementDescBP
{ 
	FText                                              Title;                                                      // 0x0000   (0x0018)  
	FText                                              LockedDesc;                                                 // 0x0018   (0x0018)  
	FText                                              UnlockedDesc;                                               // 0x0030   (0x0018)  
	bool                                               bIsHidden;                                                  // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	FDateTime                                          UnlockTime;                                                 // 0x0050   (0x0008)  
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineAchievementBP
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FOnlineAchievementBP
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	float                                              Progress;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/OnlineSubsystemBlueprints.CloudFileHeaderBP
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FCloudFileHeaderBP
{ 
	FString                                            Hash;                                                       // 0x0000   (0x0010)  
	FName                                              HashType;                                                   // 0x0010   (0x0008)  
	FString                                            DLName;                                                     // 0x0018   (0x0010)  
	FString                                            Filename;                                                   // 0x0028   (0x0010)  
	int32_t                                            FileSize;                                                   // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            URL;                                                        // 0x0040   (0x0010)  
	int64_t                                            ChunkID;                                                    // 0x0050   (0x0008)  
};

/// Struct /Script/OnlineSubsystemBlueprints.ColumnMetaDataBP
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FColumnMetaDataBP
{ 
	FName                                              ColumnName;                                                 // 0x0000   (0x0008)  
	EOnlineKeyValuePairDataType_                       DataType;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/OnlineSubsystemBlueprints.OnlineStatsRowBP
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FOnlineStatsRowBP
{ 
	FString                                            PlayerNickname;                                             // 0x0000   (0x0010)  
	FUniqueNetIdRepl                                   PlayerId;                                                   // 0x0010   (0x0028)  
	int32_t                                            Rank;                                                       // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TMap<FName, FVariantDataBP>                        Columns;                                                    // 0x0040   (0x0050)  
};

/// Struct /Script/OnlineSubsystemBlueprints.NamedOnlineSessionBP
/// Size: 0x01D0 (464 bytes) (0x000180 - 0x0001D0) align 8 MaxSize: 0x01D0
struct FNamedOnlineSessionBP : FOnlineSessionBP
{ 
	FName                                              SessionName;                                                // 0x0180   (0x0008)  
	bool                                               bHosting;                                                   // 0x0188   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0189   (0x0007)  MISSED
	FUniqueNetIdRepl                                   LocalOwnerId;                                               // 0x0190   (0x0028)  
	TArray<FUniqueNetIdRepl>                           RegisteredPlayers;                                          // 0x01B8   (0x0010)  
	EOnlineSessionState_                               SessionState;                                               // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x01C9   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UExternalUIFlowHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOnlineUserRef) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UOnlineFriendRef) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UOnlineAchievementsSubsystem) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineAchievementsSubsystemQueryAchievements) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UOnlineAchievementsSubsystemQueryAchievementDescriptions) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UOnlineAvatarSubsystem) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineAvatarSubsystemGetAvatar) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(UOnlineChatSubsystem) == 0x0158); // 344 bytes (0x000030 - 0x000158)
static_assert(sizeof(UOnlineEntitlementsSubsystem) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineEventsSubsystem) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(FExternalUIFlowHandlerRegistration) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UOnlineExternalUISubsystem) == 0x0168); // 360 bytes (0x000030 - 0x000168)
static_assert(sizeof(UOnlineExternalUISubsystemShowLoginUI) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UOnlineExternalUISubsystemShowAccountCreationUI) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(FShowWebUrlParameters) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UOnlineExternalUISubsystemShowWebURL) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineExternalUISubsystemShowProfileUI) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(FShowStoreParameters) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UOnlineExternalUISubsystemShowStoreUI) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(FOnlineMessagePayloadData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FShowSendMessageParameters) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(UOnlineExternalUISubsystemShowSendMessageUI) == 0x0160); // 352 bytes (0x000030 - 0x000160)
static_assert(sizeof(UOnlineExternalUISubsystemShowSendMessageToUserUI) == 0x0188); // 392 bytes (0x000030 - 0x000188)
static_assert(sizeof(UOnlineFriendsSubsystem) == 0x0238); // 568 bytes (0x000030 - 0x000238)
static_assert(sizeof(UOnlineFriendsSubsystemReadFriendsList) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UOnlineFriendsSubsystemDeleteFriendsList) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UOnlineFriendsSubsystemSendInvite) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineFriendsSubsystemAcceptInvite) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineFriendsSubsystemSetFriendAlias) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineFriendsSubsystemDeleteFriendAlias) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(FReportPlayedWithUserInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UOnlineFriendsSubsystemAddRecentPlayers) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineFriendsSubsystemQueryFriendSettings) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(FFriendSettingsData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UOnlineFriendsSubsystemUpdateFriendSettings) == 0x00E0); // 224 bytes (0x000030 - 0x0000E0)
static_assert(sizeof(UOnlineFriendsSubsystemSetFriendSettings) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineGameActivitySubsystem) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineGameActivitySubsystemResetAllActiveActivities) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UOnlineGameActivitySubsystemSetActivityAvailability) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineGameActivitySubsystemSetActivityPriority) == 0x00E0); // 224 bytes (0x000030 - 0x0000E0)
static_assert(sizeof(UOnlineGameItemStatsSubsystem) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineGameItemStatsSubsystemItemUsage) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineGameItemStatsSubsystemItemImpact) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(UOnlineGameItemStatsSubsystemItemMitigation) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(UOnlineGameItemStatsSubsystemItemAvailabilityChange) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineGameItemStatsSubsystemItemInventoryChange) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineGameItemStatsSubsystemItemLoadoutChange) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineGroupsSubsystem) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOnlineIdentitySubsystem) == 0x0128); // 296 bytes (0x000030 - 0x000128)
static_assert(sizeof(FOnlineAccountCredential) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UOnlineIdentitySubsystemLogin) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineIdentitySubsystemLogout) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UOnlineIdentitySubsystemAutoLogin) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UOnlineIdentitySubsystemRevokeAuthToken) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UOnlineIdentitySubsystemGetUserPrivilege) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineLeaderboardsSubsystem) == 0x00C8); // 200 bytes (0x000030 - 0x0000C8)
static_assert(sizeof(UOnlineLeaderboardsSubsystemReadLeaderboards) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineLobbySubsystem) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(UOnlineLobbySubsystemCreateLobby) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineLobbySubsystemUpdateLobby) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineLobbySubsystemDeleteLobby) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineLobbySubsystemConnectLobby) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineLobbySubsystemDisconnectLobby) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineLobbySubsystemUpdateMemberSelf) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(FVariantDataBP) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FOnlineLobbySearchQueryFilterBP) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FOnlineLobbySearchQueryBP) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UOnlineLobbySubsystemSearch) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineMessageSanitizerSubsystem) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineMessageSanitizerSubsystemSanitizeDisplayName) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UOnlineMessageSanitizerSubsystemQueryBlockedUser) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UOnlineMessageSubsystem) == 0x00D8); // 216 bytes (0x000030 - 0x0000D8)
static_assert(sizeof(UOnlinePartySubsystem) == 0x0218); // 536 bytes (0x000030 - 0x000218)
static_assert(sizeof(UOnlinePartySubsystemRestoreParties) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UOnlinePartySubsystemRestoreInvites) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UOnlinePartySubsystemCleanupParties) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(FOnlinePartyConfiguration) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UOnlinePartySubsystemCreateParty) == 0x00D8); // 216 bytes (0x000030 - 0x0000D8)
static_assert(sizeof(UOnlinePartySubsystemUpdateParty) == 0x00E0); // 224 bytes (0x000030 - 0x0000E0)
static_assert(sizeof(UOnlinePartySubsystemJoinParty) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlinePartySubsystemQueryPartyJoinability) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlinePartySubsystemRejoinParty) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlinePartySubsystemLeaveParty) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlinePartySubsystemSendInvitation) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(UOnlinePartySubsystemKickMember) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(UOnlinePartySubsystemPromoteMember) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(UOnlinePresenceSubsystem) == 0x00C8); // 200 bytes (0x000030 - 0x0000C8)
static_assert(sizeof(FOnlineUserPresenceStatusData) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UOnlinePresenceSubsystemSetPresence) == 0x00F8); // 248 bytes (0x000030 - 0x0000F8)
static_assert(sizeof(UOnlinePresenceSubsystemQueryPresence) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UOnlinePurchaseSubsystem) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlinePurchaseSubsystemQueryReceipts) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineRecentPlayerRef) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UOnlineSessionSubsystem) == 0x0280); // 640 bytes (0x000030 - 0x000280)
static_assert(sizeof(FOnlineSessionSettingBP) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FOnlineSessionSettingsBP) == 0x0128); // 296 bytes (0x000000 - 0x000128)
static_assert(sizeof(UOnlineSessionSubsystemCreateSession) == 0x01C8); // 456 bytes (0x000030 - 0x0001C8)
static_assert(sizeof(UOnlineSessionSubsystemStartSession) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UOnlineSessionSubsystemUpdateSession) == 0x01A8); // 424 bytes (0x000030 - 0x0001A8)
static_assert(sizeof(UOnlineSessionSubsystemEndSession) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UOnlineSessionSubsystemDestroySession) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UOnlineSessionSubsystemStartMatchmaking) == 0x01B8); // 440 bytes (0x000030 - 0x0001B8)
static_assert(sizeof(UOnlineSessionSubsystemCancelMatchmaking) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineSessionSubsystemFindSessions) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineSessionSubsystemFindSessionById) == 0x00F0); // 240 bytes (0x000030 - 0x0000F0)
static_assert(sizeof(UOnlineSessionSubsystemCancelFindSessions) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(FOnlineSessionBP) == 0x0180); // 384 bytes (0x000000 - 0x000180)
static_assert(sizeof(FOnlineSessionSearchResultBP) == 0x0188); // 392 bytes (0x000000 - 0x000188)
static_assert(sizeof(UOnlineSessionSubsystemPingSearchResults) == 0x01F8); // 504 bytes (0x000030 - 0x0001F8)
static_assert(sizeof(UOnlineSessionSubsystemJoinSession) == 0x0228); // 552 bytes (0x000030 - 0x000228)
static_assert(sizeof(UOnlineSessionSubsystemFindFriendSession) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineSessionSubsystemRegisterPlayers) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UOnlineSessionSubsystemUnregisterPlayers) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UOnlineSessionSubsystemRegisterLocalPlayer) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineSessionSubsystemUnregisterLocalPlayer) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineSharedCloudSubsystem) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineSharingSubsystem) == 0x0118); // 280 bytes (0x000030 - 0x000118)
static_assert(sizeof(UOnlineStatsSubsystem) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineStatsSubsystemQueryStats) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(FOnlineStatUpdateBP) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FOnlineStatsUserUpdatedStatsBP) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(UOnlineStatsSubsystemUpdateStats) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineStoreV2Subsystem) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineStoreV2SubsystemQueryCategories) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UOnlineStoreV2SubsystemQueryOffersById) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UOnlineTimeSubsystem) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UOnlineTitleFileSubsystem) == 0x00E0); // 224 bytes (0x000030 - 0x0000E0)
static_assert(sizeof(FPagedQueryBP) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UOnlineTitleFileSubsystemEnumerateFiles) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UOnlineTitleFileSubsystemReadFile) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineTournamentSubsystem) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineTurnBasedSubsystem) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineTurnBasedSubsystemLoadAllMatches) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UOnlineTurnBasedSubsystemLoadMatchWithID) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UOnlineUserCloudSubsystem) == 0x0128); // 296 bytes (0x000030 - 0x000128)
static_assert(sizeof(UOnlineUserCloudSubsystemEnumerateUserFiles) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOnlineUserCloudSubsystemReadUserFile) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UOnlineUserCloudSubsystemWriteUserFile) == 0x00E8); // 232 bytes (0x000030 - 0x0000E8)
static_assert(sizeof(UOnlineUserCloudSubsystemDeleteUserFile) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UUserOnlineAccountRef) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UOnlineUserSubsystem) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineUserSubsystemQueryUserInfo) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UOnlineUserSubsystemQueryUserIdMapping) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(FExternalIdQueryOptionsBP) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UOnlineUserSubsystemQueryExternalIdMappings) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UOnlineVoiceSubsystem) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UFileData) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOnlineLeaderboardRead) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOnlineLeaderboardWrite) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULobbyId) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULobby) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOnlineLobbyTransaction) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOnlineLobbyMemberTransaction) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UParty) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UBlueprintPartyMember) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UReadablePartyData) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMutablePartyData) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UPartyId) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOnlinePartyJoinInfo) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOnlineSessionInfo) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOnlineSessionSettings) == 0x0150); // 336 bytes (0x000028 - 0x000150)
static_assert(sizeof(UNamedOnlineSession) == 0x01F8); // 504 bytes (0x000028 - 0x0001F8)
static_assert(sizeof(FSessionSearchParamBP) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UOnlineSessionSearch) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(FOnlineErrorInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FBlockedQueryResultInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FOnlineUserPresenceData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FOnlineStatsUserStatsBP) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FLoginFlowResultBP) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FOnlineFriendSettingsSourceDataConfig) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FOnlineAchievementDescBP) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FOnlineAchievementBP) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCloudFileHeaderBP) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FColumnMetaDataBP) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FOnlineStatsRowBP) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FNamedOnlineSessionBP) == 0x01D0); // 464 bytes (0x000180 - 0x0001D0)
static_assert(offsetof(UOnlineAchievementsSubsystemQueryAchievements, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineAchievementsSubsystemQueryAchievements, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineAchievementsSubsystemQueryAchievements, __Store__PlayerId) == 0x0068);
static_assert(offsetof(UOnlineAchievementsSubsystemQueryAchievementDescriptions, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineAchievementsSubsystemQueryAchievementDescriptions, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineAchievementsSubsystemQueryAchievementDescriptions, __Store__PlayerId) == 0x0068);
static_assert(offsetof(UOnlineAvatarSubsystemGetAvatar, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineAvatarSubsystemGetAvatar, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineAvatarSubsystemGetAvatar, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineAvatarSubsystemGetAvatar, __Store__TargetUserId) == 0x0090);
static_assert(offsetof(UOnlineAvatarSubsystemGetAvatar, __Store__DefaultTexture) == 0x00B8);
static_assert(offsetof(FExternalUIFlowHandlerRegistration, Interface) == 0x0000);
static_assert(offsetof(UOnlineExternalUISubsystem, FlowHandlers) == 0x00A0);
static_assert(offsetof(UOnlineExternalUISubsystemShowLoginUI, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineExternalUISubsystemShowLoginUI, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineExternalUISubsystemShowAccountCreationUI, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineExternalUISubsystemShowAccountCreationUI, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(FShowWebUrlParameters, AllowedDomains) == 0x0018);
static_assert(offsetof(FShowWebUrlParameters, CallbackPath) == 0x0028);
static_assert(offsetof(UOnlineExternalUISubsystemShowWebURL, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineExternalUISubsystemShowWebURL, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineExternalUISubsystemShowWebURL, __Store__Url) == 0x0068);
static_assert(offsetof(UOnlineExternalUISubsystemShowWebURL, __Store__ShowParams) == 0x0078);
static_assert(offsetof(UOnlineExternalUISubsystemShowProfileUI, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineExternalUISubsystemShowProfileUI, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineExternalUISubsystemShowProfileUI, __Store__Requestor) == 0x0068);
static_assert(offsetof(UOnlineExternalUISubsystemShowProfileUI, __Store__Requestee) == 0x0090);
static_assert(offsetof(FShowStoreParameters, Category) == 0x0000);
static_assert(offsetof(FShowStoreParameters, ProductId) == 0x0010);
static_assert(offsetof(UOnlineExternalUISubsystemShowStoreUI, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineExternalUISubsystemShowStoreUI, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineExternalUISubsystemShowStoreUI, __Store__ShowParams) == 0x0070);
static_assert(offsetof(FShowSendMessageParameters, DisplayTitle) == 0x0000);
static_assert(offsetof(FShowSendMessageParameters, DisplayTitle_Loc) == 0x0018);
static_assert(offsetof(FShowSendMessageParameters, DisplayMessage) == 0x0068);
static_assert(offsetof(FShowSendMessageParameters, DisplayDetails) == 0x0080);
static_assert(offsetof(FShowSendMessageParameters, DisplayDetails_Loc) == 0x0098);
static_assert(offsetof(FShowSendMessageParameters, DataPayload) == 0x00E8);
static_assert(offsetof(UOnlineExternalUISubsystemShowSendMessageUI, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineExternalUISubsystemShowSendMessageUI, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineExternalUISubsystemShowSendMessageUI, __Store__ShowParams) == 0x0070);
static_assert(offsetof(UOnlineExternalUISubsystemShowSendMessageToUserUI, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineExternalUISubsystemShowSendMessageToUserUI, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineExternalUISubsystemShowSendMessageToUserUI, __Store__Recipient) == 0x0070);
static_assert(offsetof(UOnlineExternalUISubsystemShowSendMessageToUserUI, __Store__ShowParams) == 0x0098);
static_assert(offsetof(UOnlineFriendsSubsystemReadFriendsList, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemReadFriendsList, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemReadFriendsList, __Store__ListName) == 0x0070);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriendsList, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriendsList, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriendsList, __Store__ListName) == 0x0070);
static_assert(offsetof(UOnlineFriendsSubsystemSendInvite, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemSendInvite, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemSendInvite, __Store__FriendId) == 0x0070);
static_assert(offsetof(UOnlineFriendsSubsystemSendInvite, __Store__ListName) == 0x0098);
static_assert(offsetof(UOnlineFriendsSubsystemAcceptInvite, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemAcceptInvite, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemAcceptInvite, __Store__FriendId) == 0x0070);
static_assert(offsetof(UOnlineFriendsSubsystemAcceptInvite, __Store__ListName) == 0x0098);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendAlias, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendAlias, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendAlias, __Store__FriendId) == 0x0070);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendAlias, __Store__ListName) == 0x0098);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendAlias, __Store__Alias) == 0x00A8);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriendAlias, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriendAlias, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriendAlias, __Store__FriendId) == 0x0070);
static_assert(offsetof(UOnlineFriendsSubsystemDeleteFriendAlias, __Store__ListName) == 0x0098);
static_assert(offsetof(FReportPlayedWithUserInfo, UserId) == 0x0000);
static_assert(offsetof(FReportPlayedWithUserInfo, PresenceStr) == 0x0028);
static_assert(offsetof(UOnlineFriendsSubsystemAddRecentPlayers, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemAddRecentPlayers, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemAddRecentPlayers, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineFriendsSubsystemAddRecentPlayers, __Store__InRecentPlayers) == 0x0090);
static_assert(offsetof(UOnlineFriendsSubsystemAddRecentPlayers, __Store__ListName) == 0x00A0);
static_assert(offsetof(UOnlineFriendsSubsystemQueryFriendSettings, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemQueryFriendSettings, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemQueryFriendSettings, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(FFriendSettingsData, Data) == 0x0000);
static_assert(offsetof(UOnlineFriendsSubsystemUpdateFriendSettings, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemUpdateFriendSettings, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemUpdateFriendSettings, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineFriendsSubsystemUpdateFriendSettings, __Store__NewSettings) == 0x0090);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendSettings, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendSettings, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendSettings, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineFriendsSubsystemSetFriendSettings, __Store__Source) == 0x0090);
static_assert(offsetof(UOnlineGameActivitySubsystemResetAllActiveActivities, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameActivitySubsystemResetAllActiveActivities, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameActivitySubsystemResetAllActiveActivities, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameActivitySubsystemSetActivityAvailability, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameActivitySubsystemSetActivityAvailability, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameActivitySubsystemSetActivityAvailability, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameActivitySubsystemSetActivityAvailability, __Store__ActivityId) == 0x0090);
static_assert(offsetof(UOnlineGameActivitySubsystemSetActivityPriority, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameActivitySubsystemSetActivityPriority, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameActivitySubsystemSetActivityPriority, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameActivitySubsystemSetActivityPriority, __Store__PrioritizedActivities) == 0x0090);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemUsage, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemUsage, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemUsage, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemUsage, __Store__ItemUsedBy) == 0x0090);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemUsage, __Store__ItemsUsed) == 0x00A0);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemImpact, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemImpact, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemImpact, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemImpact, __Store__TargetActors) == 0x0090);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemImpact, __Store__ImpactInitiatedBy) == 0x00A0);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemImpact, __Store__ItemsUsed) == 0x00B0);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemMitigation, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemMitigation, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemMitigation, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemMitigation, __Store__ItemsUsed) == 0x0090);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemMitigation, __Store__ImpactItemsMitigated) == 0x00A0);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemMitigation, __Store__ItemUsedBy) == 0x00B0);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemAvailabilityChange, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemAvailabilityChange, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemAvailabilityChange, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemAvailabilityChange, __Store__AvailableItems) == 0x0090);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemAvailabilityChange, __Store__UnavailableItems) == 0x00A0);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemInventoryChange, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemInventoryChange, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemInventoryChange, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemInventoryChange, __Store__ItemsToAdd) == 0x0090);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemInventoryChange, __Store__ItemsToRemove) == 0x00A0);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemLoadoutChange, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemLoadoutChange, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemLoadoutChange, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemLoadoutChange, __Store__EquippedItems) == 0x0090);
static_assert(offsetof(UOnlineGameItemStatsSubsystemItemLoadoutChange, __Store__UnequippedItems) == 0x00A0);
static_assert(offsetof(FOnlineAccountCredential, Type) == 0x0000);
static_assert(offsetof(FOnlineAccountCredential, ID) == 0x0010);
static_assert(offsetof(FOnlineAccountCredential, Token) == 0x0020);
static_assert(offsetof(UOnlineIdentitySubsystemLogin, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineIdentitySubsystemLogin, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineIdentitySubsystemLogin, __Store__AccountCredentials) == 0x0078);
static_assert(offsetof(UOnlineIdentitySubsystemLogout, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineIdentitySubsystemLogout, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineIdentitySubsystemAutoLogin, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineIdentitySubsystemAutoLogin, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineIdentitySubsystemRevokeAuthToken, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineIdentitySubsystemRevokeAuthToken, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineIdentitySubsystemRevokeAuthToken, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineIdentitySubsystemGetUserPrivilege, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineIdentitySubsystemGetUserPrivilege, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineIdentitySubsystemGetUserPrivilege, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineIdentitySubsystemGetUserPrivilege, __Store__Privilege) == 0x0090);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboards, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboards, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboards, __Store__Players) == 0x0070);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboards, __Store__ReadObject) == 0x0080);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends, __Store__ReadObject) == 0x0078);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank, __Store__ReadObject) == 0x0080);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, __Store__Player) == 0x0070);
static_assert(offsetof(UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser, __Store__ReadObject) == 0x00A0);
static_assert(offsetof(UOnlineLobbySubsystemCreateLobby, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLobbySubsystemCreateLobby, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLobbySubsystemCreateLobby, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineLobbySubsystemCreateLobby, __Store__Transaction) == 0x0090);
static_assert(offsetof(UOnlineLobbySubsystemUpdateLobby, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLobbySubsystemUpdateLobby, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLobbySubsystemUpdateLobby, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineLobbySubsystemUpdateLobby, __Store__LobbyId) == 0x0090);
static_assert(offsetof(UOnlineLobbySubsystemUpdateLobby, __Store__Transaction) == 0x0098);
static_assert(offsetof(UOnlineLobbySubsystemDeleteLobby, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLobbySubsystemDeleteLobby, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLobbySubsystemDeleteLobby, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineLobbySubsystemDeleteLobby, __Store__LobbyId) == 0x0090);
static_assert(offsetof(UOnlineLobbySubsystemConnectLobby, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLobbySubsystemConnectLobby, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLobbySubsystemConnectLobby, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineLobbySubsystemConnectLobby, __Store__LobbyId) == 0x0090);
static_assert(offsetof(UOnlineLobbySubsystemDisconnectLobby, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLobbySubsystemDisconnectLobby, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLobbySubsystemDisconnectLobby, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineLobbySubsystemDisconnectLobby, __Store__LobbyId) == 0x0090);
static_assert(offsetof(UOnlineLobbySubsystemUpdateMemberSelf, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLobbySubsystemUpdateMemberSelf, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLobbySubsystemUpdateMemberSelf, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineLobbySubsystemUpdateMemberSelf, __Store__LobbyId) == 0x0090);
static_assert(offsetof(UOnlineLobbySubsystemUpdateMemberSelf, __Store__Transaction) == 0x0098);
static_assert(offsetof(FVariantDataBP, Type) == 0x0000);
static_assert(offsetof(FVariantDataBP, AsString) == 0x0018);
static_assert(offsetof(FOnlineLobbySearchQueryFilterBP, Key) == 0x0000);
static_assert(offsetof(FOnlineLobbySearchQueryFilterBP, Value) == 0x0010);
static_assert(offsetof(FOnlineLobbySearchQueryFilterBP, Comparison) == 0x0038);
static_assert(offsetof(FOnlineLobbySearchQueryBP, Filters) == 0x0000);
static_assert(offsetof(UOnlineLobbySubsystemSearch, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineLobbySubsystemSearch, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineLobbySubsystemSearch, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineLobbySubsystemSearch, __Store__Query) == 0x0090);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemSanitizeDisplayName, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemSanitizeDisplayName, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemSanitizeDisplayName, __Store__DisplayName) == 0x0068);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemSanitizeDisplayNames, __Store__DisplayNames) == 0x0068);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemQueryBlockedUser, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemQueryBlockedUser, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemQueryBlockedUser, __Store__FromUserId) == 0x0070);
static_assert(offsetof(UOnlineMessageSanitizerSubsystemQueryBlockedUser, __Store__FromPlatform) == 0x0080);
static_assert(offsetof(UOnlinePartySubsystemRestoreParties, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemRestoreParties, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemRestoreParties, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemRestoreInvites, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemRestoreInvites, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemRestoreInvites, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemCleanupParties, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemCleanupParties, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemCleanupParties, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(FOnlinePartyConfiguration, JoinRequestAction) == 0x0000);
static_assert(offsetof(FOnlinePartyConfiguration, PresencePermissions) == 0x0001);
static_assert(offsetof(FOnlinePartyConfiguration, InvitePermissions) == 0x0002);
static_assert(offsetof(FOnlinePartyConfiguration, Nickname) == 0x0010);
static_assert(offsetof(FOnlinePartyConfiguration, Description) == 0x0020);
static_assert(offsetof(FOnlinePartyConfiguration, Password) == 0x0030);
static_assert(offsetof(UOnlinePartySubsystemCreateParty, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemCreateParty, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemCreateParty, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemCreateParty, __Store__PartyConfig) == 0x0098);
static_assert(offsetof(UOnlinePartySubsystemUpdateParty, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemUpdateParty, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemUpdateParty, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemUpdateParty, __Store__PartyId) == 0x0090);
static_assert(offsetof(UOnlinePartySubsystemUpdateParty, __Store__PartyConfig) == 0x0098);
static_assert(offsetof(UOnlinePartySubsystemJoinParty, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemJoinParty, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemJoinParty, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemJoinParty, __Store__OnlinePartyJoinInfo) == 0x0090);
static_assert(offsetof(UOnlinePartySubsystemQueryPartyJoinability, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemQueryPartyJoinability, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemQueryPartyJoinability, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemQueryPartyJoinability, __Store__OnlinePartyJoinInfo) == 0x0090);
static_assert(offsetof(UOnlinePartySubsystemRejoinParty, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemRejoinParty, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemRejoinParty, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemRejoinParty, __Store__PartyId) == 0x0090);
static_assert(offsetof(UOnlinePartySubsystemRejoinParty, __Store__FormerMembers) == 0x00A0);
static_assert(offsetof(UOnlinePartySubsystemLeaveParty, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemLeaveParty, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemLeaveParty, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemLeaveParty, __Store__PartyId) == 0x0090);
static_assert(offsetof(UOnlinePartySubsystemSendInvitation, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemSendInvitation, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemSendInvitation, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemSendInvitation, __Store__PartyId) == 0x0090);
static_assert(offsetof(UOnlinePartySubsystemSendInvitation, __Store__Recipient) == 0x0098);
static_assert(offsetof(UOnlinePartySubsystemKickMember, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemKickMember, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemKickMember, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemKickMember, __Store__PartyId) == 0x0090);
static_assert(offsetof(UOnlinePartySubsystemKickMember, __Store__TargetMemberId) == 0x0098);
static_assert(offsetof(UOnlinePartySubsystemPromoteMember, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePartySubsystemPromoteMember, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePartySubsystemPromoteMember, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlinePartySubsystemPromoteMember, __Store__PartyId) == 0x0090);
static_assert(offsetof(UOnlinePartySubsystemPromoteMember, __Store__TargetMemberId) == 0x0098);
static_assert(offsetof(FOnlineUserPresenceStatusData, Status) == 0x0000);
static_assert(offsetof(FOnlineUserPresenceStatusData, State) == 0x0010);
static_assert(offsetof(FOnlineUserPresenceStatusData, Properties) == 0x0018);
static_assert(offsetof(UOnlinePresenceSubsystemSetPresence, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePresenceSubsystemSetPresence, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePresenceSubsystemSetPresence, __Store__User) == 0x0068);
static_assert(offsetof(UOnlinePresenceSubsystemSetPresence, __Store__Status) == 0x0090);
static_assert(offsetof(UOnlinePresenceSubsystemQueryPresence, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePresenceSubsystemQueryPresence, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePresenceSubsystemQueryPresence, __Store__User) == 0x0068);
static_assert(offsetof(UOnlinePurchaseSubsystemQueryReceipts, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePurchaseSubsystemQueryReceipts, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePurchaseSubsystemQueryReceipts, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo, __Store__InReceiptValidationInfo) == 0x0090);
static_assert(offsetof(FOnlineSessionSettingBP, Data) == 0x0000);
static_assert(offsetof(FOnlineSessionSettingBP, AdvertisementType) == 0x0028);
static_assert(offsetof(FOnlineSessionSettingsBP, Settings) == 0x00D8);
static_assert(offsetof(UOnlineSessionSubsystemCreateSession, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemCreateSession, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemCreateSession, __Store__HostingPlayerId) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemCreateSession, __Store__SessionName) == 0x0098);
static_assert(offsetof(UOnlineSessionSubsystemCreateSession, __Store__NewSessionSettings) == 0x00A0);
static_assert(offsetof(UOnlineSessionSubsystemStartSession, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemStartSession, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemStartSession, __Store__SessionName) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemUpdateSession, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemUpdateSession, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemUpdateSession, __Store__SessionName) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemUpdateSession, __Store__UpdatedSessionSettings) == 0x0078);
static_assert(offsetof(UOnlineSessionSubsystemEndSession, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemEndSession, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemEndSession, __Store__SessionName) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemDestroySession, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemDestroySession, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemDestroySession, __Store__SessionName) == 0x0068);
static_assert(offsetof(UOnlineSessionSubsystemStartMatchmaking, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemStartMatchmaking, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemStartMatchmaking, __Store__LocalPlayers) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemStartMatchmaking, __Store__SessionName) == 0x0080);
static_assert(offsetof(UOnlineSessionSubsystemStartMatchmaking, __Store__NewSessionSettings) == 0x0088);
static_assert(offsetof(UOnlineSessionSubsystemStartMatchmaking, __Store__SearchSettings) == 0x01B0);
static_assert(offsetof(UOnlineSessionSubsystemCancelMatchmaking, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemCancelMatchmaking, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemCancelMatchmaking, __Store__SearchingPlayerId) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemCancelMatchmaking, __Store__SessionName) == 0x0098);
static_assert(offsetof(UOnlineSessionSubsystemFindSessions, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemFindSessions, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemFindSessions, __Store__SearchingPlayerId) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemFindSessions, __Store__SearchSettings) == 0x0098);
static_assert(offsetof(UOnlineSessionSubsystemFindSessionById, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemFindSessionById, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemFindSessionById, __Store__SearchingUserId) == 0x0068);
static_assert(offsetof(UOnlineSessionSubsystemFindSessionById, __Store__SessionId) == 0x0090);
static_assert(offsetof(UOnlineSessionSubsystemFindSessionById, __Store__FriendId) == 0x00B8);
static_assert(offsetof(UOnlineSessionSubsystemFindSessionById, __Store__UserData) == 0x00E0);
static_assert(offsetof(UOnlineSessionSubsystemCancelFindSessions, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemCancelFindSessions, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(FOnlineSessionBP, OwningUserId) == 0x0000);
static_assert(offsetof(FOnlineSessionBP, OwningUserName) == 0x0028);
static_assert(offsetof(FOnlineSessionBP, SessionSettings) == 0x0038);
static_assert(offsetof(FOnlineSessionBP, SessionInfo) == 0x0160);
static_assert(offsetof(FOnlineSessionBP, SessionId) == 0x0170);
static_assert(offsetof(FOnlineSessionSearchResultBP, Session) == 0x0000);
static_assert(offsetof(UOnlineSessionSubsystemPingSearchResults, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemPingSearchResults, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemPingSearchResults, __Store__SearchResult) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemJoinSession, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemJoinSession, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemJoinSession, __Store__LocalUserId) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemJoinSession, __Store__SessionName) == 0x0098);
static_assert(offsetof(UOnlineSessionSubsystemJoinSession, __Store__DesiredSession) == 0x00A0);
static_assert(offsetof(UOnlineSessionSubsystemFindFriendSession, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemFindFriendSession, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemFindFriendSession, __Store__Friend) == 0x0078);
static_assert(offsetof(UOnlineSessionSubsystemRegisterPlayers, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemRegisterPlayers, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemRegisterPlayers, __Store__SessionName) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemRegisterPlayers, __Store__Players) == 0x0078);
static_assert(offsetof(UOnlineSessionSubsystemUnregisterPlayers, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemUnregisterPlayers, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemUnregisterPlayers, __Store__SessionName) == 0x0070);
static_assert(offsetof(UOnlineSessionSubsystemUnregisterPlayers, __Store__Players) == 0x0078);
static_assert(offsetof(UOnlineSessionSubsystemRegisterLocalPlayer, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemRegisterLocalPlayer, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemRegisterLocalPlayer, __Store__PlayerId) == 0x0068);
static_assert(offsetof(UOnlineSessionSubsystemRegisterLocalPlayer, __Store__SessionName) == 0x0090);
static_assert(offsetof(UOnlineSessionSubsystemUnregisterLocalPlayer, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineSessionSubsystemUnregisterLocalPlayer, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineSessionSubsystemUnregisterLocalPlayer, __Store__PlayerId) == 0x0068);
static_assert(offsetof(UOnlineSessionSubsystemUnregisterLocalPlayer, __Store__SessionName) == 0x0090);
static_assert(offsetof(UOnlineStatsSubsystemQueryStats, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineStatsSubsystemQueryStats, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineStatsSubsystemQueryStats, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineStatsSubsystemQueryStats, __Store__StatUsers) == 0x0090);
static_assert(offsetof(UOnlineStatsSubsystemQueryStats, __Store__StatNames) == 0x00A0);
static_assert(offsetof(FOnlineStatUpdateBP, Type) == 0x0000);
static_assert(offsetof(FOnlineStatUpdateBP, Value) == 0x0008);
static_assert(offsetof(FOnlineStatsUserUpdatedStatsBP, PlayerId) == 0x0000);
static_assert(offsetof(FOnlineStatsUserUpdatedStatsBP, Stats) == 0x0028);
static_assert(offsetof(UOnlineStatsSubsystemUpdateStats, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineStatsSubsystemUpdateStats, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineStatsSubsystemUpdateStats, __Store__LocalUserId) == 0x0068);
static_assert(offsetof(UOnlineStatsSubsystemUpdateStats, __Store__UpdatedUserStats) == 0x0090);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryCategories, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryCategories, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryCategories, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryOffersById, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryOffersById, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryOffersById, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineStoreV2SubsystemQueryOffersById, __Store__OfferIds) == 0x0090);
static_assert(offsetof(UOnlineTitleFileSubsystemEnumerateFiles, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineTitleFileSubsystemEnumerateFiles, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineTitleFileSubsystemEnumerateFiles, __Store__Page) == 0x0070);
static_assert(offsetof(UOnlineTitleFileSubsystemReadFile, __Store__Subsystem) == 0x0060);
static_assert(offsetof(UOnlineTitleFileSubsystemReadFile, __Store__CallUniquenessId) == 0x0068);
static_assert(offsetof(UOnlineTitleFileSubsystemReadFile, __Store__FileName) == 0x0088);
static_assert(offsetof(UOnlineTurnBasedSubsystemLoadAllMatches, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineTurnBasedSubsystemLoadAllMatches, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineTurnBasedSubsystemLoadMatchWithID, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineTurnBasedSubsystemLoadMatchWithID, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineTurnBasedSubsystemLoadMatchWithID, __Store__MatchID) == 0x0068);
static_assert(offsetof(UOnlineUserCloudSubsystemEnumerateUserFiles, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineUserCloudSubsystemEnumerateUserFiles, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineUserCloudSubsystemEnumerateUserFiles, __Store__UserId) == 0x0070);
static_assert(offsetof(UOnlineUserCloudSubsystemReadUserFile, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineUserCloudSubsystemReadUserFile, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineUserCloudSubsystemReadUserFile, __Store__UserId) == 0x0070);
static_assert(offsetof(UOnlineUserCloudSubsystemReadUserFile, __Store__FileName) == 0x0098);
static_assert(offsetof(UOnlineUserCloudSubsystemWriteUserFile, __Store__Subsystem) == 0x0070);
static_assert(offsetof(UOnlineUserCloudSubsystemWriteUserFile, __Store__CallUniquenessId) == 0x0078);
static_assert(offsetof(UOnlineUserCloudSubsystemWriteUserFile, __Store__UserId) == 0x00A0);
static_assert(offsetof(UOnlineUserCloudSubsystemWriteUserFile, __Store__FileName) == 0x00C8);
static_assert(offsetof(UOnlineUserCloudSubsystemWriteUserFile, __Store__FileContents) == 0x00D8);
static_assert(offsetof(UOnlineUserCloudSubsystemDeleteUserFile, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineUserCloudSubsystemDeleteUserFile, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineUserCloudSubsystemDeleteUserFile, __Store__UserId) == 0x0070);
static_assert(offsetof(UOnlineUserCloudSubsystemDeleteUserFile, __Store__FileName) == 0x0098);
static_assert(offsetof(UOnlineUserSubsystemQueryUserInfo, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineUserSubsystemQueryUserInfo, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineUserSubsystemQueryUserInfo, __Store__UserIds) == 0x0078);
static_assert(offsetof(UOnlineUserSubsystemQueryUserIdMapping, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineUserSubsystemQueryUserIdMapping, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineUserSubsystemQueryUserIdMapping, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineUserSubsystemQueryUserIdMapping, __Store__DisplayNameOrEmail) == 0x0090);
static_assert(offsetof(FExternalIdQueryOptionsBP, AuthType) == 0x0008);
static_assert(offsetof(UOnlineUserSubsystemQueryExternalIdMappings, __Store__Subsystem) == 0x0050);
static_assert(offsetof(UOnlineUserSubsystemQueryExternalIdMappings, __Store__CallUniquenessId) == 0x0058);
static_assert(offsetof(UOnlineUserSubsystemQueryExternalIdMappings, __Store__UserId) == 0x0068);
static_assert(offsetof(UOnlineUserSubsystemQueryExternalIdMappings, __Store__QueryOptions) == 0x0090);
static_assert(offsetof(UOnlineUserSubsystemQueryExternalIdMappings, __Store__ExternalIds) == 0x00A8);
static_assert(offsetof(FSessionSearchParamBP, Data) == 0x0000);
static_assert(offsetof(FSessionSearchParamBP, Op) == 0x0028);
static_assert(offsetof(UOnlineSessionSearch, SearchParams) == 0x0060);
static_assert(offsetof(FOnlineErrorInfo, ErrorRaw) == 0x0008);
static_assert(offsetof(FOnlineErrorInfo, ErrorCode) == 0x0018);
static_assert(offsetof(FOnlineErrorInfo, ErrorMessage) == 0x0028);
static_assert(offsetof(FBlockedQueryResultInfo, UserId) == 0x0008);
static_assert(offsetof(FOnlineUserPresenceData, SessionId) == 0x0000);
static_assert(offsetof(FOnlineUserPresenceData, LastOnline) == 0x0030);
static_assert(offsetof(FOnlineUserPresenceData, Status) == 0x0038);
static_assert(offsetof(FOnlineStatsUserStatsBP, PlayerId) == 0x0000);
static_assert(offsetof(FOnlineStatsUserStatsBP, Stats) == 0x0028);
static_assert(offsetof(FLoginFlowResultBP, Token) == 0x0000);
static_assert(offsetof(FLoginFlowResultBP, ErrorMessage) == 0x0010);
static_assert(offsetof(FLoginFlowResultBP, ErrorRaw) == 0x0028);
static_assert(offsetof(FOnlineAchievementDescBP, Title) == 0x0000);
static_assert(offsetof(FOnlineAchievementDescBP, LockedDesc) == 0x0018);
static_assert(offsetof(FOnlineAchievementDescBP, UnlockedDesc) == 0x0030);
static_assert(offsetof(FOnlineAchievementDescBP, UnlockTime) == 0x0050);
static_assert(offsetof(FOnlineAchievementBP, ID) == 0x0000);
static_assert(offsetof(FCloudFileHeaderBP, Hash) == 0x0000);
static_assert(offsetof(FCloudFileHeaderBP, HashType) == 0x0010);
static_assert(offsetof(FCloudFileHeaderBP, DLName) == 0x0018);
static_assert(offsetof(FCloudFileHeaderBP, Filename) == 0x0028);
static_assert(offsetof(FCloudFileHeaderBP, URL) == 0x0040);
static_assert(offsetof(FColumnMetaDataBP, ColumnName) == 0x0000);
static_assert(offsetof(FColumnMetaDataBP, DataType) == 0x0008);
static_assert(offsetof(FOnlineStatsRowBP, PlayerNickname) == 0x0000);
static_assert(offsetof(FOnlineStatsRowBP, PlayerId) == 0x0010);
static_assert(offsetof(FOnlineStatsRowBP, Columns) == 0x0040);
static_assert(offsetof(FNamedOnlineSessionBP, SessionName) == 0x0180);
static_assert(offsetof(FNamedOnlineSessionBP, LocalOwnerId) == 0x0190);
static_assert(offsetof(FNamedOnlineSessionBP, RegisteredPlayers) == 0x01B8);
static_assert(offsetof(FNamedOnlineSessionBP, SessionState) == 0x01C8);
