//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface TFNTwitterProgressCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_progressQueue;
    NSMutableDictionary *_progressingDataDictionary;
    NSHashTable *_weakObservers;
    NSMutableSet *_endedProgressingUniqueIDs;
}

+ (id)sharedProgressCenter;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *endedProgressingUniqueIDs; // @synthesize endedProgressingUniqueIDs=_endedProgressingUniqueIDs;
@property(readonly, nonatomic) NSHashTable *weakObservers; // @synthesize weakObservers=_weakObservers;
@property(readonly, nonatomic) NSMutableDictionary *progressingDataDictionary; // @synthesize progressingDataDictionary=_progressingDataDictionary;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *progressQueue; // @synthesize progressQueue=_progressQueue;
- (id)_ftn_progress_currentProgress;
- (void)_tfn_progress_endProgressing:(id)arg1;
- (void)progressingDidEnd:(id)arg1;
- (void)_tfn_progress_updateProgressing:(id)arg1;
- (void)progressingDidUpdate:(id)arg1;
- (void)_tfn_progress_startProgressing:(id)arg1;
- (void)progressingDidStart:(id)arg1;
- (void)unregisterProgressCenterObserver:(id)arg1;
- (void)registerProgressCenterObserver:(id)arg1;
- (id)init;

@end

