//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@class UIColor;

@interface TAVSlider : UISlider
{
    UIColor *_trackActiveColor;
    UIColor *_trackInactiveColor;
}

+ (id)private_trackImageWithColor:(id)arg1 height:(double)arg2 horizontalPadding:(double)arg3;
+ (id)private_thumbImageWithColor:(id)arg1 diameter:(double)arg2 shadowOffset:(struct CGSize)arg3 shadowBlurRadius:(double)arg4 shadowColor:(id)arg5;
+ (id)private_defaultInactiveTrackColor;
+ (id)private_defaultActiveTrackColor;
- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *trackInactiveColor; // @synthesize trackInactiveColor=_trackInactiveColor;
@property(copy, nonatomic) UIColor *trackActiveColor; // @synthesize trackActiveColor=_trackActiveColor;
- (void)private_tapAction:(id)arg1;
- (void)private_updateImages;
- (long long)semanticContentAttribute;
- (void)private_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
