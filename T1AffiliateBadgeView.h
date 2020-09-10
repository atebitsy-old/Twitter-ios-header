//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTappableHighlightView.h>

#import <T1Twitter/TIPImageViewFetchHelperDataSource-Protocol.h>

@class NSString, TFNAttributedTextView, TIPImagePipeline, UIColor, UIImageView;

@interface T1AffiliateBadgeView : TFNTappableHighlightView <TIPImageViewFetchHelperDataSource>
{
    TIPImagePipeline *_imagePipeline;
    NSString *_imageURLStr;
    NSString *_descriptionStr;
    NSString *_iconAssetStr;
    long long _numberOfLines;
    UIColor *_textColor;
    CDUnknownBlockType _affiliateBadgeViewTappedBlock;
    CDUnknownBlockType _affiliateBadgeViewLongPressedBlock;
    UIImageView *_avatarView;
    TFNAttributedTextView *_descriptionView;
}

+ (id)_t1_descriptionTextModelForDescriptionStr:(id)arg1 numberOfLines:(unsigned long long)arg2 iconAssetStr:(id)arg3 textColor:(id)arg4;
+ (id)iconAssetOfIconType:(unsigned long long)arg1;
+ (struct CGSize)intrinsicContentSizeForWidth:(double)arg1 maxNumberOfLines:(long long)arg2 imageUrlStr:(id)arg3 descriptionStr:(id)arg4 iconAssetStr:(id)arg5;
+ (double)preferredHeightForLayoutMetrics:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TFNAttributedTextView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) CDUnknownBlockType affiliateBadgeViewLongPressedBlock; // @synthesize affiliateBadgeViewLongPressedBlock=_affiliateBadgeViewLongPressedBlock;
@property(copy, nonatomic) CDUnknownBlockType affiliateBadgeViewTappedBlock; // @synthesize affiliateBadgeViewTappedBlock=_affiliateBadgeViewTappedBlock;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(copy, nonatomic) NSString *iconAssetStr; // @synthesize iconAssetStr=_iconAssetStr;
@property(copy, nonatomic) NSString *descriptionStr; // @synthesize descriptionStr=_descriptionStr;
@property(copy, nonatomic) NSString *imageURLStr; // @synthesize imageURLStr=_imageURLStr;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
- (id)tip_imagePipelineForFetchHelper:(id)arg1;
- (id)tip_imageURLForFetchHelper:(id)arg1;
- (void)_t1_didLongPress;
- (void)_t1_didTap;
- (id)accessibilityHint;
- (id)accessibleValue;
- (id)calculatedLayoutMetrics;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (struct CGSize)intrinsicContentSize;
- (void)_t1_updateDescriptionString;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

