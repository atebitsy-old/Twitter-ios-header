//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardView.h>

#import <T1Twitter/T1ImageViewFetchHelperDelegate-Protocol.h>
#import <T1Twitter/T1PlayerCardPlayerContainerViewDelegate-Protocol.h>

@class NSString, T1ConversationCardDetailsView, T1ConversationCardViewEventRegistry, T1ConversationCardViewModel, T1PlayerCardPlayerContainerView, TFNSolidColorView, TFNTappableHighlightView, UIImageView, UIView;
@protocol T1CardViewDelegate;

@interface T1ConversationCardView : T1CardView <T1PlayerCardPlayerContainerViewDelegate, T1ImageViewFetchHelperDelegate>
{
    id <T1CardViewDelegate> _delegate;
    UIImageView *_lockedStateImageView;
    T1ConversationCardViewModel *_viewModel;
    T1ConversationCardViewEventRegistry *_viewEventRegistry;
    T1PlayerCardPlayerContainerView *_playerContainerView;
    TFNTappableHighlightView *_imageHighlightView;
    UIView *_borderSeparator;
    T1ConversationCardDetailsView *_detailsView;
    TFNTappableHighlightView *_detailsHighlightView;
    TFNTappableHighlightView *_fallbackHighlightView;
    UIView *_proxyHighlightView;
    TFNSolidColorView *_dominantColorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNSolidColorView *dominantColorView; // @synthesize dominantColorView=_dominantColorView;
@property(retain, nonatomic) UIView *proxyHighlightView; // @synthesize proxyHighlightView=_proxyHighlightView;
@property(retain, nonatomic) TFNTappableHighlightView *fallbackHighlightView; // @synthesize fallbackHighlightView=_fallbackHighlightView;
@property(retain, nonatomic) TFNTappableHighlightView *detailsHighlightView; // @synthesize detailsHighlightView=_detailsHighlightView;
@property(retain, nonatomic) T1ConversationCardDetailsView *detailsView; // @synthesize detailsView=_detailsView;
@property(retain, nonatomic) UIView *borderSeparator; // @synthesize borderSeparator=_borderSeparator;
@property(retain, nonatomic) TFNTappableHighlightView *imageHighlightView; // @synthesize imageHighlightView=_imageHighlightView;
@property(retain, nonatomic) T1PlayerCardPlayerContainerView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(retain, nonatomic) T1ConversationCardViewEventRegistry *viewEventRegistry; // @synthesize viewEventRegistry=_viewEventRegistry;
@property(retain, nonatomic) T1ConversationCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImageView *lockedStateImageView; // @synthesize lockedStateImageView=_lockedStateImageView;
- (id)delegate;
- (void)_cleanup;
- (void)presentFullscreenPlayerFromInlineMediaView:(id)arg1 withPreviewImage:(id)arg2;
- (void)cardPlayerContainerView:(id)arg1 didTapPlayButtonOverlayWithEvent:(id)arg2;
- (_Bool)cardPlayerContainerViewCanPlayStreamInline:(id)arg1;
- (void)t1_fetchHelper:(id)arg1 readyToConfigureView:(id)arg2 state:(long long)arg3;
- (void)fetchImages;
- (id)imageFetchingViews;
- (void)setImagePipeline:(id)arg1;
- (void)cardContextDidUpdate;
- (void)_t1_prefetchPreviewImage;
- (void)_updateImageHighlightView;
- (void)_updatePlayerContainerView;
- (void)updateSubviews;
- (void)_setupHighlightView:(id)arg1 withAccessibilityIdentifier:(id)arg2;
- (void)_didVote:(id)arg1;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (id)cardMediaView;
- (id)playerViewContainer;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_registerEventHandler;
@property(readonly, nonatomic) _Bool isCardLockedWithImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

