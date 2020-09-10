//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1MetricKitManagerScribeProvider-Protocol.h>

@class T1Canary, T1ImagePipelineService, T1MediaServicesResetScribe, T1PlayerNetworkUsageObserver, T1TwitterAPITweetEngagementsLimitedListener, TFNTwitterDeviceTokenManager;
@protocol CrashlyticsDelegate, TFSAuthCredentialStateTransitionDelegate;

@interface T1AppServicesManager : NSObject <T1MetricKitManagerScribeProvider>
{
    _Bool _purgedAllDBInstances;
    _Bool _appLaunchBeforeFirstUnlockCheckDisabled;
    id <CrashlyticsDelegate> _fabricCrashlyticsDelegate;
    id <TFSAuthCredentialStateTransitionDelegate> _credentialStateTransitionDelegate;
    TFNTwitterDeviceTokenManager *_deviceTokenManager;
    T1Canary *_canary;
    T1ImagePipelineService *_imagePipelineService;
    T1MediaServicesResetScribe *_mediaServicesResetScribe;
    T1PlayerNetworkUsageObserver *_playerNetworkUsageObserver;
    T1TwitterAPITweetEngagementsLimitedListener *_tweetEngagementsLimitedListener;
}

+ (id)appShortcutAsyncCameraLoadingSwitch;
+ (void)setAppShortcutAsyncCameraLoadingAccountID:(id)arg1;
+ (id)appShortcutAsyncCameraLoadingAccountID;
+ (id)canaryAsyncKeychainLoadingSwitch;
+ (void)setCanaryAsyncKeychainLoadingAccountID:(id)arg1;
+ (id)canaryAsyncKeychainLoadingAccountID;
+ (id)twitterTextAsyncConfigLoadSwitch;
+ (void)setTwitterTextAsyncConfigLoadingAccountID:(id)arg1;
+ (id)twitterTextAsyncConfigLoadingAccountID;
+ (void)setTipImageCodecAsyncLoadingAccountID:(id)arg1;
+ (id)tipImageCodecAsyncLoadingAccountID;
+ (id)urtAnatomyReferencingSetOptimizationSwitch;
+ (id)tipImageCodecAsyncLoadingEnabledSwitch;
- (void).cxx_destruct;
@property(retain, nonatomic) T1TwitterAPITweetEngagementsLimitedListener *tweetEngagementsLimitedListener; // @synthesize tweetEngagementsLimitedListener=_tweetEngagementsLimitedListener;
@property(retain, nonatomic) T1PlayerNetworkUsageObserver *playerNetworkUsageObserver; // @synthesize playerNetworkUsageObserver=_playerNetworkUsageObserver;
@property(retain, nonatomic) T1MediaServicesResetScribe *mediaServicesResetScribe; // @synthesize mediaServicesResetScribe=_mediaServicesResetScribe;
@property(retain, nonatomic) T1ImagePipelineService *imagePipelineService; // @synthesize imagePipelineService=_imagePipelineService;
@property(retain, nonatomic) T1Canary *canary; // @synthesize canary=_canary;
@property(nonatomic) _Bool appLaunchBeforeFirstUnlockCheckDisabled; // @synthesize appLaunchBeforeFirstUnlockCheckDisabled=_appLaunchBeforeFirstUnlockCheckDisabled;
@property(nonatomic) _Bool purgedAllDBInstances; // @synthesize purgedAllDBInstances=_purgedAllDBInstances;
@property(readonly, nonatomic) TFNTwitterDeviceTokenManager *deviceTokenManager; // @synthesize deviceTokenManager=_deviceTokenManager;
@property(nonatomic) __weak id <TFSAuthCredentialStateTransitionDelegate> credentialStateTransitionDelegate; // @synthesize credentialStateTransitionDelegate=_credentialStateTransitionDelegate;
@property(nonatomic) __weak id <CrashlyticsDelegate> fabricCrashlyticsDelegate; // @synthesize fabricCrashlyticsDelegate=_fabricCrashlyticsDelegate;
- (id)scribeForMetricKitManager:(id)arg1;
- (_Bool)_shouldDebugScribe;
- (void)_checkAppDidUpdate;
- (void)_scheduleSaveLoginVerification;
- (void)_scheduleGeoDataStartup;
- (void)_schedulePushRegistration;
- (void)_beginMonitoringKeyboardNotifications;
- (void)_t1_configureDismissButtonWithAccount:(id)arg1;
- (void)_t1_configureTwitterText;
- (void)_t1_startCacheManager;
- (void)_setupMediaPlayer;
- (void)_setupFrameRateReporterForAccount:(id)arg1;
- (void)_registerUserDefaults;
- (void)_updateImageVariantDefaultsForAccount:(id)arg1;
- (void)_updateShortenedURLLengthConfigurations:(id)arg1;
- (void)_configureDeviceTokenManager:(_Bool)arg1;
- (void)_configureAuthorizationManager:(id)arg1 switches:(id)arg2;
- (void)_setUpTFNUIConfiguration;
- (void)_updateCoreServicesConfiguration;
- (void)_startTFSCredentialsManager:(id)arg1;
- (void)_setUpGraphicsFilters;
- (void)_setUpImageVariantSelectionBehavior;
- (void)_startImagePipelinesWithDeviceFeatureSwitches:(id)arg1;
- (void)_startGlobalHeaderProvider;
- (void)_startAPIErrorResponseMonitor;
- (void)_startNetworkMonitor;
- (void)_setUpSharedAudioSession;
- (void)_setupAppShortcuts;
- (void)_setupTimelineFactory;
- (void)_setupDirectMessages;
- (void)_setupLiveAddressBookSynchronizationWithAccount:(id)arg1;
- (void)_deleteUnusedDBInstances;
- (id)recreateDBIfNecessaryReturningNonFatalError;
- (void)_deleteAllLegacyDatabases;
- (_Bool)_purgeDirectory:(id)arg1;
- (void)_purgeLocalArchivesAndSettings;
- (_Bool)_purgeArchivesIfNecessary;
- (void)_updateTextSizeCaching:(id)arg1;
- (void)_updateImagePipelinesWithDeviceFeatureSwitches:(id)arg1;
- (void)_updateScribeServiceSettings;
- (void)_t1_updateAPIErrorMonitorSetting;
- (void)_updateTNLConfig:(id)arg1;
- (void)_updateRetryPolicyConfig:(id)arg1;
- (void)_updateUserLoggingConfig;
- (void)_handleAccountRemovedFoundMediaPersistentStorageUpdate:(id)arg1;
- (void)_handleChangedFeatureSwitchesWithAccount:(id)arg1;
- (void)_handleAccountFeatureSwitchesDidUpdate:(id)arg1;
- (void)_handleAccountDidBecomeActive:(id)arg1;
- (void)_handleAccountRemoved:(id)arg1;
- (void)_handleDeviceFeatureSwitchesDidUpdate:(id)arg1;
- (void)_startFeatureSwitches;
- (void)_startCanary;
- (void)_startNetworkTrafficControlTower;
- (void)startWorkForApplicationUpdateFromVersion:(id)arg1 toVersion:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startSentinelManagerWithDidCrashDuringPreviousExecution:(_Bool)arg1;
- (void)_customizeCrashlytics;
- (void)startCrashlytics;
- (void)setUpAppServicesWithPushRegistration:(id)arg1 freshInstall:(_Bool)arg2;
- (void)_setupURTTimelineEncodingPolicyConfiguration;
- (void)setUpCoreServicesWithConfiguration:(id)arg1;
- (void)saveServiceStates;
- (id)init;

@end

