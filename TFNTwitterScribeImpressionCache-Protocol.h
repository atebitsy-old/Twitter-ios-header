//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol TFNTwitterScribeImpressionCacheEntry;

@protocol TFNTwitterScribeImpressionCache <NSObject>
- (id <TFNTwitterScribeImpressionCacheEntry>)entryWithEntryID:(NSString *)arg1 contentID:(NSString *)arg2 impressionDuration:(unsigned long long)arg3;
- (void)removeAllEntries;
- (NSArray *)seenIDsForContentIDPrefix:(NSString *)arg1 sinceLastInvocation:(_Bool)arg2 maxCount:(unsigned long long)arg3;
- (long long)countForContentID:(NSString *)arg1;
- (_Bool)containsEntry:(id <TFNTwitterScribeImpressionCacheEntry>)arg1 withMinImpressionDuration:(unsigned long long)arg2;
- (long long)countForContentIDAfterAddingOrUpdatingEntry:(id <TFNTwitterScribeImpressionCacheEntry>)arg1;
@property(nonatomic, readonly) unsigned long long updateImpressionDurationAfter;

@optional
- (NSDictionary *)plistDictionaryValue;
@end
