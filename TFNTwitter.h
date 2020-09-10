//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterAccountPushSettingsProvider-Protocol.h>
#import <T1Twitter/TFSAuthAccountAuthService-Protocol.h>
#import <T1Twitter/TFSAuthGuestAuthAPI-Protocol.h>
#import <T1Twitter/TFSAuthKeychainSupport-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSOrderedSet, NSRecursiveLock, NSString, T1HashflagService, TFNTwitterScribe, TFNTwitterScribeFlush;
@protocol TFSTwitterRecurringTask;

@interface TFNTwitter : NSObject <TFSAuthAccountAuthService, TFSAuthGuestAuthAPI, TFSAuthKeychainSupport, TFNTwitterAccountPushSettingsProvider>
{
    TFNTwitterScribe *_guestScribe;
    TFNTwitterScribeFlush *_guestScribeFlush;
    NSDictionary *_duckieBackup;
    NSMutableSet *_accountsToUnregisterPush;
    double _clockDelta;
    _Bool _teamsAccountUpdateNeeded;
    _Bool _updatingTeamsAccount;
    NSArray *_accounts;
    NSRecursiveLock *_teamsAccountsLock;
    NSMutableDictionary *_retainedCredentials;
    CDUnknownBlockType _buildOverrideAccountPushSettingsManager;
    long long _heartbeatCount;
    NSOrderedSet *_allRecurringTasks;
    NSOrderedSet *_activeAccountRecurringTasks;
    NSOrderedSet *_secondaryRecurringTasks;
    id <TFSTwitterRecurringTask> _activeAccountReloadTypeaheadUserCacheRecurringTask;
    id _registrationRecurringTasksContext;
}

