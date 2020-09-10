//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNTwitterScribeBackgroundTaskManager, TFNTwitterScribeLifecycleObserver, TFNTwitterScribeWriter, TFSScribe, TFSTwitterScribeErrorHandler;

@interface TFNTwitterScribeSystem : NSObject
{
    // Error parsing type: {?="lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"predicate"{atomic_flag="_Value"AB}}, name: _memberTransientDispatchOnceToken
    // Error parsing type: {?="lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"predicate"{atomic_flag="_Value"AB}}, name: _scribeWriterMemberTransientDispatchOnceToken
    TFSScribe *_scribeService;
    TFSTwitterScribeErrorHandler *_errorHandler;
    TFNTwitterScribeLifecycleObserver *_lifecycleObserver;
    TFNTwitterScribeWriter *_scribeWriter;
    TFNTwitterScribeBackgroundTaskManager *_backgroundTaskManager;
}

+ (void)setSharedSystemClientProvider:(id)arg1;
+ (id)sharedSystem;
- (void).cxx_destruct;
@property(retain, nonatomic) TFNTwitterScribeBackgroundTaskManager *backgroundTaskManager; // @synthesize backgroundTaskManager=_backgroundTaskManager;
@property(retain, nonatomic) TFNTwitterScribeWriter *scribeWriter; // @synthesize scribeWriter=_scribeWriter;
@property(retain, nonatomic) TFNTwitterScribeLifecycleObserver *lifecycleObserver; // @synthesize lifecycleObserver=_lifecycleObserver;
@property(retain, nonatomic) TFSTwitterScribeErrorHandler *errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) TFSScribe *scribeService; // @synthesize scribeService=_scribeService;
- (void)_invalidateScribeWriter;
- (void)_openService;
- (void)_openServiceIfNecessary;
- (void)_purgeScribeDirectory;
- (void)_purgeScribeDirectoryIfNecessary;
- (id)init;
- (id)clientName;

@end
