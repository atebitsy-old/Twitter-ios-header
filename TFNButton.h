//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface TFNButton : UIButton
{
    UIColor *_backgroundColor;
    _Bool _rounded;
    _Bool _imageTrailsLabel;
    long long _style;
    long long _sizeClass;
    double _imageToTitlePadding;
    UIColor *_highlightFillColor;
    UIColor *_borderColor;
    UIView *_highlightView;
    struct UIEdgeInsets _touchInsets;
}

+ (long long)_tfn_layoutForButtonWithText:(_Bool)arg1 image:(_Bool)arg2;
+ (id)_tfn_imageForImageNamed:(id)arg1 withSize:(struct CGSize)arg2;
+ (double)imageToTitlePaddingForSizeClass:(long long)arg1;
+ (struct CGSize)imageSizeForSizeClass:(long long)arg1;
+ (id)fontForSizeClass:(long long)arg1;
+ (struct UIEdgeInsets)contentEdgeInsetsForSizeClass:(long long)arg1 layout:(long long)arg2;
+ (struct CGSize)sizeForButtonWithTitle:(id)arg1 font:(id)arg2 imageToTitlePadding:(double)arg3 imageSize:(struct CGSize)arg4 contentEdgeInsets:(struct UIEdgeInsets)arg5;
+ (struct CGSize)sizeForButtonWithTitle:(id)arg1 hasImage:(_Bool)arg2 sizeClass:(long long)arg3;
+ (id)buttonWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 sizeClass:(long long)arg4;
+ (id)buttonWithTitle:(id)arg1 imageNamed:(id)arg2 style:(long long)arg3 sizeClass:(long long)arg4;
+ (id)buttonWithStyle:(long long)arg1 sizeClass:(long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *highlightFillColor; // @synthesize highlightFillColor=_highlightFillColor;
@property(nonatomic) _Bool imageTrailsLabel; // @synthesize imageTrailsLabel=_imageTrailsLabel;
@property(nonatomic) double imageToTitlePadding; // @synthesize imageToTitlePadding=_imageToTitlePadding;
@property(nonatomic, getter=isRounded) _Bool rounded; // @synthesize rounded=_rounded;
@property(nonatomic) long long sizeClass; // @synthesize sizeClass=_sizeClass;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)_tfn_touchBounds;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)_tfn_updateAppearance;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)_tfn_updateCornerCurveSettings;
- (void)_tfn_updateContentInsetForSizeClass:(long long)arg1;
- (void)_tfn_configureWithBackgroundColor:(id)arg1 titleColor:(id)arg2 borderColor:(id)arg3 highlightColor:(id)arg4;
@property(readonly, nonatomic) long long currentLayout;
- (void)setImageNamed:(id)arg1 withSize:(struct CGSize)arg2 forState:(unsigned long long)arg3;
- (void)setImageNamed:(id)arg1 forState:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

