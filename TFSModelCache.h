//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSOperationQueue, NSString, TFSModelCacheConfiguration, TFSModelCacheEventCounts, TFSModelCacheWarmingOperation, TFSModelDiskCache, TFSModelMemoryCache;
@protocol OS_dispatch_queue;

@interface TFSModelCache : NSObject
{
    _Bool _isClosed;
    TFSModelCacheConfiguration *_configuration;
    TFSModelCacheEventCounts *_eventCounts;
    NSString *_accountIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
    long long _temporaryNullRecordCleanupSuspendCount;
    NSMutableSet *_operationsToCancelAndWaitForOnClosing;
    CDUnknownBlockType _didClose;
    TFSModelMemoryCache *_memoryCache;
    long long _sessionSerialNumberForLogging;
    TFSModelDiskCache *_diskCache;
    NSString *_loggerIdentifierBaseFormat;
    NSOperationQueue *_expeditedWarmingOperationQueue;
    long long _expeditedWarmingIdentifier;
    TFSModelCacheWarmingOperation *_expeditedWarmingOperation;
}

+ (id)modelCacheWithAccountIdentifier:(id)arg1 configuration:(id)arg2;
+ (void)removeCacheFilesExcludingAccountIdentifiers:(id)arg1 directoryPath:(id)arg2 errorDestination:(CDUnknownBlockType)arg3;
+ (void)removeCacheFilesForAccountIdentifier:(id)arg1 directoryPath:(id)arg2 errorDestination:(CDUnknownBlockType)arg3;
+ (id)databaseFilePathFromDatabaseDirectory:(id)arg1;
+ (id)databaseDirectoryPathFromBaseDirectory:(id)arg1;
+ (id)directoryPathWithContextIdentifier:(id)arg1 configuration:(id)arg2;
+ (id)fileSizeOperationWithDirectoryPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)isDebugEnabledForNewSessions;
+ (void)setDebugEnabledForNewSessions:(_Bool)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TFSModelCacheWarmingOperation *expeditedWarmingOperation; // @synthesize expeditedWarmingOperation=_expeditedWarmingOperation;
@property(nonatomic) long long expeditedWarmingIdentifier; // @synthesize expeditedWarmingIdentifier=_expeditedWarmingIdentifier;
@property(readonly, nonatomic) NSOperationQueue *expeditedWarmingOperationQueue; // @synthesize expeditedWarmingOperationQueue=_expeditedWarmingOperationQueue;
@property(readonly, nonatomic) NSString *loggerIdentifierBaseFormat; // @synthesize loggerIdentifierBaseFormat=_loggerIdentifierBaseFormat;
@property(readonly, nonatomic) TFSModelDiskCache *diskCache; // @synthesize diskCache=_diskCache;
@property(nonatomic) long long sessionSerialNumberForLogging; // @synthesize sessionSerialNumberForLogging=_sessionSerialNumberForLogging;
@property(readonly, nonatomic) TFSModelMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(readonly, copy, nonatomic) CDUnknownBlockType didClose; // @synthesize didClose=_didClose;
@property(readonly, nonatomic) NSMutableSet *operationsToCancelAndWaitForOnClosing; // @synthesize operationsToCancelAndWaitForOnClosing=_operationsToCancelAndWaitForOnClosing;
@property(nonatomic) long long temporaryNullRecordCleanupSuspendCount; // @synthesize temporaryNullRecordCleanupSuspendCount=_temporaryNullRecordCleanupSuspendCount;
@property(nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) TFSModelCacheEventCounts *eventCounts; // @synthesize eventCounts=_eventCounts;
@property(readonly, nonatomic) TFSModelCacheConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)sessionWithSubidentifier:(id)arg1;
- (void)close;
- (void)removeOperationToCancelAndWaitForOnClosing:(id)arg1;
- (_Bool)ifOpenAddOperationToCancelAndWaitForOnClosing:(id)arg1;
- (void)flush;
- (CDUnknownBlockType)warmingOperationMakerWithSessionNameKey:(id)arg1;
- (void)cancelWarming;
- (void)cancelWarmingForKey:(id)arg1;
- (void)cancelExpeditedWarmingWithIdentifier:(long long)arg1;
- (long long)expediteWarmingOfObjectsForKeys:(id)arg1 withQualityOfService:(long long)arg2;
- (void)removeObjectsForKeys:(id)arg1 addObjects:(id)arg2;
- (void)removeObjects:(id)arg1 addObjects:(id)arg2;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjects:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (void)addObject:(id)arg1;
- (id)searchAmongResults:(id)arg1 withKey:(id)arg2 searchOperator:(long long)arg3 value:(id)arg4;
- (id)unenqueuedSearchOperationWithKey:(id)arg1 searchOperator:(long long)arg2 values:(id)arg3 resultCountLimit:(long long)arg4 cancellationCheckBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (id)unenqueuedSearchOperationWithKey:(id)arg1 searchOperator:(long long)arg2 value:(id)arg3 resultCountLimit:(long long)arg4 cancellationCheckBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (id)objectsForKeys:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithAccountIdentifier:(id)arg1 configuration:(id)arg2 didClose:(CDUnknownBlockType)arg3;
- (id)diskCacheDatabaseFilePath;
- (id)diskCacheSearchCountsOperationWithCompletion:(CDUnknownBlockType)arg1;
- (id)diskCacheCountsOperationWithCompletion:(CDUnknownBlockType)arg1;
- (id)memoryCacheSearchCountsOperationWithCompletion:(CDUnknownBlockType)arg1;
- (id)memoryCacheCountsOperationWithCompletion:(CDUnknownBlockType)arg1;

@end

