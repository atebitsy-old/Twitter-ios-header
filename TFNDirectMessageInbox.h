//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/TFNDirectMessageInbox-Protocol.h>
#import <T1Twitter/TFNDirectMessageInboxActions-Protocol.h>

@class NSNumber, NSOperationQueue, NSString, TFNDirectMessageContext, TFNDirectMessageInboxPageOperation, TFNDirectMessageInboxTimeline, TFNDirectMessageModel, TFNDirectMessageRefreshOperation, TFSCoalescingUpdater, TFSTwitterAPICommandService;
@protocol TFNDirectMessageInbox, TFSTwitterAPICommandContext;

@interface TFNDirectMessageInbox : NSObject <NSCoding, TFNDirectMessageInbox, TFNDirectMessageInboxActions>
{
    TFNDirectMessageContext *_context;
    NSOperationQueue *_directMessageOperationQueue;
    TFNDirectMessageModel *_directMessageModel;
    NSNumber *_lastLowQualityFilterState;
    long long _lastSeenEventID;
    NSString *_cursor;
    TFSTwitterAPICommandService *_commandService;
    id <TFSTwitterAPICommandContext> _commandContext;
    TFNDirectMessageInboxTimeline *_trustedConversationsTimeline;
    TFNDirectMessageInboxTimeline *_untrustedConversationsTimeline;
    TFNDirectMessageInboxTimeline *_lowQualityConversationsTimeline;
    TFSCoalescingUpdater *_markAsSeenUpdater;
    long long _localLastSeenEventID;
    unsigned long long _countOfUnseenConversationsForBadgingExcludingMuted;
    unsigned long long _countOfUnseenConversationsForBadgingExcludingMutedAndUntrusted;
    unsigned long long _countOfUnseenConversationsForBadgingExcludingUntrusted;
    unsigned long long _legacyCountOfUnseenConversationsForBadging;
    TFNDirectMessageRefreshOperation *_currentRefreshOperation;
    TFNDirectMessageInboxPageOperation *_currentTrustedConversationsPageOperation;
    TFNDirectMessageInboxPageOperation *_currentUntrustedConversationsPageOperation;
    TFNDirectMessageInboxPageOperation *_currentLowQualityConversationsPageOperation;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TFNDirectMessageInboxPageOperation *currentLowQualityConversationsPageOperation; // @synthesize currentLowQualityConversationsPageOperation=_currentLowQualityConversationsPageOperation;
@property(nonatomic) __weak TFNDirectMessageInboxPageOperation *currentUntrustedConversationsPageOperation; // @synthesize currentUntrustedConversationsPageOperation=_currentUntrustedConversationsPageOperation;
@property(nonatomic) __weak TFNDirectMessageInboxPageOperation *currentTrustedConversationsPageOperation; // @synthesize currentTrustedConversationsPageOperation=_currentTrustedConversationsPageOperation;
@property(nonatomic) __weak TFNDirectMessageRefreshOperation *currentRefreshOperation; // @synthesize currentRefreshOperation=_currentRefreshOperation;
@property(nonatomic) unsigned long long legacyCountOfUnseenConversationsForBadging; // @synthesize legacyCountOfUnseenConversationsForBadging=_legacyCountOfUnseenConversationsForBadging;
@property(nonatomic) unsigned long long countOfUnseenConversationsForBadgingExcludingUntrusted; // @synthesize countOfUnseenConversationsForBadgingExcludingUntrusted=_countOfUnseenConversationsForBadgingExcludingUntrusted;
@property(nonatomic) unsigned long long countOfUnseenConversationsForBadgingExcludingMutedAndUntrusted; // @synthesize countOfUnseenConversationsForBadgingExcludingMutedAndUntrusted=_countOfUnseenConversationsForBadgingExcludingMutedAndUntrusted;
@property(nonatomic) unsigned long long countOfUnseenConversationsForBadgingExcludingMuted; // @synthesize countOfUnseenConversationsForBadgingExcludingMuted=_countOfUnseenConversationsForBadgingExcludingMuted;
@property(nonatomic) long long localLastSeenEventID; // @synthesize localLastSeenEventID=_localLastSeenEventID;
@property(readonly, nonatomic) TFSCoalescingUpdater *markAsSeenUpdater; // @synthesize markAsSeenUpdater=_markAsSeenUpdater;
@property(retain, nonatomic) TFNDirectMessageInboxTimeline *lowQualityConversationsTimeline; // @synthesize lowQualityConversationsTimeline=_lowQualityConversationsTimeline;
@property(retain, nonatomic) TFNDirectMessageInboxTimeline *untrustedConversationsTimeline; // @synthesize untrustedConversationsTimeline=_untrustedConversationsTimeline;
@property(retain, nonatomic) TFNDirectMessageInboxTimeline *trustedConversationsTimeline; // @synthesize trustedConversationsTimeline=_trustedConversationsTimeline;
@property(readonly, nonatomic) id <TFSTwitterAPICommandContext> commandContext; // @synthesize commandContext=_commandContext;
@property(readonly, nonatomic) TFSTwitterAPICommandService *commandService; // @synthesize commandService=_commandService;
@property(copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) long long lastSeenEventID; // @synthesize lastSeenEventID=_lastSeenEventID;
@property(retain, nonatomic) NSNumber *lastLowQualityFilterState; // @synthesize lastLowQualityFilterState=_lastLowQualityFilterState;
@property(retain, nonatomic) TFNDirectMessageModel *directMessageModel; // @synthesize directMessageModel=_directMessageModel;
@property(retain, nonatomic) NSOperationQueue *directMessageOperationQueue; // @synthesize directMessageOperationQueue=_directMessageOperationQueue;
@property(readonly, nonatomic) TFNDirectMessageContext *context; // @synthesize context=_context;
- (void)_enqueueMetadataUpdateNotification;
- (void)_enqueueTimelineUpdateNotification;
- (void)_updateUnseenConversationCountsWithLastSeenEventID:(long long)arg1;
- (void)setCursor:(id)arg1 forTimeline:(id)arg2;
- (void)deleteConversation:(id)arg1;
- (void)recalculateConversationCounts;
- (void)updateConversationPosition:(id)arg1;
- (void)slotConversationInTimeline:(id)arg1;
- (void)addConversation:(id)arg1;
- (id)_validateConversationIsDefinitive:(id)arg1;
- (void)_addConversation:(id)arg1;
- (void)pruneOldConversations;
- (void)fetchPermissionForUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPermissionForUserID:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_markAsSeen;
- (void)fetchTopRequests:(_Bool)arg1;
- (void)markAsSeenThroughConversation:(id)arg1;
- (void)markAsSeen;
- (void)loadMoreConversationsWithCursor:(id)arg1 filterNSFW:(_Bool)arg2;
- (void)refresh:(long long)arg1 activeConversationID:(id)arg2 filterLowQuality:(id)arg3 filterNSFW:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic, getter=isRefreshing) _Bool refreshing;
@property(readonly, nonatomic) id <TFNDirectMessageInbox> inbox;
- (id)conversationByID:(id)arg1;
@property(readonly, nonatomic) long long maxSortEventID;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, nonatomic) _Bool filtersLowQualityConversations;
- (id)internalLowQualityConversationsTimeline;
- (id)internalUntrustedConversationsTimeline;
- (id)internalTrustedConversationsTimeline;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)countOfUnseenConversationsForBadgingExcludingMuted:(_Bool)arg1 excludingUntrusted:(_Bool)arg2;
@property(readonly, nonatomic) _Bool countOfUnseenConversationsForBadgingDiffersFromLegacy;
- (void)clear;
- (id)initWithContext:(id)arg1 cursor:(id)arg2 lastSeenEventID:(long long)arg3 trustedConversationsTimeline:(id)arg4 untrustedConversationsTimeline:(id)arg5 lowQualityConversationsTimeline:(id)arg6 lastLowQualityFilterState:(id)arg7 commandService:(id)arg8 commandContext:(id)arg9;
- (id)initWithContext:(id)arg1 commandService:(id)arg2 commandContext:(id)arg3;
- (void)flushMarkAsSeen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

