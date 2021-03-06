//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, TFSModelCachePerTypeItemCounts;

@interface TFSModelCacheItemCounts : NSObject
{
    NSMutableDictionary *_typeNameToItemCounts;
    TFSModelCachePerTypeItemCounts *_itemCountsForAllTypes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFSModelCachePerTypeItemCounts *itemCountsForAllTypes; // @synthesize itemCountsForAllTypes=_itemCountsForAllTypes;
@property(readonly, nonatomic) NSDictionary *typeNameToItemCounts; // @synthesize typeNameToItemCounts=_typeNameToItemCounts;
- (void)incrementForRetention:(long long)arg1 typeName:(id)arg2;
- (id)init;

@end

