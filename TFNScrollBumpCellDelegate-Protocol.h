//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/NSObject-Protocol.h>

@class TFNScrollBumpCell;

@protocol TFNScrollBumpCellDelegate <NSObject>

@optional
- (void)scrollBumpCell:(TFNScrollBumpCell *)arg1 didTapPageAtIndex:(unsigned long long)arg2;
- (void)scrollBumpCell:(TFNScrollBumpCell *)arg1 didScrollWithAnimationToPageAtIndex:(unsigned long long)arg2;
- (void)scrollBumpCell:(TFNScrollBumpCell *)arg1 didScrollToPageAtIndex:(unsigned long long)arg2 direction:(long long)arg3;
- (void)scrollBumpCell:(TFNScrollBumpCell *)arg1 didStopToPageAtIndex:(unsigned long long)arg2;
- (void)scrollBumpCell:(TFNScrollBumpCell *)arg1 didRemovePageViewAtIndex:(unsigned long long)arg2;
@end

