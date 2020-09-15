//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationBar.h>

#import <TFNUI/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSString, TFNBarProgressView, TFNNavigationBarOverlayView, UIColor, UIImage, UIImageView, UIView;

@interface TFNNavigationBar : UINavigationBar <TFNLayoutMetricsEnvironment>
{
    long long _matchingStatusBarStyle;
    _Bool _boundsChangesDisabled;
    _Bool _windowDraggable;
    UIColor *_customShadowColor;
    long long _compressHeightWhenVerticallyCompact;
    UIImage *_logoImage;
    UIColor *_logoTintColor;
    UIView *_customShadowView;
    TFNBarProgressView *_progressView;
    unsigned long long _progressViewHideAnimationCount;
    UIImageView *_logoImageView;
    UIView *_backgroundView;
    TFNNavigationBarOverlayView *_overlayView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNNavigationBarOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) unsigned long long progressViewHideAnimationCount; // @synthesize progressViewHideAnimationCount=_progressViewHideAnimationCount;
@property(readonly, nonatomic) TFNBarProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) UIView *customShadowView; // @synthesize customShadowView=_customShadowView;
@property(nonatomic, getter=isWindowDraggable) _Bool windowDraggable; // @synthesize windowDraggable=_windowDraggable;
@property(retain, nonatomic) UIColor *logoTintColor; // @synthesize logoTintColor=_logoTintColor;
@property(retain, nonatomic) UIImage *logoImage; // @synthesize logoImage=_logoImage;
@property(nonatomic) _Bool boundsChangesDisabled; // @synthesize boundsChangesDisabled=_boundsChangesDisabled;
@property(nonatomic) long long compressHeightWhenVerticallyCompact; // @synthesize compressHeightWhenVerticallyCompact=_compressHeightWhenVerticallyCompact;
@property(retain, nonatomic) UIColor *customShadowColor; // @synthesize customShadowColor=_customShadowColor;
- (id)_tfn_contentView:(id)arg1 hitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (long long)barPosition;
@property(nonatomic) double overlayViewAlpha;
- (void)setLogoHidden:(_Bool)arg1 withAccessibilityLabel:(id)arg2 coordinator:(id)arg3;
@property(readonly, getter=isLogoHidden) _Bool logoHidden;
- (struct CGRect)_logoImageViewFrame;
- (struct CGRect)_embeddedProgessViewFrame;
- (void)setProgressViewProgress:(float)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setProgressViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGRect)_customShadowFrame;
- (struct CGRect)_backgroundViewFrame;
- (void)setShadowHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isShadowHidden) _Bool shadowHidden;
@property(nonatomic) long long matchingStatusBarStyle;
- (void)setTranslucent:(_Bool)arg1;
- (void)setBarTintColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

