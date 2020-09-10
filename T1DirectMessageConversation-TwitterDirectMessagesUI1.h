//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DirectMessageConversation.h>

@interface T1DirectMessageConversation (TwitterDirectMessagesUI1)
- (void)pruneOldEntries;
- (void)addWelcomeMessage:(id)arg1;
- (void)updateReadOnlyState:(_Bool)arg1;
- (void)markEntryAsAbuse:(id)arg1;
- (void)unmarkEntryAsSpam:(id)arg1;
- (void)markEntryAsSpam:(id)arg1;
- (void)disableMentionNotifications;
- (void)enableMentionNotifications;
- (void)disableNotificationsForDuration:(unsigned long long)arg1;
- (void)enableNotifications;
- (void)removeUsers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addUsers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeGroupAvatar;
- (void)rename:(id)arg1;
- (void)markAsRead;
- (void)updateGroupAvatarWithAsset:(id)arg1 localURL:(id)arg2;
- (void)cancelDraftMessage:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteReaction:(id)arg1 forMessage:(id)arg2;
- (void)addReaction:(id)arg1 forMessage:(id)arg2;
- (void)deleteConversation;
- (void)accept;
- (void)loadMoreEntriesWithCompletion:(CDUnknownBlockType)arg1;
@end

