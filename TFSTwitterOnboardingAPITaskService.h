//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/TFSTwitterOnboardingTaskService-Protocol.h>

@class NSString, TFSTwitterAPICommandService, TFSTwitterOnboardingFlowSpec;
@protocol TFSTwitterAPICommandContext;

@interface TFSTwitterOnboardingAPITaskService : NSObject <TFSTwitterOnboardingTaskService>
{
    id <TFSTwitterAPICommandContext> _context;
    NSString *_knownDeviceToken;
    NSString *_simCountryCode;
    TFSTwitterAPICommandService *_commandService;
    TFSTwitterOnboardingFlowSpec *_flowSpec;
}

- (void).cxx_destruct;
- (void)sendPreviousTask:(id)arg1 withState:(id)arg2 forAccountID:(id)arg3 terminationReason:(long long)arg4 debugParameters:(id)arg5 headerFields:(id)arg6 fetchNextTaskWithResponseBlock:(CDUnknownBlockType)arg7;
- (id)initWithFlowSpec:(id)arg1 commandService:(id)arg2 context:(id)arg3 simCountryCode:(id)arg4 knownDeviceToken:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

