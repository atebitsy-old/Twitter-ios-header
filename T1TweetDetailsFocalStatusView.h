//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1LayoutableStatusView-Protocol.h>
#import <T1Twitter/TFNComposableViewHost-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsSizing-Protocol.h>

@class NSArray, NSString, T1ActivitySummaryView, T1StatusLiveEngagementManager, T1StatusViewCombinedViewModel, T1TweetDetailsFooterTextView, TFNComposableViewSet, TFNReusableViewCache, TFNTwitterAccount, TFSTwitterScribeContext;
@protocol T1AutoplayViewContainer, T1BasicStatusView, T1CardViewDelegate, T1StatusViewEventHandler, T1StatusViewInlineActions, T1StatusViewInlineImages, T1StatusViewLayoutState, T1StatusViewModel, TFSTwitterScribableItem;

@interface T1TweetDetailsFocalStatusView : UIView <TFNComposableViewHost, TFNLayoutMetricsSizing, T1LayoutableStatusView>
{
    T1StatusViewCombinedViewModel *_viewModel;
    id <T1StatusViewEventHandler> _eventHandler;
    TFSTwitterScribeContext *_scribeContext;
    id <TFSTwitterScribableItem> _scribableItem;
    TFNComposableViewSet *_viewSet;
    NSArray *_visibleAccessibilityViews;
}

+ (id)_t1_viewAdapterSet;
+ (id)layoutStateGenerator;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *visibleAccessibilityViews; // @synthesize visibleAccessibilityViews=_visibleAccessibilityViews;
@property(readonly, nonatomic) TFNComposableViewSet *viewSet; // @synthesize viewSet=_viewSet;
@property(readonly, nonatomic) id <TFSTwitterScribableItem> scribableItem; // @synthesize scribableItem=_scribableItem;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) __weak id <T1StatusViewEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void)_t1_updateAccessibility;
- (id)accessibilityElements;
- (void)beginComposingInlineReply;
@property(readonly, nonatomic) __weak id <T1CardViewDelegate> cardViewDelegate;
@property(retain, nonatomic) TFNReusableViewCache *reusableViewCache;
@property(nonatomic) unsigned long long conversationConnectorType;
@property(nonatomic) _Bool shouldPauseLivePipelineUpdates;
@property(nonatomic) __weak T1StatusLiveEngagementManager *livePipelineTweetManager;
@property(readonly, nonatomic) UIView *visibleAutoTranslateBodyView;
- (id)infoTextView;
- (id)monetizationSettingsView;
- (id)mutedConversationView;
- (id)analyticsView;
- (id)translateBodyTextView;
- (id)translateLoadingView;
- (id)translateActionView;
@property(readonly, nonatomic) T1ActivitySummaryView *activitySummaryView;
@property(readonly, nonatomic) T1TweetDetailsFooterTextView *footerTextView;
@property(readonly, nonatomic) id <T1StatusViewInlineActions> inlineActions;
@property(readonly, nonatomic) id <T1StatusViewInlineImages> inlineImages;
@property(readonly, nonatomic) id <T1AutoplayViewContainer> autoplayPlayerContainer;
@property(readonly, nonatomic) unsigned long long secondaryAttachmentType;
@property(readonly, nonatomic) unsigned long long attachmentType;
@property(readonly, nonatomic) UIView<T1BasicStatusView> *mediaForwardStatusView;
@property(readonly, nonatomic) UIView *visibleTweetstormIndicatorView;
@property(readonly, nonatomic) UIView *visibleTranslateTweetView;
@property(readonly, nonatomic) UIView<T1BasicStatusView> *visibleQuotedStatusView;
@property(readonly, nonatomic) UIView *visibleCardForwardView;
@property(readonly, nonatomic) UIView *visibleMediaForwardView;
@property(readonly, nonatomic) UIView *visibleBodyTextView;
@property(readonly, nonatomic) UIView *visibleConversationContextView;
@property(readonly, nonatomic) UIView *visibleAuthorView;
@property(readonly, nonatomic) UIView *visibleAvatarView;
- (void)updateTimestamp;
@property(readonly, nonatomic) TFNTwitterAccount *account;
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, nonatomic) id <T1StatusViewModel> viewModel;
- (void)_t1_applyViewModelUpdate:(id)arg1;
- (id)_t1_viewSetUpdatesWithInfo:(id)arg1;
- (void)_t1_onViewModelUpdate:(id)arg1;
- (void)setViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
- (id)previewConfigurationForLocation:(struct CGPoint)arg1;
- (struct CGSize)sizeWithLayoutMetrics:(id)arg1;
- (_Bool)tfn_terminatesInvalidateIntrinsicContentSizeRecursion;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)openURL;
@property(readonly, nonatomic) _Bool hasURL;
- (_Bool)_t1_updateLayoutState;
@property(retain, nonatomic) id <T1StatusViewLayoutState> layoutState;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

