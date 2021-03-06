//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

#import <T1Twitter/T1AutoplayViewContainer-Protocol.h>
#import <T1Twitter/T1AutoplayableContainer-Protocol.h>
#import <T1Twitter/T1ImageViewFetchHelperDelegate-Protocol.h>
#import <T1Twitter/T1InlineMediaContainerViewDelegate-Protocol.h>
#import <T1Twitter/T1InlineMediaViewDelegate-Protocol.h>
#import <T1Twitter/T1StatusPhotoVideoDetailsViewDelegate-Protocol.h>
#import <T1Twitter/TAVPlaybackObserver-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class CALayer, NSString, T1InlineMediaContainerView, T1InlineMediaView, T1StatusPhotoVideoDetailsView, TAVVideoContext, TFNTwitterAccount, TFNTwitterStatus, UIImage, UILabel, UIView;
@protocol TFNTwitterAVPlayerSessionSource;

@interface T1NativeVideoCell : TFNTableViewCell <T1InlineMediaViewDelegate, T1ImageViewFetchHelperDelegate, T1StatusPhotoVideoDetailsViewDelegate, TFNLayoutMetricsEnvironment, TAVPlaybackObserver, T1InlineMediaContainerViewDelegate, T1AutoplayViewContainer, T1AutoplayableContainer>
{
    TFNTwitterStatus *_status;
    TFNTwitterAccount *_account;
    T1InlineMediaView *_inlineMediaView;
    T1StatusPhotoVideoDetailsView *_detailsView;
    CDUnknownBlockType _presentPlayerBlock;
    CDUnknownBlockType _didTapAttributionBlock;
    CDUnknownBlockType _didTapPrerollCTABlock;
    CDUnknownBlockType _didLongPressMediaBlock;
    UIView *_mediaGroupContainerView;
    T1InlineMediaContainerView *_mediaContainerView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    CALayer *_detailsSeparator;
    TAVVideoContext *_lastVideoContext;
}

+ (_Bool)_t1_isDetailsViewRequiredForStatus:(id)arg1;
+ (double)_heightForString:(id)arg1 withFont:(id)arg2 contentWidth:(double)arg3 maxLines:(long long)arg4;
+ (double)_videoHeightForMediaEntity:(id)arg1 insetRect:(struct CGRect)arg2;
+ (double)_videoHeightForMediaEntity:(id)arg1 insetRect:(struct CGRect)arg2 contentPadding:(struct UIEdgeInsets)arg3;
+ (double)_t1_heightForMediaEntity:(id)arg1 status:(id)arg2 insetRect:(struct CGRect)arg3 textWidth:(double)arg4 contentPadding:(struct UIEdgeInsets)arg5 layoutMetrics:(id)arg6;
+ (double)heightForMediaEntity:(id)arg1 status:(id)arg2 withinBounds:(struct CGRect)arg3 layoutMetrics:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) TAVVideoContext *lastVideoContext; // @synthesize lastVideoContext=_lastVideoContext;
@property(readonly, nonatomic) CALayer *detailsSeparator; // @synthesize detailsSeparator=_detailsSeparator;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) T1InlineMediaContainerView *mediaContainerView; // @synthesize mediaContainerView=_mediaContainerView;
@property(readonly, nonatomic) UIView *mediaGroupContainerView; // @synthesize mediaGroupContainerView=_mediaGroupContainerView;
@property(copy, nonatomic) CDUnknownBlockType didLongPressMediaBlock; // @synthesize didLongPressMediaBlock=_didLongPressMediaBlock;
@property(copy, nonatomic) CDUnknownBlockType didTapPrerollCTABlock; // @synthesize didTapPrerollCTABlock=_didTapPrerollCTABlock;
@property(copy, nonatomic) CDUnknownBlockType didTapAttributionBlock; // @synthesize didTapAttributionBlock=_didTapAttributionBlock;
@property(copy, nonatomic) CDUnknownBlockType presentPlayerBlock; // @synthesize presentPlayerBlock=_presentPlayerBlock;
@property(readonly, nonatomic) T1StatusPhotoVideoDetailsView *detailsView; // @synthesize detailsView=_detailsView;
@property(readonly, nonatomic) T1InlineMediaView *inlineMediaView; // @synthesize inlineMediaView=_inlineMediaView;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
- (void)inlineMediaContainerView:(id)arg1 didTapCTAButtonWithModel:(id)arg2;
- (void)statusPhotoVideoDetailsView:(id)arg1 didTapAttributionForMediaEntity:(id)arg2;
- (void)_t1_updateForAdDisplayAnimated:(_Bool)arg1;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)inlineMediaView:(id)arg1 wasLongPressedWithGestureRecognizer:(id)arg2;
- (void)inlineMediaViewWasTapped:(id)arg1 withEvent:(id)arg2;
- (_Bool)inlineMediaViewShouldShowVideoDetailsInOverlay:(id)arg1;
- (void)mediaView:(id)arg1 didStopPresentingPlayerView:(id)arg2;
- (void)mediaView:(id)arg1 willPresentPlayerView:(id)arg2;
- (void)_t1_mediaViewWasTapped:(id)arg1;
@property(readonly, nonatomic) UIImage *playerPreviewImage;
@property(readonly, nonatomic) UIView *playerContainerView;
@property(readonly, nonatomic) id <TFNTwitterAVPlayerSessionSource> playerSessionSource;
- (id)autoplayable;
- (id)calculatedLayoutMetrics;
- (void)layoutSubviews;
- (void)t1_fetchHelper:(id)arg1 didUpdateImageFromSource:(long long)arg2 isFinal:(_Bool)arg3;
- (void)restartAnimationsIfNeeded;
- (_Bool)_t1_isDetailsViewRequiredForStatus:(id)arg1;
- (void)_t1_updateDetailsView;
- (void)_updateViews;
- (void)setSeparatorAndBorderColor:(id)arg1;
- (void)cleanup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

