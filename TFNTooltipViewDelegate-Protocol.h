//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/NSObject-Protocol.h>

@class TFNTooltipView;

@protocol TFNTooltipViewDelegate <NSObject>
- (void)tooltipViewDidTap:(TFNTooltipView *)arg1;

@optional
- (void)tooltipViewDidDismiss:(TFNTooltipView *)arg1;
- (void)tooltipViewWillDismiss:(TFNTooltipView *)arg1;
- (void)tooltipViewDidShow:(TFNTooltipView *)arg1;
- (void)tooltipViewWillShow:(TFNTooltipView *)arg1;
@end

