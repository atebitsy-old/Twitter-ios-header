//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/TFSTwitterOnboardingTaskService-Protocol.h>

@class NSError, NSString;
@protocol TFSTwitterOnboardingFixtureTaskServiceDelegate;

@interface TFSTwitterOnboardingFixtureTaskService : NSObject <TFSTwitterOnboardingTaskService>
{
    NSError *_parseError;
    long long _taskIndex;
    CDUnknownBlockType _taskProvider;
    id <TFSTwitterOnboardingFixtureTaskServiceDelegate> _delegate;
    double _fetchNextTaskWaitTime;
    NSError *_fetchNextTaskError;
    long long _fetchNextTaskErrorDelay;
}

- (void).cxx_destruct;
@property(nonatomic) long long fetchNextTaskErrorDelay; // @synthesize fetchNextTaskErrorDelay=_fetchNextTaskErrorDelay;
@property(retain, nonatomic) NSError *fetchNextTaskError; // @synthesize fetchNextTaskError=_fetchNextTaskError;
@property(nonatomic) double fetchNextTaskWaitTime; // @synthesize fetchNextTaskWaitTime=_fetchNextTaskWaitTime;
@property(nonatomic) __weak id <TFSTwitterOnboardingFixtureTaskServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendPreviousTask:(id)arg1 withState:(id)arg2 forAccountID:(id)arg3 terminationReason:(long long)arg4 debugParameters:(id)arg5 headerFields:(id)arg6 fetchNextTaskWithResponseBlock:(CDUnknownBlockType)arg7;
- (id)initWithTaskProvider:(CDUnknownBlockType)arg1;
- (id)initWithTasks:(id)arg1;
- (id)initWithJSONArray:(id)arg1;
- (id)initWithJSONData:(id)arg1;
- (id)initWithFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

