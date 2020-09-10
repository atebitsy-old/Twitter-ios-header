//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, T1LiveEventCarouselTransitionViewModel, UIImageView, UILabel, UIStackView;

@interface T1LiveEventCarouselTransitionUserInfoView : UIView
{
    T1LiveEventCarouselTransitionViewModel *_viewModel;
    UILabel *_displayNameLabel;
    UIImageView *_verifiedImageView;
    UILabel *_usernameLabel;
    NSLayoutConstraint *_verifiedImageHeightConstraint;
    NSLayoutConstraint *_verifiedImageWidthConstraint;
    UIStackView *_stackView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSLayoutConstraint *verifiedImageWidthConstraint; // @synthesize verifiedImageWidthConstraint=_verifiedImageWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *verifiedImageHeightConstraint; // @synthesize verifiedImageHeightConstraint=_verifiedImageHeightConstraint;
@property(readonly, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(readonly, nonatomic) UIImageView *verifiedImageView; // @synthesize verifiedImageView=_verifiedImageView;
@property(readonly, nonatomic) UILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) T1LiveEventCarouselTransitionViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)tfn_fontSizeChanged;
- (id)_t1_verifiedImage;
- (id)_t1_usernameFont;
- (id)_t1_displayNameFont;
- (void)_t1_updateSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

