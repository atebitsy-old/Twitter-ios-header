//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1AppLaunchContext-Protocol.h>

@class NSString, NSURL, TFSTwitterPushNotificationPayload;

@interface T1AppLaunchOptionsInfo : NSObject <T1AppLaunchContext>
{
    _Bool _populated;
    _Bool _applicationHasStartedLaunching;
    _Bool _applicationHasCompletedLaunching;
    _Bool _composerWillBePresented;
    long long _appState;
    _Bool _needsLaunchURLFromSiri;
    _Bool _isBackgroundLaunch;
    _Bool _isLaunching;
    _Bool _isLaunchingToPanelRoot;
    NSString *_launchID;
    long long _launchType;
    NSURL *_launchURL;
    TFSTwitterPushNotificationPayload *_deferredPushPayload;
    long long _deferredPushContext;
    long long _entryPoint;
    long long _launchDestinationHandlerActionType;
    long long _launchPanelID;
}

- (void).cxx_destruct;
@property(nonatomic) long long launchPanelID; // @synthesize launchPanelID=_launchPanelID;
@property(nonatomic) long long launchDestinationHandlerActionType; // @synthesize launchDestinationHandlerActionType=_launchDestinationHandlerActionType;
@property(nonatomic) _Bool isLaunchingToPanelRoot; // @synthesize isLaunchingToPanelRoot=_isLaunchingToPanelRoot;
@property(nonatomic) _Bool isLaunching; // @synthesize isLaunching=_isLaunching;
@property(nonatomic) _Bool isBackgroundLaunch; // @synthesize isBackgroundLaunch=_isBackgroundLaunch;
@property(nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(nonatomic) _Bool needsLaunchURLFromSiri; // @synthesize needsLaunchURLFromSiri=_needsLaunchURLFromSiri;
@property(nonatomic) long long deferredPushContext; // @synthesize deferredPushContext=_deferredPushContext;
@property(retain, nonatomic) TFSTwitterPushNotificationPayload *deferredPushPayload; // @synthesize deferredPushPayload=_deferredPushPayload;
@property(retain, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(nonatomic) long long launchType; // @synthesize launchType=_launchType;
@property(retain, nonatomic) NSString *launchID; // @synthesize launchID=_launchID;
@property(readonly, nonatomic) _Bool handledPushNotificationOrURLOnLaunch;
@property(readonly, nonatomic) _Bool isLaunchFromPush;
@property(nonatomic) long long appState;
- (void)_t1_assertPopulated;
- (long long)_t1_launchDestinationHandlerActionTypeForURL:(id)arg1;
- (void)_t1_applicationDidLaunchWithTwitterSchemaURL:(id)arg1;
- (void)_t1_applicationDidLaunchWithSiriShortcutsUserActivity:(id)arg1;
- (void)_t1_applicationDidLaunchWithDeepLinkUserActivity:(id)arg1;
- (void)_t1_applicationDidLaunchWithQuickActionMenuOptions:(id)arg1;
- (void)_t1_applicationDidLaunchWithRemoteNotificationUserInfo:(id)arg1;
- (void)_t1_applicationDidLaunchWithUserActivity:(id)arg1;
- (void)_t1_resetAppLaunchOptions;
- (void)_t1_logApplicationState;
- (void)_t1_computePanelID;
- (void)composerWillBePresentedOnLaunch;
- (void)onApplicationStartWithOptions:(id)arg1;
- (void)notifyAppLaunchCompleted;
- (void)notifyAppLaunchBegan;
- (void)onApplicationReceivedRemoteNotificationWithUserInfo:(id)arg1;
- (void)onApplicationContinueUserActivity:(id)arg1;
- (void)onDeferredSetupOnTwitterStart;
- (void)onApplicationWillEnterForegroundFromBackground;
- (void)onApplicationDidEnterBackground;
- (void)onApplicationDidBecomeActive;
- (void)onApplicationDidFinishLaunchingWithState:(long long)arg1;
- (id)init;

@end

