//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNRoundedCornerView, UIButton, UIImage, UIImageView, UILabel;

@interface T1ModuleHeaderContentView : UIView
{
    TFNRoundedCornerView *_imageContainerView;
    UIButton *_caretButton;
    UILabel *_headerTextLabel;
    UILabel *_detailHeaderTextLabel;
    UIImageView *_iconImageView;
}

+ (double)heightWithHeaderText:(id)arg1 andDetailText:(id)arg2 iconHidden:(_Bool)arg3 caretHidden:(_Bool)arg4 layoutMetrics:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UILabel *detailHeaderTextLabel; // @synthesize detailHeaderTextLabel=_detailHeaderTextLabel;
@property(readonly, nonatomic) UILabel *headerTextLabel; // @synthesize headerTextLabel=_headerTextLabel;
@property(readonly, nonatomic) UIButton *caretButton; // @synthesize caretButton=_caretButton;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *iconImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

