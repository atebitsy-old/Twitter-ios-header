//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, TFSDatabaseUIApplicationLink;

@interface TFSScribeConfiguration : NSObject
{
    NSURL *_storeURL;
    double _shelfLife;
    TFSDatabaseUIApplicationLink *_applicationLink;
    CDUnknownBlockType _debugBlock;
    CDUnknownBlockType _errorBlock;
}

+ (id)configurationWithStoreURL:(id)arg1 shelfLife:(double)arg2 applicationLink:(id)arg3 errorBlock:(CDUnknownBlockType)arg4 debugBlock:(CDUnknownBlockType)arg5;
+ (id)configurationWithStoreURL:(id)arg1 applicationLink:(id)arg2 errorBlock:(CDUnknownBlockType)arg3 debugBlock:(CDUnknownBlockType)arg4;
+ (id)inMemoryConfigurationWithShelfLife:(double)arg1 errorBlock:(CDUnknownBlockType)arg2 debugBlock:(CDUnknownBlockType)arg3;
+ (id)inMemoryConfigurationWithErrorBlock:(CDUnknownBlockType)arg1 debugBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType debugBlock; // @synthesize debugBlock=_debugBlock;
@property(readonly, nonatomic) TFSDatabaseUIApplicationLink *applicationLink; // @synthesize applicationLink=_applicationLink;
@property(readonly, nonatomic) double shelfLife; // @synthesize shelfLife=_shelfLife;
@property(readonly, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
- (id)initWithStoreURL:(id)arg1 shelfLife:(double)arg2 applicationLink:(id)arg3 errorBlock:(CDUnknownBlockType)arg4 debugBlock:(CDUnknownBlockType)arg5;

@end
