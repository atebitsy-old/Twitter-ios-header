//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class NSString, PTVBroadcastOverflowMenuViewController, PTVOverflowMenuItem;

@protocol PTVBroadcastOverflowMenuViewControllerDelegate <NSObject>
- (_Bool)overflowMenu:(PTVBroadcastOverflowMenuViewController *)arg1 shouldEnableMenuItem:(PTVOverflowMenuItem *)arg2;
- (void)overflowMenu:(PTVBroadcastOverflowMenuViewController *)arg1 didSelectMenuItem:(PTVOverflowMenuItem *)arg2;

@optional
- (void)overflowMenu:(PTVBroadcastOverflowMenuViewController *)arg1 didTapTitleHashtag:(NSString *)arg2;
- (void)overflowMenuDidTapEmptySpace:(PTVBroadcastOverflowMenuViewController *)arg1;
@end

