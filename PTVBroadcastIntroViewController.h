//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PeriscopeSDK/PTVBroadcastIntroViewDelegate-Protocol.h>

@class NSString, PTVBroadcastController;
@protocol PTVBroadcastIntroViewControllerDelegate;

@interface PTVBroadcastIntroViewController : UIViewController <PTVBroadcastIntroViewDelegate>
{
    id <PTVBroadcastIntroViewControllerDelegate> _delegate;
    PTVBroadcastController *_broadcastController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PTVBroadcastController *broadcastController; // @synthesize broadcastController=_broadcastController;
@property(nonatomic) __weak id <PTVBroadcastIntroViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDelegate:(id)arg1 broadcastController:(id)arg2;
- (void)broadcastIntroViewDidTapBroadcaster:(id)arg1;
- (void)broadcastIntroViewDidReceiveTap:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

