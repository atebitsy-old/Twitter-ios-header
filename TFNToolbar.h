//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

@class TFNCustomHitTestView, UIColor, UIView;

@interface TFNToolbar : UIToolbar
{
    UIView *_bottomShadowView;
    TFNCustomHitTestView *_contentView;
    _Bool _hasBottomShadow;
    UIColor *_customShadowColor;
    long long _compressHeightWhenVerticallyCompact;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long compressHeightWhenVerticallyCompact; // @synthesize compressHeightWhenVerticallyCompact=_compressHeightWhenVerticallyCompact;
@property(nonatomic) _Bool hasBottomShadow; // @synthesize hasBottomShadow=_hasBottomShadow;
@property(retain, nonatomic) UIColor *customShadowColor; // @synthesize customShadowColor=_customShadowColor;
- (id)_tfn_contentView:(id)arg1 hitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGRect)_bottomShadowFrame;
- (id)_customShadowImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

