//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterCrashlytics/NSURLSessionDelegate-Protocol.h>

@class CLSBetaUpdate, FABNetworkClient, NSString, NSTimer;
@protocol CLSBetaControllerDelegate, OS_dispatch_queue;

@interface CLSBetaController : NSObject <NSURLSessionDelegate>
{
    NSString *_betaToken;
    _Bool _checksSuspended;
    _Bool _retrying;
    id <CLSBetaControllerDelegate> _delegate;
    FABNetworkClient *_networkClient;
    CLSBetaUpdate *_activeUpdate;
    NSTimer *_checkSuspensionTimer;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)pinnnedCertificates;
+ (_Bool)isBetaSupported;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool retrying; // @synthesize retrying=_retrying;
@property(nonatomic) _Bool checksSuspended; // @synthesize checksSuspended=_checksSuspended;
@property(retain, nonatomic) NSTimer *checkSuspensionTimer; // @synthesize checkSuspensionTimer=_checkSuspensionTimer;
@property(retain, nonatomic) CLSBetaUpdate *activeUpdate; // @synthesize activeUpdate=_activeUpdate;
@property(readonly, nonatomic) FABNetworkClient *networkClient; // @synthesize networkClient=_networkClient;
@property(nonatomic) __weak id <CLSBetaControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)fabricSettingsDownloaded:(id)arg1;
- (void)showBetaAlertForUpdate:(id)arg1;
- (void)didGetUpdate:(id)arg1;
- (_Bool)shouldGetUpdates;
- (void)applicationWillEnterForeground;
- (void)allowChecks;
- (void)temporarilySuspendChecks;
- (id)updateWithData:(id)arg1 error:(id *)arg2;
- (void)handledCompletedBetaRequestWithData:(id)arg1 error:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loadUpdateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)maybeGetUpdate:(CDUnknownBlockType)arg1;
- (void)checkForUpdate;
- (id)betaUpdateURL;
- (id)APIKey;
- (id)appInstallationSource;
- (id)appInstanceIdentifier;
- (id)appDisplayVersion;
- (id)appBuildVersion;
- (id)appBundleIdentifier;
- (id)betaEndpoint;
- (id)betaUpdateSuspendDurationSecs;
- (id)settings;
@property(readonly, copy, nonatomic) NSString *betaToken;
- (void)dealloc;
- (_Bool)start;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

