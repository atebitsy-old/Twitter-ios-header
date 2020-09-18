//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>
#import <T1Twitter/T1OnboardingHeaderViewSpec-Protocol.h>

@class NSArray, NSString, T1OnboardingHeaderAdapter, T1OnboardingSubtaskController, T1PromptImageSpec, T1PromptTextSpec, TFNTwitterAccount, TFSTwitterOnboardingHeaderImage, TFSTwitterOnboardingRichText, UIColor, UIView;
@protocol T1UserViewModel, TFSTwitterOnboardingSubtaskDataProvider;

@interface T1OnboardingHeaderViewModel : NSObject <NSCopying, T1OnboardingHeaderViewSpec>
{
    id <TFSTwitterOnboardingSubtaskDataProvider> _subtaskDataProvider;
    _Bool _isUnpadded;
    T1OnboardingHeaderAdapter *_headerAdapter;
    long long _style;
    T1OnboardingSubtaskController *_subtaskController;
    TFSTwitterOnboardingHeaderImage *_headerImage;
    TFSTwitterOnboardingRichText *_subtitle;
    TFSTwitterOnboardingRichText *_title;
    TFNTwitterAccount *_account;
    id _dataViewItem;
    NSArray *_dataViewItems;
    UIView *_headerView;
    T1PromptImageSpec *_imageSpec;
    T1PromptTextSpec *_subtitleTextSpec;
    T1PromptTextSpec *_titleTextSpec;
    id <T1UserViewModel> _userViewModel;
    NSString *_backMenuTitle;
    long long _imageAlignment;
    long long _titleAlignment;
    long long _subtitleAlignment;
}

+ (Class)headerViewClass;
- (void).cxx_destruct;
@property(nonatomic) long long subtitleAlignment; // @synthesize subtitleAlignment=_subtitleAlignment;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(nonatomic) long long imageAlignment; // @synthesize imageAlignment=_imageAlignment;
@property(copy, nonatomic) NSString *backMenuTitle; // @synthesize backMenuTitle=_backMenuTitle;
@property(readonly, nonatomic) id <T1UserViewModel> userViewModel; // @synthesize userViewModel=_userViewModel;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (id)private_overrideFontForSubtitle;
- (id)private_overrideFontForTitle;
- (double)private_titleToSubtitleSpacing;
- (struct UIEdgeInsets)private_contentInsetsForLayoutMetrics:(id)arg1 requireFixed:(_Bool)arg2;
- (id)private_subtitleColor;
- (_Bool)private_isCompressibleWithTopPadding:(double *)arg1 bottomPadding:(double *)arg2 gap:(double *)arg3;
- (double)titleToSubtitleSpacingForLayoutMetrics:(id)arg1;
- (struct UIEdgeInsets)contentInsetsForLayoutMetrics:(id)arg1;
@property(readonly, nonatomic) UIColor *subtitleColor;
@property(readonly, nonatomic) UIColor *titleColor;
@property(readonly, nonatomic) T1PromptTextSpec *subtitleTextSpec; // @synthesize subtitleTextSpec=_subtitleTextSpec;
@property(readonly, nonatomic) T1PromptTextSpec *titleTextSpec; // @synthesize titleTextSpec=_titleTextSpec;
@property(readonly, nonatomic) T1PromptImageSpec *imageSpec; // @synthesize imageSpec=_imageSpec;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)minimumSizeForLayoutMetrics:(id)arg1;
- (struct CGSize)sizeForLayoutMetrics:(id)arg1;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) id dataViewItem; // @synthesize dataViewItem=_dataViewItem;
@property(readonly, nonatomic) NSArray *dataViewItems; // @synthesize dataViewItems=_dataViewItems;
- (id)initWithStyle:(long long)arg1 account:(id)arg2 headerSpec:(id)arg3;
- (id)initWithStyle:(long long)arg1 title:(id)arg2 subtitle:(id)arg3;
- (id)initWithStyle:(long long)arg1 account:(id)arg2 subtaskController:(id)arg3 subtaskDataProvider:(id)arg4 headerImage:(id)arg5 userViewModel:(id)arg6 title:(id)arg7 subtitle:(id)arg8 imageAlignment:(long long)arg9 titleAlignment:(long long)arg10 subtitleAlignment:(long long)arg11;
- (id)initWithStyle:(long long)arg1 account:(id)arg2 subtaskController:(id)arg3 subtaskDataProvider:(id)arg4 headerImage:(id)arg5 title:(id)arg6 subtitle:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

