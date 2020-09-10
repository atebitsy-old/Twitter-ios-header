//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardViewAccessible.h>

#import <T1Twitter/T1CardMediaViewDataSource-Protocol.h>
#import <T1Twitter/T1CardMediaViewDelegate-Protocol.h>

@class T1CardImageView, T1CardMediaView, T1WebCardViewEventRegistry, T1WebCardViewModel, TFNAttributedTextView, TFNButton, TFNSolidColorView, TFNTappableHighlightView, UIView;
@protocol T1CardViewDelegate;

@interface T1WebCardView : T1CardViewAccessible <T1CardMediaViewDataSource, T1CardMediaViewDelegate>
{
    id <T1CardViewDelegate> _delegate;
    T1CardMediaView *_mediaView;
    T1WebCardViewModel *_viewModel;
    T1WebCardViewEventRegistry *_viewEventRegistry;
    TFNTappableHighlightView *_mediaHighlightView;
    TFNSolidColorView *_colorView;
    TFNAttributedTextView *_titleLabel;
    TFNTappableHighlightView *_titleHighlightView;
    TFNAttributedTextView *_descriptionLabel;
    TFNTappableHighlightView *_descriptionHighlightView;
    TFNAttributedTextView *_websiteLabel;
    TFNTappableHighlightView *_websiteHighlightView;
    UIView *_imageInfoAreaBorderView;
    TFNTappableHighlightView *_fallbackHighlightView;
    UIView *_proxyHighlightView;
    TFNButton *_callToActionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNButton *callToActionButton; // @synthesize callToActionButton=_callToActionButton;
@property(retain, nonatomic) UIView *proxyHighlightView; // @synthesize proxyHighlightView=_proxyHighlightView;
@property(retain, nonatomic) TFNTappableHighlightView *fallbackHighlightView; // @synthesize fallbackHighlightView=_fallbackHighlightView;
@property(retain, nonatomic) UIView *imageInfoAreaBorderView; // @synthesize imageInfoAreaBorderView=_imageInfoAreaBorderView;
@property(retain, nonatomic) TFNTappableHighlightView *websiteHighlightView; // @synthesize websiteHighlightView=_websiteHighlightView;
@property(retain, nonatomic) TFNAttributedTextView *websiteLabel; // @synthesize websiteLabel=_websiteLabel;
@property(retain, nonatomic) TFNTappableHighlightView *descriptionHighlightView; // @synthesize descriptionHighlightView=_descriptionHighlightView;
@property(retain, nonatomic) TFNAttributedTextView *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) TFNTappableHighlightView *titleHighlightView; // @synthesize titleHighlightView=_titleHighlightView;
@property(retain, nonatomic) TFNAttributedTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TFNSolidColorView *colorView; // @synthesize colorView=_colorView;
@property(retain, nonatomic) TFNTappableHighlightView *mediaHighlightView; // @synthesize mediaHighlightView=_mediaHighlightView;
@property(retain, nonatomic) T1WebCardViewEventRegistry *viewEventRegistry; // @synthesize viewEventRegistry=_viewEventRegistry;
@property(retain, nonatomic) T1WebCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) T1CardMediaView *mediaView; // @synthesize mediaView=_mediaView;
- (id)delegate;
- (void)_t1_updateAccessibilityForCurrentDeviceState;
- (void)_t1_cardViewModelDidUpdate:(id)arg1;
- (void)_t1_cleanup;
- (void)cardMediaView:(id)arg1 didReceivePlayButtonActionWithEvent:(id)arg2;
- (id)mediaHighlightViewForMediaView:(id)arg1;
- (void)_t1_updateLabels;
- (void)_t1_setupHighlightView:(id)arg1 withAccessibilityIdentifier:(id)arg2;
- (id)previewConfigurationForLocation:(struct CGPoint)arg1;
- (id)playerViewContainer;
- (void)restartAnimationsIfNeeded;
- (id)cardMediaView;
- (void)updateSubviews;
- (void)fetchImages;
- (void)setImagePipeline:(id)arg1;
- (void)cardContextDidUpdate;
- (void)setDelegate:(id)arg1;
- (void)prepareForReuse;
@property(readonly, nonatomic) T1CardImageView *imageView;
- (id)accessibilityStringForStatusText:(id)arg1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

