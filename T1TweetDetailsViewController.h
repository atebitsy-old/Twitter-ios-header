//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1ComposeViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1ComposerPresenting-Protocol.h>
#import <T1Twitter/T1DataViewControllerRenderPerformanceLoggerDataSource-Protocol.h>
#import <T1Twitter/T1ErrorDataViewAdapterDelegate-Protocol.h>
#import <T1Twitter/T1FeedbackActionProvider-Protocol.h>
#import <T1Twitter/T1ImageTransitionDelegate-Protocol.h>
#import <T1Twitter/T1JumpBackToHomeTimelineBehavior-Protocol.h>
#import <T1Twitter/T1PersistentComposeAccountProvider-Protocol.h>
#import <T1Twitter/T1PersistentComposeViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1SlideshowViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1ToasterContextDelegate-Protocol.h>
#import <T1Twitter/T1TweetDetailsFocalStatusTableRowAdapterDelegate-Protocol.h>
#import <T1Twitter/T1TweetDetailsSharedBehavior-Protocol.h>
#import <T1Twitter/T1URTConversationTimelineObserver-Protocol.h>
#import <T1Twitter/T1URTTimelineTombstoneItemViewModelDelegate-Protocol.h>
#import <T1Twitter/T1VideoMonetizationSettingsViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNDataViewKeyboardSelectionDelegate-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>
#import <T1Twitter/TFNTooltipDelegate-Protocol.h>
#import <T1Twitter/UIResponderStandardEditActions-Protocol.h>

@class NSDate, NSMutableSet, NSString, T1AppNavigationContext, T1DataViewControllerRenderPerformanceLogger, T1NavigationMetadata, T1PersistentComposeViewController, T1ShowStatusNavigationContext, T1StatusLiveEngagementManager, T1StatusMediaHandler, T1StatusTableSlideshowManager, T1TweetDetailsActionContextItem, T1TweetDetailsActionView, T1TweetDetailsFetcher, T1TweetDetailsFocalStatusTableRowAdapter, T1URTConversationTimeline, T1URTTimelineCursorTableRowAdapter, TFNBarButtonItem, TFNGenericItem, TFNTwitterAccount, TFNTwitterStatus, TFSTwitterScribeContext, TFSTwitterVideoMonetizationSettings, TIPImagePipeline, UIPopoverPresentationController, UIView;
@protocol T1StatusViewInlineActions, T1StatusViewModel, T1TweetDetailsViewControllerDelegate;

