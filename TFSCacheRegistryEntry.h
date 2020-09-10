//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, TFSCacheRegistrant;

@interface TFSCacheRegistryEntry : NSObject
{
    id <TFSCacheRegistrant> _cache;
    NSObject<OS_dispatch_queue> *_executorQueue;
    CDUnknownBlockType _executorBlock;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType executorBlock; // @synthesize executorBlock=_executorBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *executorQueue; // @synthesize executorQueue=_executorQueue;
@property(readonly, nonatomic) __weak id <TFSCacheRegistrant> cache; // @synthesize cache=_cache;
- (id)init;
- (id)initWithRegistrant:(id)arg1 executorQueue:(id)arg2 executorBlock:(CDUnknownBlockType)arg3;

@end

