//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFSTwitterRecurringTaskRegistrationCollection, TFSTwitterRecurringTaskTriggeredCollection;
@protocol OS_dispatch_queue, TFSTwitterRecurringTaskServiceObserver;

@interface TFSTwitterRecurringTaskService : NSObject
{
    NSObject<OS_dispatch_queue> *_serviceQueue;
    id <TFSTwitterRecurringTaskServiceObserver> _observer;
    TFSTwitterRecurringTaskRegistrationCollection *_registeredTasks;
    TFSTwitterRecurringTaskTriggeredCollection *_triggeredTasks;
    struct {
        unsigned int deferEnabled:1;
        unsigned int suspended:1;
        unsigned int suspensionStateIsChanging:1;
        unsigned int suspensionStateTarget:1;
    } _flags;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_tfs_observedEvent:(id)arg1 fromSource:(id)arg2 forTask:(id)arg3 shouldKeepObserving:(_Bool)arg4;
- (void)_tfs_completeActiveTask:(id)arg1 duration:(double)arg2;
- (void)_tfs_service_observedEvent:(id)arg1 fromSource:(id)arg2 forTask:(id)arg3 shouldKeepObserving:(_Bool)arg4;
- (void)_tfs_service_timeoutActiveTask:(id)arg1 duration:(double)arg2;
- (void)_tfs_service_completeActiveTask:(id)arg1 duration:(double)arg2;
- (void)_tfs_service_handleCompletionNeverCalledForTask:(id)arg1 duration:(double)arg2;
- (void)_tfs_service_dequeueTriggerIfPossible;
- (void)_tfs_service_deferRecurringTask:(id)arg1;
- (void)_tfs_service_triggerRecurringTask:(id)arg1 event:(id)arg2 source:(id)arg3 priority:(long long)arg4;
- (void)_tfs_service_triggerRecurringTask:(id)arg1 eventName:(id)arg2 context:(id)arg3;
- (void)_tfs_service_unregisterRecurringTask:(id)arg1;
- (void)_tfs_service_registerRecurringTask:(id)arg1 eventSources:(id)arg2 triggerOnRegistration:(_Bool)arg3 context:(id)arg4;
- (void)triggerSingleShotRecurringTaskWithName:(id)arg1 context:(id)arg2 priority:(long long)arg3 triggerBlock:(CDUnknownBlockType)arg4;
- (void)deferRecurringTask:(id)arg1;
- (void)triggerRecurringTask:(id)arg1 eventName:(id)arg2 context:(id)arg3;
- (void)unregisterRecurringTask:(id)arg1;
- (void)registerRecurringTask:(id)arg1 eventSources:(id)arg2 triggerOnRegistration:(_Bool)arg3 context:(id)arg4;
@property(retain) id <TFSTwitterRecurringTaskServiceObserver> observer;
@property double maximumTaskBlockingDuration;
@property(getter=isDeferEnabled) _Bool deferEnabled;
@property(getter=isSuspended) _Bool suspended;
@property unsigned long long concurrentTasks;
- (void)dealloc;
- (id)init;

@end

