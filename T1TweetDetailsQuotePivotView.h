//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTappableHighlightView.h>

@class UIImageView, UILabel;

@interface T1TweetDetailsQuotePivotView : TFNTappableHighlightView
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
}

+ (double)titleWidthForContentWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

