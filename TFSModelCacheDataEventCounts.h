//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSModel/NSCopying-Protocol.h>

@interface TFSModelCacheDataEventCounts : NSObject <NSCopying>
{
    long long _memoryCacheHitCount;
    long long _diskCacheHitCount;
    long long _diskCacheMissCount;
    long long _addCount;
    long long _removeCount;
    long long _memoryCacheRemovalByLostOwnershipCount;
    long long _memoryCacheAgeOutCount;
}

@property(nonatomic) long long memoryCacheAgeOutCount; // @synthesize memoryCacheAgeOutCount=_memoryCacheAgeOutCount;
@property(nonatomic) long long memoryCacheRemovalByLostOwnershipCount; // @synthesize memoryCacheRemovalByLostOwnershipCount=_memoryCacheRemovalByLostOwnershipCount;
@property(nonatomic) long long removeCount; // @synthesize removeCount=_removeCount;
@property(nonatomic) long long addCount; // @synthesize addCount=_addCount;
@property(nonatomic) long long diskCacheMissCount; // @synthesize diskCacheMissCount=_diskCacheMissCount;
@property(nonatomic) long long diskCacheHitCount; // @synthesize diskCacheHitCount=_diskCacheHitCount;
@property(nonatomic) long long memoryCacheHitCount; // @synthesize memoryCacheHitCount=_memoryCacheHitCount;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
