//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTappableImageView.h>

#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSString, T1AvatarImageView, T1AvatarImageViewModel, TFNTwitterUserDataSource, TIPImagePipeline, UIColor, UIImage, UIImageView, UIView;
@protocol TFSTwitterCanonicalUser;

@interface T1ProfileAvatarImageView : TFNTappableImageView <TFNLayoutMetricsEnvironment>
{
    UIView *_pressedView;
    id _previewingTarget;
    SEL _previewingAction;
    _Bool _shouldObscureAvatar;
    _Bool _showAddAvatarOverlay;
    _Bool _borderHidden;
    UIImage *_customImage;
    TIPImagePipeline *_imagePipeline;
    unsigned long long _avatarImageViewSizeType;
    double _fixedBorderWidth;
    UIColor *_borderColor;
    double _renderedBorderWidth;
    UIImageView *_customAvatarImageView;
    T1AvatarImageView *_avatarImageView;
    UIView *_avatarImageDarkOverlayView;
    UIImageView *_addAvatarOverlayImageView;
}

+ (struct CGSize)_sizeWithWidth:(double)arg1;
+ (struct CGSize)preferredSizeForAvatarImageViewSizeType:(unsigned long long)arg1;
+ (struct UIEdgeInsets)borderInsetsForSize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *addAvatarOverlayImageView; // @synthesize addAvatarOverlayImageView=_addAvatarOverlayImageView;
@property(retain, nonatomic) UIView *avatarImageDarkOverlayView; // @synthesize avatarImageDarkOverlayView=_avatarImageDarkOverlayView;
@property(retain, nonatomic) T1AvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *customAvatarImageView; // @synthesize customAvatarImageView=_customAvatarImageView;
@property(readonly, nonatomic) double renderedBorderWidth; // @synthesize renderedBorderWidth=_renderedBorderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) _Bool borderHidden; // @synthesize borderHidden=_borderHidden;
@property(nonatomic) double fixedBorderWidth; // @synthesize fixedBorderWidth=_fixedBorderWidth;
@property(nonatomic) unsigned long long avatarImageViewSizeType; // @synthesize avatarImageViewSizeType=_avatarImageViewSizeType;
@property(nonatomic) _Bool showAddAvatarOverlay; // @synthesize showAddAvatarOverlay=_showAddAvatarOverlay;
@property(nonatomic) _Bool shouldObscureAvatar; // @synthesize shouldObscureAvatar=_shouldObscureAvatar;
@property(copy, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(retain, nonatomic) UIImage *customImage; // @synthesize customImage=_customImage;
- (void)setPressed:(_Bool)arg1;
@property(readonly, nonatomic) struct CGSize preferredSize;
- (void)setIsAccessibilityElement:(_Bool)arg1;
@property(nonatomic) double addAvatarOverlayAlpha;
@property(retain, nonatomic) TFNTwitterUserDataSource *userDataSource;
@property(retain, nonatomic) T1AvatarImageViewModel *avatarImageViewModel;
@property(retain, nonatomic) id <TFSTwitterCanonicalUser> user;
@property(readonly, nonatomic) UIImage *renderedCurrentImage;
- (id)_pressedViewWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateImage;
- (_Bool)_shouldShowCustomAvatarImageView;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

