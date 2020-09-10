//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ComposeViewController.h>

#import <T1Twitter/T1ConversationInlineComposeViewDelgate-Protocol.h>
#import <T1Twitter/T1JumpBackToHomeTimelineBehavior-Protocol.h>
#import <T1Twitter/TFNModalSheetViewControllerDelegate-Protocol.h>

@class NSString, T1AutocompleteViewController, T1ConversationInlineComposeView, TFNButton, TFSMainThreadRunLoopDeferredTask, UITextView;
@protocol T1ConversationInlineComposeViewControllerDelgate;

@interface T1ConversationInlineComposeViewController : T1ComposeViewController <T1ConversationInlineComposeViewDelgate, T1JumpBackToHomeTimelineBehavior, TFNModalSheetViewControllerDelegate>
{
    _Bool _autosaveDraftsEnabled;
    _Bool _showExpandedCompose;
    _Bool _canStartEditing;
    _Bool _needsToStartEditing;
    _Bool _needsToTriggerReplySocialContextTooltip;
    _Bool _shouldIgnoreButtonHiddenUpdates;
    TFNButton *_sendReplyButton;
    T1AutocompleteViewController *_autocompleteViewController;
    T1ConversationInlineComposeView *_composeView;
    unsigned long long _displayType;
    TFSMainThreadRunLoopDeferredTask *_deferredStartEditingTask;
    TFSMainThreadRunLoopDeferredTask *_deferredTriggerReplySocialContextTooltipTask;
    unsigned long long _triggeringReplySocialContextTooltipSuspendingCount;
}

