//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterHomeFeatureSwitchParameters-Protocol.h>

@class NSString;

@interface TFNTwitterHomeFeatureSwitchParametersConfig : NSObject <TFNTwitterHomeFeatureSwitchParameters>
{
    _Bool _progressiveAPIEnabled;
    _Bool _isClientDedupingUsingImpressionCacheEnabled;
    _Bool _latestHomeTimelineOptionAvailable;
    _Bool _topCursorPrefetchEnabled;
    _Bool _threadedHomeConversationsEnabled;
    _Bool _moduleItemTreeDisplayTreesEnabled;
    _Bool _emptyChunkClearingEnabled;
    _Bool _homeConversationHoistingPreventionEnabled;
    unsigned long long _homeRequestMaxSeenIDs;
    long long _progressiveAPISegmentSize;
    unsigned long long _clientDedupingMaxRecentCacheEntries;
}

@property(nonatomic, getter=isHomeConversationHoistingPreventionEnabled) _Bool homeConversationHoistingPreventionEnabled; // @synthesize homeConversationHoistingPreventionEnabled=_homeConversationHoistingPreventionEnabled;
@property(nonatomic, getter=isEmptyChunkClearingEnabled) _Bool emptyChunkClearingEnabled; // @synthesize emptyChunkClearingEnabled=_emptyChunkClearingEnabled;
@property(nonatomic, getter=isModuleItemTreeDisplayTreesEnabled) _Bool moduleItemTreeDisplayTreesEnabled; // @synthesize moduleItemTreeDisplayTreesEnabled=_moduleItemTreeDisplayTreesEnabled;
@property(nonatomic, getter=isThreadedHomeConversationsEnabled) _Bool threadedHomeConversationsEnabled; // @synthesize threadedHomeConversationsEnabled=_threadedHomeConversationsEnabled;
@property(nonatomic, getter=isTopCursorPrefetchEnabled) _Bool topCursorPrefetchEnabled; // @synthesize topCursorPrefetchEnabled=_topCursorPrefetchEnabled;
@property(nonatomic, getter=isLatestHomeTimelineOptionAvailable) _Bool latestHomeTimelineOptionAvailable; // @synthesize latestHomeTimelineOptionAvailable=_latestHomeTimelineOptionAvailable;
@property(nonatomic) unsigned long long clientDedupingMaxRecentCacheEntries; // @synthesize clientDedupingMaxRecentCacheEntries=_clientDedupingMaxRecentCacheEntries;
@property(nonatomic) _Bool isClientDedupingUsingImpressionCacheEnabled; // @synthesize isClientDedupingUsingImpressionCacheEnabled=_isClientDedupingUsingImpressionCacheEnabled;
@property(nonatomic) long long progressiveAPISegmentSize; // @synthesize progressiveAPISegmentSize=_progressiveAPISegmentSize;
@property(nonatomic, getter=isProgressiveAPIEnabled) _Bool progressiveAPIEnabled; // @synthesize progressiveAPIEnabled=_progressiveAPIEnabled;
@property(nonatomic) unsigned long long homeRequestMaxSeenIDs; // @synthesize homeRequestMaxSeenIDs=_homeRequestMaxSeenIDs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

