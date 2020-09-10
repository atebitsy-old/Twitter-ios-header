//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1LiveEventMediaViewController, TFNTwitterStatus, TFSTwitterBroadcast, TFSTwitterScribeContext, UIImage;
@protocol TFNTwitterCardDataSource;

@protocol T1LiveEventMediaViewControllerDelegate <NSObject>
- (void)liveEventMediaContainerViewControllerDidObserveGeoblockError:(T1LiveEventMediaViewController *)arg1;
- (void)liveEventMediaContainerViewController:(T1LiveEventMediaViewController *)arg1 didUpdateMuteState:(_Bool)arg2;
- (void)liveEventMediaContainerViewController:(T1LiveEventMediaViewController *)arg1 didTapToPlay:(_Bool)arg2;
- (void)liveEventMediaContainerViewControllerDidCompletePlayback:(T1LiveEventMediaViewController *)arg1;
- (void)liveEventMediaContainerViewControllerDidStartPlayback:(T1LiveEventMediaViewController *)arg1;
- (void)liveEventMediaContainerViewController:(T1LiveEventMediaViewController *)arg1 didTapExpandMediaForBroadcast:(TFSTwitterBroadcast *)arg2 cardDataSource:(id <TFNTwitterCardDataSource>)arg3;
- (void)liveEventMediaContainerViewController:(T1LiveEventMediaViewController *)arg1 didTapExpandMediaForStatus:(TFNTwitterStatus *)arg2 previewImage:(UIImage *)arg3;
- (void)liveEventMediaContainerViewController:(T1LiveEventMediaViewController *)arg1 didTapAttributionForStatus:(TFNTwitterStatus *)arg2;
- (TFSTwitterScribeContext *)scribeContextForLiveEventMediaViewController:(T1LiveEventMediaViewController *)arg1;
@end

