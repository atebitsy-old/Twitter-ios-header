//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterImagePipeline/NSObject-Protocol.h>

@class TIPLRUCache;
@protocol TIPLRUEntry;

@protocol TIPLRUCacheDelegate <NSObject>

@optional
- (_Bool)tip_cache:(TIPLRUCache *)arg1 canEvictEntry:(id <TIPLRUEntry>)arg2;
- (void)tip_cache:(TIPLRUCache *)arg1 didEvictEntry:(id <TIPLRUEntry>)arg2;
@end

