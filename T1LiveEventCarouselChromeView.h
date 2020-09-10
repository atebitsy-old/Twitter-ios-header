//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1LiveEventCarouselEntryCellViewModel, T1LiveEventRoundedCornerView, T1LiveEventRoundedPaddedView, UIImageView, UILabel;

@interface T1LiveEventCarouselChromeView : UIView
{
    T1LiveEventCarouselEntryCellViewModel *_viewModel;
    T1LiveEventRoundedPaddedView *_badgeView;
    UILabel *_contentTypeLabel;
    UIView *_socialProofView;
    UIImageView *_viewersImageView;
    UILabel *_viewersCountLabel;
    T1LiveEventRoundedCornerView *_socialProofRoundedCornerView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) T1LiveEventRoundedCornerView *socialProofRoundedCornerView; // @synthesize socialProofRoundedCornerView=_socialProofRoundedCornerView;
@property(readonly, nonatomic) UILabel *viewersCountLabel; // @synthesize viewersCountLabel=_viewersCountLabel;
@property(readonly, nonatomic) UIImageView *viewersImageView; // @synthesize viewersImageView=_viewersImageView;
@property(readonly, nonatomic) UIView *socialProofView; // @synthesize socialProofView=_socialProofView;
@property(readonly, nonatomic) UILabel *contentTypeLabel; // @synthesize contentTypeLabel=_contentTypeLabel;
@property(readonly, nonatomic) T1LiveEventRoundedPaddedView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) T1LiveEventCarouselEntryCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)_t1_viewersFont;
- (id)_t1_badgeFont;
- (id)_t1_darkBackgroundColor;
- (void)_t1_updateSubviews;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

