//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVTotalViewersTableViewCellLayoutSpec : NSObject
{
}

+ (double)TotalViewersCellHeightForLiveViewers:(long long)arg1 ReplayViewers:(long long)arg2 TableViewWidth:(double)arg3;
+ (double)TotalViewersCellHeightForTotalViewers:(long long)arg1 TableViewWidth:(double)arg2;
+ (id)ParagraphStyle;
+ (id)AttributedStringWithViewerCount:(long long)arg1 TextColor:(id)arg2 Subtitle:(id)arg3 SubtitleColor:(id)arg4;
+ (id)ReplayViewersAttributedForViewerCount:(long long)arg1 DisplayType:(long long)arg2 TextColor:(id)arg3 SelectedTextColor:(id)arg4 SubtitleTextColor:(id)arg5 SelectedSubtitleTextColor:(id)arg6;
+ (id)LiveViewersAttributedForViewerCount:(long long)arg1 DisplayType:(long long)arg2 TextColor:(id)arg3 SelectedTextColor:(id)arg4 SubtitleTextColor:(id)arg5 SelectedSubtitleTextColor:(id)arg6;
+ (id)TotalViewersAttributedForViewerCount:(long long)arg1 TextColor:(id)arg2 SubtitleTextColor:(id)arg3;
+ (struct CGRect)ReplayViewersLabelFrameWithAttributedLabel:(id)arg1 SuperViewSize:(struct CGSize)arg2;
+ (struct CGRect)LiveViewersLabelFrameWithAttributedLabel:(id)arg1 SuperviewSize:(struct CGSize)arg2;
+ (struct CGRect)TotalViewersLabelFrameWithAttributedLabel:(id)arg1 SuperviewSize:(struct CGSize)arg2;
+ (double)TotalCountVerticalPadding;
+ (double)HorizontalPaddingBetweenTotalCountLabels;
+ (id)TotalCountSubtitleFont;
+ (id)TotalCountNumberFont;

@end