+ (void)setGeoDataProvider:(id)arg1;
+ (id)frameworkOnlyGeoDataProvider;
+ (id)geoDataProviderAccessQueue;
+ (id)_legacyGroupUserDefaultsPlistPath;
+ (_Bool)_migrateLegacyUserDefaultsPlistIfNecessary:(id)arg1 groupUserDefaults:(id)arg2 standardUserDefaults:(id)arg3;
+ (_Bool)hasAccountsPersistedInUserDefaults;
+ (_Bool)isTwitterNeverPersistedOrNotAccessibleInStandardUserDefaults;
+ (void)saveStandardAndGroupUserDefaults;
+ (void)saveSharedTwitter;
+ (id)sharedTwitter;
+ (id)sharedTwitterPeek;
- (void).cxx_destruct;
@property(retain, nonatomic) id registrationRecurringTasksContext; // @synthesize registrationRecurringTasksContext=_registrationRecurringTasksContext;
@property(retain, nonatomic) id <TFSTwitterRecurringTask> activeAccountReloadTypeaheadUserCacheRecurringTask; // @synthesize activeAccountReloadTypeaheadUserCacheRecurringTask=_activeAccountReloadTypeaheadUserCacheRecurringTask;
@property(copy, nonatomic) NSOrderedSet *secondaryRecurringTasks; // @synthesize secondaryRecurringTasks=_secondaryRecurringTasks;
@property(copy, nonatomic) NSOrderedSet *activeAccountRecurringTasks; // @synthesize activeAccountRecurringTasks=_activeAccountRecurringTasks;
@property(copy, nonatomic) NSOrderedSet *allRecurringTasks; // @synthesize allRecurringTasks=_allRecurringTasks;
@property(nonatomic) long long heartbeatCount; // @synthesize heartbeatCount=_heartbeatCount;
@property(copy, nonatomic) CDUnknownBlockType buildOverrideAccountPushSettingsManager; // @synthesize buildOverrideAccountPushSettingsManager=_buildOverrideAccountPushSettingsManager;
@property(retain, nonatomic) NSMutableDictionary *retainedCredentials; // @synthesize retainedCredentials=_retainedCredentials;
@property(readonly, nonatomic) NSRecursiveLock *teamsAccountsLock; // @synthesize teamsAccountsLock=_teamsAccountsLock;
@property(nonatomic) _Bool updatingTeamsAccount; // @synthesize updatingTeamsAccount=_updatingTeamsAccount;
@property(nonatomic) _Bool teamsAccountUpdateNeeded; // @synthesize teamsAccountUpdateNeeded=_teamsAccountUpdateNeeded;
@property(nonatomic) double clockDelta; // @synthesize clockDelta=_clockDelta;
@property(copy) NSArray *accounts; // @synthesize accounts=_accounts;
- (void)_postDidFinishStartingNotificationWithStartType:(unsigned long long)arg1;
- (void)resume;
- (void)startup;
- (id)pushSettingsForAccount:(id)arg1;
- (void)_triggerHeartbeat;
- (void)_twitterDidFinishStarting:(id)arg1;
- (void)_regenerateLoginVerificationBackupCodeWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_unregisterPushVerificationWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_unregisterLoginVerificationWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_retryUnregisterPushForAllStrandedAccounts;
- (void)_removeAccountFromUnregisterPushSet:(id)arg1;
- (void)_addAccountToUnregisterPushSet:(id)arg1;
- (void)_unregisterPushForAccount:(id)arg1 scribeComponent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_unregisterPushForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_scribeOSLevelNotificationSettingsChange:(id)arg1 action:(id)arg2;
- (void)_scribeNotificationSettingChangeOfCurrentRecord:(id)arg1 previousRecord:(id)arg2 key:(id)arg3 onEvent:(id)arg4 offEvent:(id)arg5;
- (id)_activeAccount;
- (id)accountDatabaseInstanceNames;
- (void)scribeNotificationsAuthorizationChange:(id)arg1 previousRecord:(id)arg2;
- (void)scribeOSLevelNotificationSettingsChange;
- (void)applyPendingFeatureSwitches;
- (id)currentFeatureSwitches;
- (void)saveLoginVerificationToKeychainFromUserDefaultsIfNecessary;
- (_Bool)canBlock:(id)arg1;
- (void)_accountDidAquireUserID:(id)arg1;
- (_Bool)hasAccountWithUserID:(long long)arg1 orUsername:(id)arg2;
- (_Bool)hasAccountWithUsername:(id)arg1;
- (_Bool)hasAccountWithUserID:(long long)arg1;
- (void)reorderAccountWithAccountID:(id)arg1 toAccountWithAccountID:(id)arg2;
- (void)reorderAccountFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)lastUsedAccount;
- (void)_setNoActiveAccount;
- (void)setActiveAccount:(id)arg1;
- (id)scribeForAccountID:(id)arg1;
- (id)defaultAccount;
- (id)accountWithAccountID:(id)arg1;
- (id)accountWithUserReference:(id)arg1;
- (id)accountWithUsername:(id)arg1;
- (id)accountWithUserID:(long long)arg1;
- (void)removeAccount:(id)arg1 withAccountRemovalCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_logoutOauthSessionWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_finishedRemovingAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareToRemoveAccount:(id)arg1 notifyAccountsDidChange:(_Bool)arg2;
- (void)_removeAccount:(id)arg1 notifyAccountsDidChange:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeTeamsAccount:(id)arg1;
- (_Bool)addOrUpdateTeamsAccount:(id)arg1;
- (id)addOrUpdateAccount:(id)arg1;
- (void)_addAccount:(id)arg1 shouldNotifyAccountsDidChange:(_Bool)arg2;
- (void)addAccount:(id)arg1;
- (void)resetAccountsOAuthCredentials;
- (void)sanitizeAccountInfoFilesWithInstructions:(id)arg1;
- (void)saveInfo;
- (void)flushGuestScribe;
@property(readonly, nonatomic) TFNTwitterScribe *guestScribe;
- (void)_saveOAuthTokenSecretForAccounts;
- (id)_userDefaultsDictionaryValueForGroupUserDefaults:(_Bool)arg1;
- (void)_loadWithUserDefaultsDictionary:(id)arg1;
- (void)_loadFromUserDefaultsWithLegacyPlistMigration:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (void)scheduleRecurringForegroundServerAccountBadgesFetchTask;
- (void)scheduleRecurringHashflagsUpdateTask;
@property(nonatomic, readonly) T1HashflagService *hashflagService;
- (id)_createUpdateActiveAccountForPushBadgingTask:(id)arg1;
- (id)_createActiveAccountRefreshTimelineRecurringTask:(id)arg1 initialAccount:(id)arg2 context:(id)arg3;
- (id)_createActiveAccountReloadTypeaheadUserCacheRecurringTask:(id)arg1 context:(id)arg2;
- (id)_createActiveAccountFlushPromotedEventsRecurringTask:(id)arg1 context:(id)arg2;
- (id)_createInactiveAccountsAvatarRefreshRecurringTask:(id)arg1 context:(id)arg2;
- (id)_createInactiveAccountsUserRefreshRecurringTask:(id)arg1 context:(id)arg2;
- (id)_createActiveAccountUserRefreshRecurringTask:(id)arg1 context:(id)arg2;
- (id)_createActiveAccountGetSettingsRecurringTask:(id)arg1 context:(id)arg2;
- (id)_createActiveAccountFlushScribeRecurringTask:(id)arg1 context:(id)arg2;
- (id)_createActiveAccountUpdateFeatureSwitchesRecurringTask:(id)arg1 context:(id)arg2;
- (id)_createFlushInactiveAccountsScribeRecurringTask:(id)arg1 context:(id)arg2;
- (id)_createFlushGuestScribeRecurringTask:(id)arg1 context:(id)arg2;
- (id)_createUpdateDeviceFeatureSwitchesRecurringTask:(id)arg1 context:(id)arg2;
- (id)_createHeartbeatRecurringTask:(id)arg1 context:(id)arg2;
- (id)_createActiveAccountSecondaryTimelineRecurringTasks:(id)arg1 context:(id)arg2;
- (id)_createActiveAccountInitialTimelineRecurringTasks:(id)arg1 context:(id)arg2;
- (void)createSecondaryRecurringTasks;
- (void)createAccountLoadedRecurringTasksWithActiveAccountTaskProviders:(id)arg1;
- (void)prepareRecurringTasksRegistrationsWithContext:(id)arg1;
- (void)deleteAppTokenFromKeychain:(CDUnknownBlockType)arg1;
- (void)saveAppTokenToKeychain:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchAppTokenFromKeychain:(CDUnknownBlockType)arg1;
- (void)guestActivateWithAppToken:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)appTokenExchangeWithResponseBlock:(CDUnknownBlockType)arg1;
- (id)credentialForAccountID:(id)arg1;
- (void)releaseRetainedCredentialForAccountID:(id)arg1;
- (_Bool)retainCredentialForAccountID:(id)arg1;
- (void)_updateOwnerAccountContributeeUserIDs:(id)arg1;
- (_Bool)_isAccountEligibleForTeamsUpdate:(id)arg1;
- (void)_updateTeamsAccountFromDict:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_updateNewContributee:(id)arg1 toDict:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)_didFinishTeamsAccountUpdateWithBlock:(CDUnknownBlockType)arg1;
- (void)_postTeamsNotification:(long long)arg1 accountsDidChange:(_Bool)arg2;
- (_Bool)_shouldReplaceTeamsAccountDict:(id)arg1 withTeamsAccountDict:(id)arg2;
- (_Bool)_removeStrandedTeamsAccounts;
- (_Bool)_isFatalError:(id)arg1;
- (void)_updateTeamsAccountsForAll:(long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)removeAllStrandedTeamsAccount;
- (void)removeAllTeamsAccount;
- (id)getContributorAccountFromTeamsAccount:(id)arg1;
- (_Bool)updateTeamsAccount:(id)arg1 withTeamsAccount:(id)arg2;
- (void)updateTeamsAccountsForAll:(long long)arg1 withDelay:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)updateTeamsAccountsCredentialWithOwnerAccount:(id)arg1;
- (_Bool)shouldUpdateTeamsAccount:(id)arg1 withTeamsAccount:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

