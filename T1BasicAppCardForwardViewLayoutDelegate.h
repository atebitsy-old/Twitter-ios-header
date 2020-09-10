//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardViewLayoutDelegate.h>

#import <T1Twitter/T1BasicAppCardTargetImageSizeLayoutDelegate-Protocol.h>

@class NSString;

@interface T1BasicAppCardForwardViewLayoutDelegate : T1CardViewLayoutDelegate <T1BasicAppCardTargetImageSizeLayoutDelegate>
{
}

+ (struct CGSize)_avatarImageSize;
+ (double)_highlightViewPadding;
+ (double)_maximumWidthForStandardLayout;
+ (id)_subtitleFont;
+ (id)_titleFont;
+ (id)viewModelWithCardContext:(id)arg1;
+ (id)sharedLayoutDelegate;
- (id)titleColorForWidth:(double)arg1;
- (id)titleFontForWidth:(double)arg1;
- (struct CGRect)_layoutDetailsForLayoutState:(id)arg1 viewModel:(id)arg2 layoutMetrics:(id)arg3 atPoint:(struct CGPoint)arg4;
- (double)_layoutImageNextToInfoAndAction:(id)arg1 forCardViewModel:(id)arg2 layoutMetrics:(id)arg3 atPoint:(struct CGPoint)arg4;
- (double)_layoutAttribution:(id)arg1 forCardViewModel:(id)arg2 layoutMetrics:(id)arg3 atPoint:(struct CGPoint)arg4;
- (struct CGSize)_callToActionSizeForCardViewModel:(id)arg1;
- (struct CGSize)_detailTextSizeForCardViewModel:(id)arg1;
- (struct CGSize)_titleSizeForCardViewModel:(id)arg1;
- (void)layoutSubviewsForCardView:(id)arg1 withState:(id)arg2;
- (struct CGSize)targetImageSizeForViewModel:(id)arg1 layoutMetrics:(id)arg2;
- (id)layoutForViewModel:(id)arg1 layoutMetrics:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

