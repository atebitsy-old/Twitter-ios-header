//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class T1FleetLineView, TFNTwitterUser, TFSTwitterScribeContext, UIViewController;

@protocol T1FleetLineViewDelegate
- (void)fleetLineView:(T1FleetLineView *)arg1 showProfileForUser:(TFNTwitterUser *)arg2;
- (TFSTwitterScribeContext *)fleetLineViewScribeContext:(T1FleetLineView *)arg1;
- (void)fleetLineView:(T1FleetLineView *)arg1 presentViewController:(UIViewController *)arg2 isFleetsViewController:(_Bool)arg3;
@end
