//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, TFSDatabaseUIApplicationLink;
@protocol TFSLogger, TFSScribeErrorDelegate;

@interface TFSScribeConfiguration : NSObject
{
    _Bool _usesCompactPersistence;
    _Bool _flushesAllPersistenceStrategies;
    NSURL *_storeURL;
    TFSDatabaseUIApplicationLink *_applicationLink;
    double _shelfLife;
    id <TFSScribeErrorDelegate> _errorDelegate;
    id <TFSLogger> _debugLogger;
}

+ (id)configurationWithStoreURL:(id)arg1 applicationLink:(id)arg2 compactPersistence:(_Bool)arg3 flushesAllPersistence:(_Bool)arg4 errorDelegate:(id)arg5 debugLogger:(id)arg6;
+ (id)inMemoryConfigurationWithCompactPersistence:(_Bool)arg1 flushesAllPersistence:(_Bool)arg2 errorDelegate:(id)arg3 debugLogger:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <TFSLogger> debugLogger; // @synthesize debugLogger=_debugLogger;
@property(readonly, nonatomic) __weak id <TFSScribeErrorDelegate> errorDelegate; // @synthesize errorDelegate=_errorDelegate;
@property(readonly, nonatomic) _Bool flushesAllPersistenceStrategies; // @synthesize flushesAllPersistenceStrategies=_flushesAllPersistenceStrategies;
@property(readonly, nonatomic) _Bool usesCompactPersistence; // @synthesize usesCompactPersistence=_usesCompactPersistence;
@property(readonly, nonatomic) double shelfLife; // @synthesize shelfLife=_shelfLife;
@property(readonly, nonatomic) TFSDatabaseUIApplicationLink *applicationLink; // @synthesize applicationLink=_applicationLink;
@property(readonly, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
- (id)initWithStoreURL:(id)arg1 applicationLink:(id)arg2 compactPersistence:(_Bool)arg3 flushesAllPersistence:(_Bool)arg4 shelfLife:(double)arg5 errorDelegate:(id)arg6 debugLogger:(id)arg7;

@end

