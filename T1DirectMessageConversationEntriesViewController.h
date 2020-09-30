//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNDataViewController.h>

#import <T1Twitter/T1DirectMessageAbstractEntryCellDelegate-Protocol.h>
#import <T1Twitter/T1DirectMessageConversationAvatarUpdatedEntryCellDelegate-Protocol.h>
#import <T1Twitter/T1DirectMessageConversationFlowLayoutDelegate-Protocol.h>
#import <T1Twitter/T1DirectMessageConversationMediaAutoplayBehaviorDelegate-Protocol.h>
#import <T1Twitter/T1DirectMessageConversationScrollPositionBehaviorSupport-Protocol.h>
#import <T1Twitter/T1DirectMessageConversationSynchronizedUpdatesBehaviorDelegate-Protocol.h>

@class T1DirectMessageConversation, T1DirectMessageConversationLastReadMarkerEntry, T1DirectMessageConversationLockingCollectionView, UIResponder;

@interface T1DirectMessageConversationEntriesViewController : TFNDataViewController <T1DirectMessageConversationAvatarUpdatedEntryCellDelegate, T1DirectMessageConversationMediaAutoplayBehaviorDelegate, T1DirectMessageAbstractEntryCellDelegate, T1DirectMessageConversationScrollPositionBehaviorSupport, T1DirectMessageConversationSynchronizedUpdatesBehaviorDelegate, T1DirectMessageConversationFlowLayoutDelegate>
{
    // Error parsing type: , name: hideAudioMessagingEducationKey
    // Error parsing type: , name: conversation
    // Error parsing type: , name: account
    // Error parsing type: , name: userDefaults
    // Error parsing type: , name: isPresentedFromDeepLink
    // Error parsing type: , name: isPaging
    // Error parsing type: , name: shouldUpdateAccessibilityFocus
    // Error parsing type: , name: disableWelcomeMessage
    // Error parsing type: , name: disableCellInteraction
    // Error parsing type: , name: welcomeMessageID
    // Error parsing type: , name: hasMessagesBeforeLastReadMarker
    // Error parsing type: , name: pagingFailed
    // Error parsing type: , name: isTransitioning
    // Error parsing type: , name: viewHasPreviouslyAppeared
    // Error parsing type: , name: hasScrolledCloseToBottom
    // Error parsing type: , name: hasAddedWelcomeMessage
    // Error parsing type: , name: queuedVoiceOverAnnouncementStrings
    // Error parsing type: , name: viewInitDate
    // Error parsing type: , name: initialConversationLatestEntry
    // Error parsing type: , name: slideshowManager
    // Error parsing type: , name: mediaEventHandler
    // Error parsing type: , name: statusEventHandler
    // Error parsing type: , name: isReactionUserEducationEnabled
    // Error parsing type: , name: didRegisterUserEducationImpression
    // Error parsing type: , name: requestProfileInfoHeaderView
    // Error parsing type: , name: actionsDelegate
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: quickReplyPresentationBehavior
    // Error parsing type: , name: customNextResponder
    // Error parsing type: , name: conversationEnumerator
    // Error parsing type: , name: $__lazy_storage_$_entryActionSheetBuilder
    // Error parsing type: , name: $__lazy_storage_$_slideshowBehavior
    // Error parsing type: , name: $__lazy_storage_$_scrollPositionBehavior
    // Error parsing type: , name: $__lazy_storage_$_updateBehavior
    // Error parsing type: , name: $__lazy_storage_$_audioPlayerBehavior
    // Error parsing type: , name: $__lazy_storage_$_mediaAutoplayBehavior
    // Error parsing type: , name: $__lazy_storage_$_lastReadMarkerBehavior
    // Error parsing type: , name: $__lazy_storage_$_userEducationMarkerBehavior
    // Error parsing type: , name: $__lazy_storage_$_typingIndicatorBehavior
    // Error parsing type: , name: $__lazy_storage_$_reportSpamController
    // Error parsing type: , name: lockUpdateCount
    // Error parsing type: , name: countOfInboxPollingIntervals
}

+ (Class)collectionViewClass;
- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)userDataSourceDidUpdate;
- (void)playIncomingMessageSound;
- (void)synchronizedUpdatesBehaviorCanProcessUpdates:(id)arg1;
- (void)didEndScrollingAnimation;
- (void)scrollToEntry:(id)arg1;
- (void)scrollToTop;
@property(nonatomic, readonly) T1DirectMessageConversationLastReadMarkerEntry *lastReadMarkerEntry;
@property(nonatomic) unsigned long long countOfInboxPollingIntervals; // @synthesize countOfInboxPollingIntervals;
- (void)unlockUpdates;
- (void)lockUpdates;
@property(nonatomic, readonly) T1DirectMessageConversationLockingCollectionView *lockingCollectionView;
- (id)t1_openActiveRange:(id)arg1 directMessageEntry:(id)arg2 account:(id)arg3;
- (id)previewConfigurationForLocation:(struct CGPoint)arg1 inCell:(id)arg2 atIndexPath:(id)arg3;
- (void)didEndScrolling;
- (void)scrollViewDidScroll:(id)arg1;
- (void)update:(_Bool)arg1;
- (void)updateContentOffsetWithContentInset:(struct UIEdgeInsets)arg1 previousContentInset:(struct UIEdgeInsets)arg2 previousContentOffset:(struct CGPoint)arg3;
- (id)indexPathForItem:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (_Bool)collectionView:(id)arg1 layoutShouldShowTypingIndicator:(id)arg2;
- (_Bool)collectionView:(id)arg1 layoutShouldShowLoadTopActivityIndicator:(id)arg2;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(nonatomic, readonly) UIResponder *nextResponder;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidFullyDisappear:(_Bool)arg1;
- (void)viewWillFullyDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidFullyAppear:(_Bool)arg1;
- (void)viewWillFullyAppear:(_Bool)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 conversation:(id)arg2;
@property(nonatomic) _Bool messagesBeforeLastReadMarker; // @synthesize messagesBeforeLastReadMarker=hasMessagesBeforeLastReadMarker;
- (_Bool)hasMessagesBeforeLastReadMarker;
@property(nonatomic) _Bool presentedFromDeepLink; // @synthesize presentedFromDeepLink=isPresentedFromDeepLink;
- (_Bool)isPresentedFromDeepLink;
@property(nonatomic, readonly) T1DirectMessageConversation *conversation; // @synthesize conversation;
- (void)cell:(id)arg1 didTapGroupAvatarImageView:(id)arg2;
- (void)autoplayBehavior:(id)arg1 didTapPlayerViewInMessageEntryCell:(id)arg2;
- (void)cellDidTapShowMore:(id)arg1;
- (void)cell:(id)arg1 didLongPressAvatar:(id)arg2 forUser:(id)arg3;
- (void)cell:(id)arg1 didSelectUser:(id)arg2 forEntry:(id)arg3;

@end