@interface T1TweetDetailsViewController : TFNItemsDataViewController <TFNTooltipDelegate, T1PersistentComposeViewControllerDelegate, T1ComposerPresenting, T1ComposeViewControllerDelegate, T1ImageTransitionDelegate, T1ErrorDataViewAdapterDelegate, T1VideoMonetizationSettingsViewControllerDelegate, T1URTConversationTimelineObserver, T1URTTimelineTombstoneItemViewModelDelegate, T1DataViewControllerRenderPerformanceLoggerDataSource, T1FeedbackActionProvider, TFNDataViewKeyboardSelectionDelegate, T1TweetDetailsFocalStatusTableRowAdapterDelegate, UIResponderStandardEditActions, T1ToasterContextDelegate, T1JumpBackToHomeTimelineBehavior, TFNLayoutMetricsEnvironment, T1SlideshowViewControllerDelegate, T1PersistentComposeAccountProvider, T1TweetDetailsSharedBehavior>
{
    double _allRequiredPartsCompleteDuration;
    double _conversationCompleteDuration;
    T1DataViewControllerRenderPerformanceLogger *_perfLogger;
    id _firstBodyItem;
    id _lastBodyItem;
    UIView<T1StatusViewInlineActions> *_tweetDetailsActionView;
    TFNGenericItem *_inReplyToLabelItem;
    struct {
        unsigned int hasScribedTweetCompleteTime:1;
        unsigned int showingAncestorLoader:1;
        unsigned int hasPlayedVideo:1;
        unsigned int inUpdate:1;
        unsigned int sendingInlineReply:1;
        unsigned int shouldScrollToBottomWhenFinishedUpdating:1;
        unsigned int shouldScrollToRepliesWhenFinishedUpdating;
        unsigned int showedSensitiveMedia:1;
        unsigned int hasDragged:1;
        unsigned int didScribeReply:1;
        unsigned int shouldForceScrollToBottomWhenFinishedUpdating:1;
        unsigned int shouldRenderUnifiedCard:1;
        unsigned int shouldSuppressSensitiveContent:1;
        unsigned int focalTweetWasDeleted:1;
        unsigned int shouldScrollToInsertedTweet:1;
        unsigned int focalTweetWasReported:1;
        unsigned int focalTweetWasRevealed:1;
        unsigned int focalTweetIsRootTweet:1;
    } _tweetDetailsFlags;
    NSDate *_initialViewConversationDate;
    _Bool _isPresentingBookmark;
    _Bool _displayingCard;
    _Bool _displayingUnifiedCard;
    _Bool _holdUpdatesUntilScrollComplete;
    _Bool _intentBlockDidRun;
    _Bool _keyboardDocked;
    _Bool _defaultVideoMonetizationSettingsComplete;
    _Bool _videoMonetizationSettingsComplete;
    _Bool _deferInlineReplyFocus;
    _Bool _shouldDisplayContent;
    _Bool _shouldPreventFetchOnScroll;
    _Bool _isLoadingAncestors;
    _Bool _isLoadingDescendants;
    _Bool _isTranslationImpressionScribed;
    _Bool _isAutoTranslationImpressionScribed;
    _Bool _didLogCardEvents;
    TFNTwitterAccount *_composingAccount;
    TFSTwitterScribeContext *_sourceScribeContext;
    TFNTwitterStatus *_status;
    TFNTwitterAccount *_account;
    T1AppNavigationContext *_navigationContext;
    id <T1TweetDetailsViewControllerDelegate> _delegate;
    TFSTwitterScribeContext *_controllerScribeContext;
    T1NavigationMetadata *_navigationMetadata;
    T1NavigationMetadata *_sourceNavigationMetadata;
    T1TweetDetailsFocalStatusTableRowAdapter *_focalStatusTableRowAdapter;
    T1TweetDetailsActionContextItem *_actionContextItem;
    UIPopoverPresentationController *_autocompletePopoverController;
    T1URTConversationTimeline *_conversationTimeline;
    T1TweetDetailsFetcher *_tweetDetailsFetcher;
    long long _statusID;
    T1PersistentComposeViewController *_replyController;
    CDUnknownBlockType _intentBlock;
    T1StatusMediaHandler *_statusMediaHandler;
    T1StatusTableSlideshowManager *_slideshowManager;
    TIPImagePipeline *_imagePipeline;
    TFSTwitterVideoMonetizationSettings *_defaultVideoMonetizationSettings;
    TFSTwitterVideoMonetizationSettings *_videoMonetizationSettings;
    T1ShowStatusNavigationContext *_statusNavigationContext;
    T1StatusLiveEngagementManager *_livePipelineTweetManager;
    NSMutableSet *_compositionReplyChainUniqueIDs;
    T1URTTimelineCursorTableRowAdapter *_urtCursorAdapter;
    unsigned long long _translationState;
    unsigned long long _loadState;
    TFNBarButtonItem *_subscribeButton;
    struct CGRect _currentKeyboardFrame;
}

