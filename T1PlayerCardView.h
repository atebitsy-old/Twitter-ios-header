//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardView.h>

#import <T1Twitter/T1ImageViewFetchHelperDelegate-Protocol.h>
#import <T1Twitter/T1PlayerCardPlayerContainerViewDelegate-Protocol.h>

@class NSString, T1AvatarImageView, T1CardClassicButton, T1PlayerCardPlayerContainerView, T1PlayerCardViewModel, TFNAttributedTextView, TFNTappableHighlightView, UILabel, UILongPressGestureRecognizer;

@interface T1PlayerCardView : T1CardView <T1PlayerCardPlayerContainerViewDelegate, T1ImageViewFetchHelperDelegate>
{
    T1AvatarImageView *_avatarView;
    UILabel *_fullNameLabel;
    TFNTappableHighlightView *_attributionHighlightView;
    TFNAttributedTextView *_titleLabel;
    TFNTappableHighlightView *_titleHighlightView;
    TFNAttributedTextView *_descriptionLabel;
    TFNTappableHighlightView *_descriptionHighlightView;
    T1CardClassicButton *_ctaButton;
    T1PlayerCardPlayerContainerView *_playerContainerView;
    UILongPressGestureRecognizer *_ctaLongPressGestureRecognizer;
    T1PlayerCardViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) T1PlayerCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILongPressGestureRecognizer *ctaLongPressGestureRecognizer; // @synthesize ctaLongPressGestureRecognizer=_ctaLongPressGestureRecognizer;
@property(retain, nonatomic) T1PlayerCardPlayerContainerView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(retain, nonatomic) T1CardClassicButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(retain, nonatomic) TFNTappableHighlightView *descriptionHighlightView; // @synthesize descriptionHighlightView=_descriptionHighlightView;
@property(retain, nonatomic) TFNAttributedTextView *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) TFNTappableHighlightView *titleHighlightView; // @synthesize titleHighlightView=_titleHighlightView;
@property(retain, nonatomic) TFNAttributedTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TFNTappableHighlightView *attributionHighlightView; // @synthesize attributionHighlightView=_attributionHighlightView;
@property(retain, nonatomic) UILabel *fullNameLabel; // @synthesize fullNameLabel=_fullNameLabel;
@property(retain, nonatomic) T1AvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
- (id)playerViewContainer;
- (void)_didOpenVideoInWebview:(id)arg1;
- (void)_didLongPressOnCallToActionWithGestureRecognizer:(id)arg1;
- (void)_didTapOnCallToAction:(id)arg1;
- (void)_didLongPressOnLink:(id)arg1;
- (void)_didTapOnLink:(id)arg1;
- (void)_didTapOnAttributionFullName:(id)arg1;
- (void)_didTapOnAttributionAvatarImage:(id)arg1;
- (void)_updateCallToActionIfNeeded;
- (void)_updateDescriptionIfNeeded;
- (void)_updateTitleIfNeeded;
- (void)_updateUserIfNeeded;
- (void)_viewModelDidUpdate:(id)arg1;
- (void)_cleanup;
- (void)presentFullscreenPlayerFromInlineMediaView:(id)arg1 withPreviewImage:(id)arg2;
- (void)cardPlayerContainerView:(id)arg1 didTapPlayButtonOverlayWithEvent:(id)arg2;
- (_Bool)cardPlayerContainerViewCanPlayStreamInline:(id)arg1;
- (void)t1_fetchHelper:(id)arg1 readyToConfigureView:(id)arg2 state:(long long)arg3;
- (void)fetchImages;
- (void)setImagePipeline:(id)arg1;
- (void)_registerEventHandlers;
- (void)updateSubviews;
- (void)cardContextDidUpdate;
- (void)prepareForReuse;
- (void)dealloc;
- (id)cardMediaView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

