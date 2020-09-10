//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UnifiedCardSwipeableCollectionViewCell.h>

#import <T1Twitter/T1ImageViewFetchHelperDelegate-Protocol.h>
#import <T1Twitter/TFNPreviewable-Protocol.h>

@class NSString, TFNTappableHighlightView, UIImageView;

@interface T1UnifiedCardSwipeableImageCollectionViewCell : T1UnifiedCardSwipeableCollectionViewCell <TFNPreviewable, T1ImageViewFetchHelperDelegate>
{
    UIImageView *_imageView;
    TFNTappableHighlightView *_imageHighlightView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTappableHighlightView *imageHighlightView; // @synthesize imageHighlightView=_imageHighlightView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)t1_fetchHelper:(id)arg1 didFailToLoadImageWithError:(id)arg2;
- (void)configureSwipeableCollectionViewCellWithData:(id)arg1 imagePipeline:(id)arg2 cellPosition:(long long)arg3 account:(id)arg4 scribeContext:(id)arg5;
- (void)prepareForReuse;
- (void)_t1_didLongPressImage:(id)arg1;
- (id)previewConfigurationForLocation:(struct CGPoint)arg1;
- (void)_t1_didTapImage:(id)arg1;
- (void)_t1_setupFailurePlaceholder;
- (void)_t1_setupActions;
- (void)_t1_setupImageView;
- (void)_t1_setupHighlightView:(id)arg1 withAccessibilityIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