+ (void)_t1_logPromotedEvent:(long long)arg1 forStatus:(id)arg2 withAccount:(id)arg3;
+ (id)tweetDetailsViewControllerForStatus:(id)arg1 account:(id)arg2 sourceScribeContext:(id)arg3 sourceNavigationMetadata:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) TFNBarButtonItem *subscribeButton; // @synthesize subscribeButton=_subscribeButton;
@property(nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
@property(nonatomic) unsigned long long translationState; // @synthesize translationState=_translationState;
@property(retain, nonatomic) T1URTTimelineCursorTableRowAdapter *urtCursorAdapter; // @synthesize urtCursorAdapter=_urtCursorAdapter;
@property(nonatomic) _Bool didLogCardEvents; // @synthesize didLogCardEvents=_didLogCardEvents;
@property(nonatomic) _Bool isAutoTranslationImpressionScribed; // @synthesize isAutoTranslationImpressionScribed=_isAutoTranslationImpressionScribed;
@property(nonatomic) _Bool isTranslationImpressionScribed; // @synthesize isTranslationImpressionScribed=_isTranslationImpressionScribed;
@property(nonatomic) _Bool isLoadingDescendants; // @synthesize isLoadingDescendants=_isLoadingDescendants;
@property(nonatomic) _Bool isLoadingAncestors; // @synthesize isLoadingAncestors=_isLoadingAncestors;
@property(nonatomic) _Bool shouldPreventFetchOnScroll; // @synthesize shouldPreventFetchOnScroll=_shouldPreventFetchOnScroll;
@property(nonatomic) _Bool shouldDisplayContent; // @synthesize shouldDisplayContent=_shouldDisplayContent;
@property(retain, nonatomic) NSMutableSet *compositionReplyChainUniqueIDs; // @synthesize compositionReplyChainUniqueIDs=_compositionReplyChainUniqueIDs;
@property(readonly, nonatomic) T1StatusLiveEngagementManager *livePipelineTweetManager; // @synthesize livePipelineTweetManager=_livePipelineTweetManager;
@property(retain, nonatomic) T1ShowStatusNavigationContext *statusNavigationContext; // @synthesize statusNavigationContext=_statusNavigationContext;
@property(nonatomic) _Bool deferInlineReplyFocus; // @synthesize deferInlineReplyFocus=_deferInlineReplyFocus;
@property(nonatomic) _Bool videoMonetizationSettingsComplete; // @synthesize videoMonetizationSettingsComplete=_videoMonetizationSettingsComplete;
@property(nonatomic) _Bool defaultVideoMonetizationSettingsComplete; // @synthesize defaultVideoMonetizationSettingsComplete=_defaultVideoMonetizationSettingsComplete;
@property(retain, nonatomic) TFSTwitterVideoMonetizationSettings *videoMonetizationSettings; // @synthesize videoMonetizationSettings=_videoMonetizationSettings;
@property(retain, nonatomic) TFSTwitterVideoMonetizationSettings *defaultVideoMonetizationSettings; // @synthesize defaultVideoMonetizationSettings=_defaultVideoMonetizationSettings;
@property(nonatomic, getter=isKeyboardDocked) _Bool keyboardDocked; // @synthesize keyboardDocked=_keyboardDocked;
@property(nonatomic) struct CGRect currentKeyboardFrame; // @synthesize currentKeyboardFrame=_currentKeyboardFrame;
@property(readonly, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(readonly, nonatomic) T1StatusTableSlideshowManager *slideshowManager; // @synthesize slideshowManager=_slideshowManager;
@property(readonly, nonatomic) T1StatusMediaHandler *statusMediaHandler; // @synthesize statusMediaHandler=_statusMediaHandler;
@property(nonatomic) _Bool intentBlockDidRun; // @synthesize intentBlockDidRun=_intentBlockDidRun;
@property(copy, nonatomic) CDUnknownBlockType intentBlock; // @synthesize intentBlock=_intentBlock;
@property(retain, nonatomic) T1PersistentComposeViewController *replyController; // @synthesize replyController=_replyController;
@property(nonatomic) long long statusID; // @synthesize statusID=_statusID;
@property(retain, nonatomic) T1TweetDetailsFetcher *tweetDetailsFetcher; // @synthesize tweetDetailsFetcher=_tweetDetailsFetcher;
@property(retain, nonatomic) T1URTConversationTimeline *conversationTimeline; // @synthesize conversationTimeline=_conversationTimeline;
@property(nonatomic) __weak UIPopoverPresentationController *autocompletePopoverController; // @synthesize autocompletePopoverController=_autocompletePopoverController;
@property(nonatomic) _Bool holdUpdatesUntilScrollComplete; // @synthesize holdUpdatesUntilScrollComplete=_holdUpdatesUntilScrollComplete;
@property(retain, nonatomic) T1TweetDetailsActionContextItem *actionContextItem; // @synthesize actionContextItem=_actionContextItem;
@property(retain, nonatomic) T1TweetDetailsFocalStatusTableRowAdapter *focalStatusTableRowAdapter; // @synthesize focalStatusTableRowAdapter=_focalStatusTableRowAdapter;
@property(readonly, nonatomic) T1NavigationMetadata *sourceNavigationMetadata; // @synthesize sourceNavigationMetadata=_sourceNavigationMetadata;
@property(readonly, nonatomic) T1NavigationMetadata *navigationMetadata; // @synthesize navigationMetadata=_navigationMetadata;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *controllerScribeContext; // @synthesize controllerScribeContext=_controllerScribeContext;
@property(nonatomic) __weak id <T1TweetDetailsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isDisplayingUnifiedCard) _Bool displayingUnifiedCard; // @synthesize displayingUnifiedCard=_displayingUnifiedCard;
@property(readonly, nonatomic, getter=isDisplayingCard) _Bool displayingCard; // @synthesize displayingCard=_displayingCard;
@property(nonatomic) _Bool isPresentingBookmark; // @synthesize isPresentingBookmark=_isPresentingBookmark;
@property(retain, nonatomic) T1AppNavigationContext *navigationContext; // @synthesize navigationContext=_navigationContext;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *sourceScribeContext; // @synthesize sourceScribeContext=_sourceScribeContext;
@property(retain, nonatomic) TFNTwitterAccount *composingAccount; // @synthesize composingAccount=_composingAccount;
- (id)scribePageForToaster:(id)arg1;
- (void)presentTweetWithID:(long long)arg1;
- (_Bool)canPresentTweetWithID:(long long)arg1;
- (void)dataViewDidDisplay;
@property(readonly, nonatomic) id <T1StatusViewModel> initialFocusedStatus;
@property(readonly, nonatomic) id <T1StatusViewModel> focalStatus;
- (id)tweetDetailsFocalStatusTableRowAdapterCompositionForReplyAction:(id)arg1;
- (id)_t1_canonicalTweetBodyItems;
- (void)keyboardHighlightCell:(id)arg1 highlighted:(_Bool)arg2;
- (id)keyboardHighlightIndexPathsForIndexPath:(id)arg1;
- (long long)isCellKeyboardHighlightableAtIndexPath:(id)arg1;
- (CDUnknownBlockType)didProvideModerateFeedbackBlockForStatus:(id)arg1;
- (CDUnknownBlockType)didProvideShowLessOftenFeedbackForStatus:(id)arg1;
- (id)negativeFeedbackActionsForStatus:(id)arg1;
- (id)dataViewControllerRenderPerformanceLoggerScribe:(id)arg1;
- (_Bool)dataViewControllerRenderPerformanceLoggerIsReadyToRender:(id)arg1;
- (id)dataViewControllerRenderPerformanceLoggerEventName:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)tfn_fontSizeChanged;
- (_Bool)isLayoutMetricsCanvasInheritedByChildViewController;
- (CDUnknownBlockType)_t1_showDisabledEngagementEducationBlockOrNilForType:(unsigned long long)arg1;
- (_Bool)tfn_prefersTabBarShadowHidden;
- (_Bool)allowsJumpBackToHomeTimeline;
- (void)_t1_showAuthorCanModerateTooltip;
- (void)_t1_showModeratedRepliesTimelineTooltip;
- (void)hiddenRepliesEducationTakeoverViewControllerDidDismiss;
- (id)_t1_focalStatusView;
- (id)_t1_activitySummaryOfType:(long long)arg1;
- (id)_t1_inlineActionOfType:(unsigned long long)arg1;
- (_Bool)t1_shouldShowSocialContextForFocalStatus;
- (_Bool)_t1_shouldShowActivitySummary;
- (void)_t1_keyboardWillHide:(id)arg1;
- (void)_t1_keyboardWillChangeFrame:(id)arg1;
- (void)_t1_keyboardWillShow:(id)arg1;
- (void)_t1_updateKeyboardFrameWithUserInfo:(id)arg1;
- (void)_t1_accountSettingsDidUpdate:(id)arg1;
- (void)slideshow:(id)arg1 didSelectStatusReply:(id)arg2;
- (void)slideshow:(id)arg1 dismissAndPresentViewController:(id)arg2;
- (void)slideshow:(id)arg1 status:(id)arg2 didSelectActiveRange:(id)arg3;
- (void)slideshow:(id)arg1 didSelectUser:(id)arg2;
- (void)slideshow:(id)arg1 didSelectStatus:(id)arg2;
- (void)slideshow:(id)arg1 didDeleteStatusID:(id)arg2;
- (void)toggleRetweetOnCurrentStatusFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)toggleFavorited;
- (id)t1_scribeContextForActiveRange:(id)arg1 status:(id)arg2 account:(id)arg3 withDefault:(id)arg4;
- (_Bool)imageTransitionViewController:(id)arg1 shouldDismissPresentingViewControllerForObject:(id)arg2;
- (void)imageTransitionViewController:(id)arg1 willTransition:(_Bool)arg2 object:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageHostViewFrameInWindow:(id)arg2 forObject:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageContentsRectForObject:(id)arg2;
- (_Bool)imageTransitionViewController:(id)arg1 previewImageFrameIsAspectFillForObject:(id)arg2;
- (void)setPreviewImageHidden:(_Bool)arg1 forImageTransitionViewController:(id)arg2 object:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageFrameInWindow:(id)arg2 forObject:(id)arg3;
- (void)_t1_tweetWasRemovedFromBookmarks:(id)arg1;
- (void)_t1_updateCellHeightIfNeededForItem:(id)arg1;
- (void)_t1_cardLogAppDownloadIfAppropriate:(id)arg1;
- (void)_t1_cardLogAppDownload:(id)arg1;
- (void)_t1_retweetFailed;
- (void)_t1_favoriteFailed;
- (void)_t1_updateMonetizationSettings;
- (void)videoMonetizationSettingsViewController:(id)arg1 didUpdateSettings:(id)arg2;
- (void)_t1_didTapMonetizationSettings;
@property(readonly, nonatomic) id monetizationSettingsItem;
- (void)_t1_monetizationSettingsUpdated;
- (void)_t1_fetchMonetizationSettingsForVideo:(id)arg1;
- (void)_t1_fetchMonetizationSettingsDefaults;
- (void)_t1_fetchMonetizationSettingsIfNeeded;
- (_Bool)_t1_shouldShowMonetizationSettings;
- (void)_t1_didTapViewTweetActivity;
- (id)viewTweetActivityItem;
- (void)scrollViewWillProgrammaticallyScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_t1_compositionSendDidFail:(id)arg1;
- (void)_t1_compositionDidSend:(id)arg1;
- (void)_t1_updateShowReplySocialContext;
- (id)_t1_newReplyTweetComposition;
- (id)_t1_replyTweetComposition;
- (id)_t1_newTweetComposition;
- (id)_t1_tweetCompositionFromCurrentContext;
- (void)_t1_scribeReplyAction;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)_t1_adjustReplyBarFrame;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_t1_navigateForStatusNavigationContext;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_t1_setupFromStatus;
- (void)viewDidAppear:(_Bool)arg1;
- (void)tfn_previewingStateDidChange;
- (void)viewWillAppear:(_Bool)arg1;
- (id)indexPathForItem:(id)arg1;
- (id)_t1_scribeElementForStatus:(id)arg1;
- (id)_t1_scribeComponentForStatus:(id)arg1;
- (void)_t1_scribeSendReply;
- (void)_scribeReply;
- (void)_t1_logCardEvents;
- (id)scribeContext;
- (id)scribeImpressionParametersForIndexPath:(id)arg1;
- (id)scribeImpressionParameters;
- (id)scribeComponentForIndexPath:(id)arg1;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (id)calculatedLayoutMetrics;
- (_Bool)_t1_cancelEditingIfAppropriateForTraitCollection:(id)arg1;
- (_Bool)_t1_shouldDisplayReplyBarWithTraitCollection:(id)arg1;
- (void)_t1_updateReplyBarForTraitCollection:(id)arg1;
- (void)_t1_updateReplyBar;
- (void)_t1_willSendInLineReply:(id)arg1;
- (void)_t1_updateAutocompleteViewControllerSafeAreaInsets;
- (void)_t1_removeAutocompleteView;
- (void)_t1_addAutocompleteView;
- (void)hideAutocompleteViewController:(id)arg1 forComposeBarViewController:(id)arg2;
- (void)showAutocompleteViewController:(id)arg1 forComposeBarViewController:(id)arg2;
- (id)autocompleteViewController;
- (id)autocompleteController;
- (void)handleTweetLinkCopyKeyCommand;
- (void)copy:(id)arg1;
- (_Bool)_t1_canHandleCopyCommand;
- (void)handleOpenURLKeyCommand;
- (_Bool)_t1_canHandleOpenURLKeyCommand;
- (void)handleOpenMediaKeyCommand;
- (_Bool)_t1_canHandleOpenMediaKeyCommand;
- (void)handleViewUserKeyCommand;
- (_Bool)_t1_canHandleBookmarkKeyCommandForUndo:(_Bool)arg1;
- (void)handleUndoBookmarkKeyCommand;
- (void)handleBookmarkKeyCommand;
- (_Bool)_t1_canHandleLikeKeyCommandForUndo:(_Bool)arg1;
- (void)handleUndoLikeKeyCommand;
- (void)handleLikeKeyCommand;
- (_Bool)_t1_canHandleRetweetKeyCommandForUndo:(_Bool)arg1;
- (void)handleUndoRetweetKeyCommand;
- (void)handleRetweetKeyCommand;
- (_Bool)_t1_canHandleReplyKeyCommand;
- (void)handleReplyKeyCommand;
- (_Bool)dataViewControllerCanPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)_t1_isReplyControllerInViewControllerHierarchy;
- (void)_t1_removeReplyControllerFromViewControllerHierarchy:(_Bool)arg1;
- (void)_t1_removeReplyControllerFromViewControllerHierarchy;
- (_Bool)_t1_addReplyControllerToViewControllerHierarchy:(_Bool)arg1;
- (_Bool)_t1_isReplyBarVisible;
- (void)_t1_hideReplyBar:(_Bool)arg1;
- (_Bool)_t1_displayReplyBar:(_Bool)arg1;
- (void)composeBarViewControllerTransitionToFullComposer:(id)arg1;
- (void)composeBarViewControllerDidBeginEditing:(id)arg1;
- (void)composeBarViewController:(id)arg1 didSwitchToAccount:(id)arg2;
- (void)_t1_resetReplyControllerComposition;
- (void)composeBarViewController:(id)arg1 didSendComposition:(id)arg2;
- (void)composeBarViewController:(id)arg1 willSendComposition:(id)arg2;
- (void)composeBarViewControllerResetComposition:(id)arg1;
- (void)tombstoneDidTapViewTweetWithTombstoneViewModel:(id)arg1;
- (void)hideInlineReply:(_Bool)arg1;
- (_Bool)showInlineReply:(_Bool)arg1;
- (void)stopComposingInlineReply;
- (_Bool)startComposingInlineReply;
- (void)_t1_setupReplyControllerIfNecessary;
- (id)scribeSectionForIndexPath:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)_t1_reloadConversationAfterNotification;
- (void)_t1_blockedAccountsDidChange:(id)arg1;
- (void)_t1_tweetDeleted:(id)arg1;
- (void)_t1_handleTweetDeleted:(id)arg1;
- (CDUnknownBlockType)_t1_undoRetweetBlock;
- (id)_t1_undoRetweetModalSheet;
- (id)_t1_retweetMenuSheet;
- (id)_t1_favoriteConfirmMenuSheet;
- (void)_t1_toggleRetweetOnCurrentStatusFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)_t1_toggleFavoriteOnCurrentStatus;
- (void)_t1_replyAction;
- (_Bool)_t1_inlineActionsDisabled;
- (_Bool)shareViaDMDisabled;
- (_Bool)bookmarkDisabled;
- (_Bool)favoriteDisabled;
- (_Bool)shareButtonDisabled;
- (_Bool)retweetDisabled;
@property(readonly, nonatomic) _Bool replyDisabled;
- (void)_t1_showHiddenRepliesEducationPromptIfNecessary;
- (void)_t1_updateForwardPivot;
- (void)_t1_updateHiddenRepliesIcon;
- (void)_t1_updateReplyBadge;
- (void)_t1_updateTombstones;
- (void)_t1_fetchMoreDescendantsIfNeeded;
- (void)_t1_fetchMoreAncestorsIfNeeded;
- (void)_t1_fetchMoreAncestors;
- (long long)rowTypeForItem:(id)arg1;
- (id)indexPathsForRowType:(long long)arg1;
- (id)_t1_indexPathOfTweetBodyBottom;
- (id)_t1_indexPathOfTweetBodyTop;
- (void)_t1_updateConversation;
- (unsigned long long)_t1_statusOptionsForStatusViewModel:(id)arg1 initialOptions:(unsigned long long)arg2 account:(id)arg3;
- (id)focalStatusAdapterForAccount:(id)arg1;
- (id)conversationStatusAdapterForAccount:(id)arg1;
- (void)timelineDidUpdate:(id)arg1;
- (void)_t1_notifyDelegateOfContentChange;
- (double)_t1_peekHeight;
- (void)_t1_updateTableFooter;
- (void)_t1_updateInsets;
- (id)_t1_contructCallToActionErrorItem:(id)arg1;
- (_Bool)_t1_constructErrorSections:(id)arg1;
- (_Bool)t1_cellIsCompletelyVisibleAtIndexPath:(id)arg1;
- (void)_t1_scrollToInsertedTweet;
- (void)_t1_scrollToTopOfReplies;
- (void)_t1_scrollToTopOfBodyAndPeek;
- (void)_t1_scrollToBottom;
- (id)_t1_replyPlaceholderTextForStatus:(id)arg1;
- (void)update:(_Bool)arg1;
- (void)_t1_didFinishLoadingRelationship:(id)arg1;
- (_Bool)_t1_navigationContextTypeIsMagicRecsNotification;
- (void)errorItemTapped:(id)arg1;
@property(readonly, nonatomic) unsigned long long displayType;
- (id)_t1_errorItemForStreamError:(id)arg1;
- (id)_t1_tombstoneItemForStreamError:(id)arg1;
- (void)_t1_didFinishLoadingStatus:(id)arg1;
- (void)showRetweetIntentConfirmation;
- (void)showFavoriteIntentConfirmation;
- (void)_t1_runIntentBlockIfStatusFetched;
- (void)_t1_showIntentConfirmationMenuSheet:(id)arg1 buttonType:(unsigned long long)arg2;
- (void)showTweetAnalytics;
- (_Bool)_t1_shouldShowViewAnalyticsItem;
- (void)_t1_checkIfTweetComplete;
- (_Bool)_t1_areAllFetchesComplete;
- (_Bool)_t1_areAllRequiredPartsReady;
- (void)_t1_dynamicColorsDidReload:(id)arg1;
- (void)_t1_hashflagsDidChange:(id)arg1;
- (void)_t1_tweetUpdated:(id)arg1;
- (void)_t1_tweetReported:(id)arg1;
- (void)_t1_tweetUnhidden:(id)arg1;
- (void)_t1_tweetHidden:(id)arg1;
- (void)_t1_tweetUpdated;
- (id)_t1_tweetBodyItems;
- (void)_t1_handleNavigationContextWithTweetBodyArray:(id)arg1;
- (_Bool)_t1_isConversationOwnedByCurrentUserWithUserID:(long long)arg1;
@property(readonly, nonatomic) T1TweetDetailsActionView *tweetDetailsActionView;
- (id)tfs_debugStrings;
- (void)_t1_featureSwitchesDidUpdate:(id)arg1;
- (void)_t1_accountDidUpdate:(id)arg1;
- (void)_t1_updateExperimentFlagsFromAccount;
- (void)dealloc;
- (void)_t1_initializeWithStatusID:(long long)arg1 status:(id)arg2 account:(id)arg3 statusNavigationContext:(id)arg4 sourceScribeContext:(id)arg5 sourceNavigationMetadata:(id)arg6 overrideNavigationMetadata:(id)arg7;
- (id)initWithStatusID:(long long)arg1 account:(id)arg2 statusNavigationContext:(id)arg3 sourceScribeContext:(id)arg4 sourceNavigationMetadata:(id)arg5 overrideNavigationMetadata:(id)arg6;
- (id)initWithStatusID:(long long)arg1 account:(id)arg2 sourceNavigationMetadata:(id)arg3;
- (id)initWithStatus:(id)arg1 account:(id)arg2 statusNavigationContext:(id)arg3 sourceScribeContext:(id)arg4 sourceNavigationMetadata:(id)arg5 overrideNavigationMetadata:(id)arg6;
- (id)initWithStatus:(id)arg1 account:(id)arg2 statusNavigationContext:(id)arg3 sourceScribeContext:(id)arg4 sourceNavigationMetadata:(id)arg5;
- (id)initWithStatus:(id)arg1 account:(id)arg2 sourceNavigationMetadata:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)t1_cleanupTooltips;
- (_Bool)_t1_shouldUseCombinedRetweetTooltip;
- (void)t1_triggerAuthorCanModerateTooltipFromView:(id)arg1;
- (void)t1_triggerModeratedRepliesTimelineTooltipForAuthor:(_Bool)arg1 fromView:(id)arg2;
- (void)_t1_triggerAffiliateLabelTooltip;
- (void)_t1_triggerConversationContextTooltip;
- (void)_t1_triggerBookmarksTooltip;
- (void)_t1_triggerRetweetWithCommentsTooltip;
- (void)t1_triggerRetweetWithCommentTooltipFromView:(id)arg1;
- (void)t1_triggerTooltips;
- (void)_t1_initializeRetweetCommentsTooltip;
- (void)_t1_initializeAuthorModeratedRepliesTooltips;
- (void)_t1_initializeAffiliateLabelTooltip;
- (void)_t1_initializeConversationContextTooltip;
- (void)_t1_initializeBookmarksTooltip;
- (void)_t1_initializeTooltipWithText:(id)arg1 forEvent:(id)arg2 permittedArrowDirections:(unsigned long long)arg3;
- (void)t1_initializeTooltips;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

