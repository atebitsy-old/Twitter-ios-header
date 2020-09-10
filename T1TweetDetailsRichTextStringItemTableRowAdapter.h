//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNActiveTextItemTableRowAdapter.h>

@class NSArray, NSAttributedString, TFNLayoutMetrics, TFNRichTextContainerView;

@interface T1TweetDetailsRichTextStringItemTableRowAdapter : TFNActiveTextItemTableRowAdapter
{
    CDUnknownBlockType _shouldShowSocialContextForFocalStatusBlock;
    NSAttributedString *_cachedAttributedString;
    NSAttributedString *_preparedRenderedString;
    NSArray *_preparedActiveRanges;
    TFNLayoutMetrics *_cachedLayoutMetrics;
    TFNRichTextContainerView *_prototypeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNRichTextContainerView *prototypeView; // @synthesize prototypeView=_prototypeView;
@property(retain, nonatomic) TFNLayoutMetrics *cachedLayoutMetrics; // @synthesize cachedLayoutMetrics=_cachedLayoutMetrics;
@property(retain, nonatomic) NSArray *preparedActiveRanges; // @synthesize preparedActiveRanges=_preparedActiveRanges;
@property(retain, nonatomic) NSAttributedString *preparedRenderedString; // @synthesize preparedRenderedString=_preparedRenderedString;
@property(copy, nonatomic) NSAttributedString *cachedAttributedString; // @synthesize cachedAttributedString=_cachedAttributedString;
@property(copy, nonatomic) CDUnknownBlockType shouldShowSocialContextForFocalStatusBlock; // @synthesize shouldShowSocialContextForFocalStatusBlock=_shouldShowSocialContextForFocalStatusBlock;
- (void)_t1_prepareRenderedStringAndActiveRangesForDisplay:(id)arg1 updatedLayoutMetrics:(id)arg2;
- (id)dataViewController:(id)arg1 previewConfigurationForItem:(id)arg2 withOptions:(id)arg3 location:(struct CGPoint)arg4 inCell:(id)arg5 atIndexPath:(id)arg6;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 calculatedLayoutMetricsForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;

@end

