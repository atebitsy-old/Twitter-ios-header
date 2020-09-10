//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DirectMessageConversation.h>

@class NSArray, NSDate, NSNumber, NSString, TFNDirectMessageComposition, TFNDirectMessageContext, TFNDirectMessageConversationIdentifier, TFSTwitterEntityImageInfo;
@protocol TFNDirectMessageConversationEntry, TFNDirectMessageConversationParticipant, TFNDirectMessageConversationSocialProof, TFNDirectMessageInbox;

@interface T1DirectMessageConversation (TwitterDirectMessagesUI)
@property(nonatomic, readonly) _Bool unread;
@property(nonatomic, readonly) _Bool mentionNotificationsDisabled;
@property(nonatomic, readonly) NSDate *muteExpirationTime;
@property(nonatomic, readonly) _Bool notificationsDisabled;
- (id)admin;
- (id)recipient;
@property(nonatomic, readonly) id <TFNDirectMessageConversationParticipant> perspectivalParticipant;
@property(nonatomic, readonly) NSArray *participantsExcludingPerspectivalUser;
@property(nonatomic, readonly) NSArray *participants;
@property(nonatomic, readonly) long long creatorID;
@property(nonatomic, readonly) NSDate *latestUpdateTime;
@property(nonatomic, readonly) NSDate *createTime;
- (void)resetComposition;
@property(nonatomic, readonly) TFNDirectMessageComposition *composition;
- (id)latestEntryOfType:(unsigned long long)arg1;
- (id)entryAtIndex:(unsigned long long)arg1;
@property(nonatomic, readonly) id <TFNDirectMessageConversationEntry> latestEntry;
@property(nonatomic, readonly) _Bool isIdentifiable;
@property(nonatomic, readonly) _Bool hasMoreEntries;
@property(nonatomic, readonly) unsigned long long entryCount;
- (_Bool)isEmpty;
@property(nonatomic, readonly) NSArray *allEntries;
@property(nonatomic, readonly) _Bool isSelfConversation;
@property(nonatomic, readonly) CDStruct_912cb5d2 readState;
@property(nonatomic, readonly) TFSTwitterEntityImageInfo *avatarInfo;
@property(nonatomic, readonly) id <TFNDirectMessageConversationSocialProof> socialProof;
- (_Bool)isLowQuality;
@property(nonatomic, readonly) NSNumber *topRequestRank;
- (_Bool)isTopRequest;
- (_Bool)isTrusted;
- (_Bool)isReadOnly;
@property(nonatomic, readonly) long long conversationType;
@property(nonatomic, readonly) NSString *conversationName;
@property(nonatomic, readonly) NSString *conversationID;
@property(nonatomic, readonly) TFNDirectMessageConversationIdentifier *identifier;
@property(nonatomic, readonly) long long sortEventID;
@property(nonatomic, readonly) id <TFNDirectMessageInbox> inbox;
@property(nonatomic, readonly) TFNDirectMessageContext *context;

// Remaining properties
@property(nonatomic, readonly) _Bool empty;
@property(nonatomic, readonly) _Bool lowQuality;
@property(nonatomic, readonly) _Bool readOnly;
@property(nonatomic, readonly) _Bool topRequest;
@property(nonatomic, readonly) _Bool trusted;
@end

