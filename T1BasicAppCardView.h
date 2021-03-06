//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardView.h>

#import <T1Twitter/T1ImageViewFetchHelperDelegate-Protocol.h>

@class NSString, T1AppCardDetailsView, T1AppCardRatingsView, T1AvatarImageView, T1BasicAppCardViewEventRegistry, T1BasicAppCardViewModel, TFNLegacyButton, TFNSolidColorView, TFNTappableHighlightView, UIImageView, UILabel, UIView;
@protocol T1CardViewDelegate;

@interface T1BasicAppCardView : T1CardView <T1ImageViewFetchHelperDelegate>
{
    id <T1CardViewDelegate> _delegate;
    T1BasicAppCardViewModel *_viewModel;
    T1BasicAppCardViewEventRegistry *_viewEventRegistry;
    TFNTappableHighlightView *_containerHighlightView;
    TFNSolidColorView *_dominantColorView;
    T1AvatarImageView *_avatarView;
    UILabel *_fullNameLabel;
    TFNTappableHighlightView *_userHighlightView;
    UIImageView *_imageView;
    UIView *_imageBackgroundView;
    TFNTappableHighlightView *_imageHighlightView;
    UILabel *_titleLabel;
    T1AppCardRatingsView *_ratingsView;
    UILabel *_detailLabel;
    UILabel *_secondDetailLabel;
    TFNTappableHighlightView *_titleHighlightView;
    TFNLegacyButton *_callToActionButton;
    TFNTappableHighlightView *_infoAndActionHighlightView;
    UILabel *_descriptionLabel;
    T1AppCardDetailsView *_detailsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) T1AppCardDetailsView *detailsView; // @synthesize detailsView=_detailsView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) TFNTappableHighlightView *infoAndActionHighlightView; // @synthesize infoAndActionHighlightView=_infoAndActionHighlightView;
@property(retain, nonatomic) TFNLegacyButton *callToActionButton; // @synthesize callToActionButton=_callToActionButton;
@property(retain, nonatomic) TFNTappableHighlightView *titleHighlightView; // @synthesize titleHighlightView=_titleHighlightView;
@property(retain, nonatomic) UILabel *secondDetailLabel; // @synthesize secondDetailLabel=_secondDetailLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) T1AppCardRatingsView *ratingsView; // @synthesize ratingsView=_ratingsView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TFNTappableHighlightView *imageHighlightView; // @synthesize imageHighlightView=_imageHighlightView;
@property(retain, nonatomic) UIView *imageBackgroundView; // @synthesize imageBackgroundView=_imageBackgroundView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) TFNTappableHighlightView *userHighlightView; // @synthesize userHighlightView=_userHighlightView;
@property(retain, nonatomic) UILabel *fullNameLabel; // @synthesize fullNameLabel=_fullNameLabel;
@property(retain, nonatomic) T1AvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) TFNSolidColorView *dominantColorView; // @synthesize dominantColorView=_dominantColorView;
@property(retain, nonatomic) TFNTappableHighlightView *containerHighlightView; // @synthesize containerHighlightView=_containerHighlightView;
@property(retain, nonatomic) T1BasicAppCardViewEventRegistry *viewEventRegistry; // @synthesize viewEventRegistry=_viewEventRegistry;
@property(retain, nonatomic) T1BasicAppCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)delegate;
- (void)fetchImages;
- (id)imageFetchingViews;
- (void)setImagePipeline:(id)arg1;
- (void)_cleanup;
- (double)_thresholdForStandardLayout;
- (void)_update;
- (void)_cardViewModelDidUpdate:(id)arg1;
- (void)prepareForReuse;
- (void)cardContextDidUpdate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