+ (id)defaultComposerTextFont;
+ (double)preferredAttachmentViewHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldIgnoreButtonHiddenUpdates; // @synthesize shouldIgnoreButtonHiddenUpdates=_shouldIgnoreButtonHiddenUpdates;
@property(nonatomic) unsigned long long triggeringReplySocialContextTooltipSuspendingCount; // @synthesize triggeringReplySocialContextTooltipSuspendingCount=_triggeringReplySocialContextTooltipSuspendingCount;
@property(nonatomic) _Bool needsToTriggerReplySocialContextTooltip; // @synthesize needsToTriggerReplySocialContextTooltip=_needsToTriggerReplySocialContextTooltip;
@property(retain, nonatomic) TFSMainThreadRunLoopDeferredTask *deferredTriggerReplySocialContextTooltipTask; // @synthesize deferredTriggerReplySocialContextTooltipTask=_deferredTriggerReplySocialContextTooltipTask;
@property(retain, nonatomic) TFSMainThreadRunLoopDeferredTask *deferredStartEditingTask; // @synthesize deferredStartEditingTask=_deferredStartEditingTask;
@property(nonatomic) _Bool needsToStartEditing; // @synthesize needsToStartEditing=_needsToStartEditing;
@property(nonatomic) _Bool canStartEditing; // @synthesize canStartEditing=_canStartEditing;
@property(readonly, nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) _Bool showExpandedCompose; // @synthesize showExpandedCompose=_showExpandedCompose;
@property(retain, nonatomic) T1ConversationInlineComposeView *composeView; // @synthesize composeView=_composeView;
@property(nonatomic, getter=isAutosaveDraftsEnabled) _Bool autosaveDraftsEnabled; // @synthesize autosaveDraftsEnabled=_autosaveDraftsEnabled;
- (id)autocompleteViewController;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)_t1_didRemoveAccount:(id)arg1;
- (void)modalSheetViewControllerDidDismiss:(id)arg1 fromGesture:(_Bool)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (id)scribeComponent;
- (id)scribeSection;
- (void)_t1_prepareAutocompleteViewController;
- (void)showAutocomplete:(_Bool)arg1;
- (void)autocompleteControllerDidEnd:(id)arg1;
- (void)autocompleteControllerDidBegin:(id)arg1;
- (void)attachmentsViewController:(id)arg1 didTapLivePhotoToggleButton:(id)arg2;
- (_Bool)attachmentsViewController:(id)arg1 shouldShowLivePhotoToggleButtonForAttachment:(id)arg2;
- (_Bool)attachmentsViewController:(id)arg1 shouldShowAltTextButtonForAttachment:(id)arg2;
- (void)attachmentsViewControllerDidTapBackground:(id)arg1;
- (_Bool)attachmentsViewController:(id)arg1 shouldShowEditButtonForAttachment:(id)arg2;
- (void)foundMediaController:(id)arg1 viewControllerDidCancel:(id)arg2;
- (void)foundMediaController:(id)arg1 viewController:(id)arg2 didSelectFoundMediaItem:(id)arg3;
- (void)photoGalleryViewControllerDidCancelSession:(id)arg1;
- (void)photoGalleryViewController:(id)arg1 didEndSessionWithAttachments:(id)arg2;
- (_Bool)isInlineGeoEnabled;
- (void)_t1_showPhotoGallery;
- (id)scribeSectionForMediaAttachment;
- (_Bool)areAttachmentsCompatibleWithAttachment:(id)arg1;
- (void)didAddAttachment:(id)arg1;
- (_Bool)allowsJumpBackToHomeTimeline;
- (void)_t1_showAccountSwitcherFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)persistentComposeViewDidTapReplySocialContext:(id)arg1;
- (void)persistentComposeViewDidTapFullCompose:(id)arg1;
- (void)persistentComposeView:(id)arg1 didTapAvatarWithFrame:(struct CGRect)arg2;
- (void)persistentComposeViewDidTapAccountView:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)persistentComposeViewDidTap:(id)arg1;
- (void)_t1_triggerReplySocialContextTooltip;
- (void)resumeTriggeringReplySocialContextTooltip;
- (void)suspendTriggeringReplySocialContextTooltip;
- (void)_t1_triggerReplySocialContextTooltipIfPossible;
- (id)replySocialContextTooltipEventName;
- (id)replySocialContextView;
- (void)_t1_updateReplySocialContext;
- (void)updateReplySocialContext;
- (void)updateReplyContext;
- (void)updateTextViewFirstResponder;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (_Bool)_t1_shouldHideButtons;
- (void)_t1_updateButtonsHidden;
- (void)textDidChange;
- (void)textViewDidEndEditing;
- (void)textViewDidBeginEditing;
- (void)updatePlaceholderText;
- (id)defaultPlaceholderText;
- (void)updateComposerTextFont;
- (id)currentComposerTextFont;
- (_Bool)shouldEnableGalleryButton;
- (_Bool)shouldPromptPhotoTagging;
- (id)attachmentsViewController;
- (_Bool)isWorthSaving;
- (void)cancel:(id)arg1 event:(id)arg2;
- (id)scribeImpressionParameters;
- (_Bool)_t1_canHandleSendTweetKeyCommand;
- (void)handleSendTweetKeyCommand;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)galleryButtonPressed:(id)arg1;
- (void)_t1_handleFoundMediaAttachments:(id)arg1;
- (void)_t1_sendReply;
- (void)_t1_didTapReply:(id)arg1;
- (void)_t1_updateComposeButtonBarButtons;
@property(readonly, nonatomic) TFNButton *sendReplyButton; // @synthesize sendReplyButton=_sendReplyButton;
- (id)sendButton;
@property(readonly, nonatomic) UITextView *textView;
- (id)richTextView;
- (void)setComposition:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)dismiss:(_Bool)arg1;
- (_Bool)_isCompositionWorthSending;
@property(readonly, nonatomic, getter=isDisplayed) _Bool displayed;
@property(readonly, nonatomic, getter=isEditingText) _Bool editingText;
- (void)endEditing;
- (void)cancelEditing;
- (void)_t1_startEditing;
- (void)startEditing;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_t1_deferred_startEditing;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_t1_updatePreferredContentSize;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 displayType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <T1ConversationInlineComposeViewControllerDelgate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

