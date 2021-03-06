//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribe/TFSScribePersistenceStrategy-Protocol.h>

@class NSString, TFSDatabase, TFSDatabaseUIApplicationLink, TFSScribeDatabaseLog;
@protocol OS_dispatch_queue, TFSLogger;

@interface TFSScribePersistenceStrategySqlite : NSObject <TFSScribePersistenceStrategy>
{
    NSString *_sqlitePath;
    TFSDatabaseUIApplicationLink *_applicationLink;
    double _shelfLife;
    TFSScribeDatabaseLog *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_openQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    // Error parsing type: AB, name: _isOpen
    TFSDatabase *_db;
    _Bool _debugEnabled;
    CDUnknownBlockType _errorLogger;
    id <TFSLogger> _debugLogger;
    CDUnknownBlockType _didEnqueueEvent;
}

+ (id)_expectedColumnsForTable:(id)arg1;
+ (id)_expectedSqliteSequenceTableColumns;
+ (id)_expectedSqliteImpressionTableColumns;
+ (id)_expectedSqliteEventTableColumns;
+ (id)_createSqliteSequenceTableString;
+ (id)_createSqliteImpressionTableString;
+ (id)_createSqliteEventTableString;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType didEnqueueEvent; // @synthesize didEnqueueEvent=_didEnqueueEvent;
@property _Bool debugEnabled; // @synthesize debugEnabled=_debugEnabled;
@property(readonly, nonatomic) id <TFSLogger> debugLogger; // @synthesize debugLogger=_debugLogger;
@property(readonly, copy, nonatomic) CDUnknownBlockType errorLogger; // @synthesize errorLogger=_errorLogger;
- (id)_argListString:(id)arg1;
- (void)_handleScribeError:(id)arg1 message:(id)arg2;
- (void)_handleScribeErrorWithMessage:(id)arg1;
- (_Bool)_performDbTransaction:(CDUnknownBlockType)arg1 errorMessage:(id)arg2;
- (void)_executeLoopedDbUpdate:(id)arg1 args:(id)arg2 numBindings:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_executeLoopedDbUpdate:(id)arg1 args:(id)arg2 numBindings:(unsigned long long)arg3;
- (void)_executeDbUpdate:(id)arg1 args:(id)arg2;
- (void)_executeDbUpdate:(id)arg1;
- (void)clearScribeDatabase;
- (id)_tableColumns:(id)arg1;
- (_Bool)_doesTable:(id)arg1 haveExactColumns:(id)arg2;
- (_Bool)_isRecognizedSqliteDb;
- (_Bool)_setupSequenceTable;
- (_Bool)_setupSqliteTables;
- (_Bool)_dropTables;
- (id)_allNonReservedTableNames:(id)arg1;
- (_Bool)_isReservedSqliteTable:(id)arg1;
- (_Bool)_deleteStaleEventsAndImpressions;
- (_Bool)_resetOutgoingRequestStatus;
- (_Bool)_deleteMaximumRetryCountEvents;
- (_Bool)_setupSqlite;
- (void)_deleteSequencesForGroups:(id)arg1;
- (void)_deleteImpressionsForGroups:(id)arg1;
- (void)_deleteEventsForGroups:(id)arg1;
- (void)deleteGroups:(id)arg1;
- (void)_setSequenceTimestampAndNumberForSerializer:(id)arg1;
- (id)_retryDistributionForEvents:(id)arg1;
- (void)_didFlushEvents:(id)arg1 retrySubsetEvents:(id)arg2;
- (void)_didFlushEvents:(id)arg1 behavior:(unsigned long long)arg2;
- (void)_didFlushEvents:(id)arg1 behavior:(unsigned long long)arg2 retryEvents:(id)arg3;
- (id)_flushEventsWithGroups:(id)arg1 fetchLimit:(unsigned long long)arg2;
- (void)_batchImpressionsForGroups:(id)arg1 requestHandler:(id)arg2;
- (void)flushGroups:(id)arg1 fetchLimit:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 eventsHandler:(id)arg4 impressionsHandler:(id)arg5 didFlushBatch:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_enqueueImpression:(id)arg1 eventName:(id)arg2 query:(id)arg3 timestamp:(id)arg4 group:(id)arg5;
- (void)enqueueImpression:(id)arg1 eventName:(id)arg2 query:(id)arg3 group:(id)arg4 timestamp:(id)arg5;
- (void)_enqueueEvents:(id)arg1 timestamp:(id)arg2;
- (void)enqueueEvent:(id)arg1 timestamp:(id)arg2;
- (void)enqueueCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)isOpen;
- (void)closeWithStartBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)openWithStartBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithStoreURL:(id)arg1 applicationLink:(id)arg2 shelfLife:(double)arg3 errorLogger:(CDUnknownBlockType)arg4 debugLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

