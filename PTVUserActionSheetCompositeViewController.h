//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PeriscopeSDK/PTVPagedActionSheetControllerDelegate-Protocol.h>
#import <PeriscopeSDK/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSObject, NSString, PTVAnimatedTransitionWithShadeCoordinator, PTVMergeParticipantUser, PTVPagedActionSheetController;
@protocol PTVLoggedInUserProtocol, PTVUserModalFollowshipChangeDelegate;

@interface PTVUserActionSheetCompositeViewController : UIViewController <PTVPagedActionSheetControllerDelegate, UIViewControllerTransitioningDelegate>
{
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    PTVMergeParticipantUser *_user;
    id <PTVUserModalFollowshipChangeDelegate> _followshipChangeDelegate;
    NSString *_broadcastID;
    NSString *_hostViewName;
    _Bool _didReport;
    PTVAnimatedTransitionWithShadeCoordinator *_animatedTransitionController;
    PTVPagedActionSheetController *_userActionSheetController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PTVPagedActionSheetController *userActionSheetController; // @synthesize userActionSheetController=_userActionSheetController;
@property(retain, nonatomic) PTVAnimatedTransitionWithShadeCoordinator *animatedTransitionController; // @synthesize animatedTransitionController=_animatedTransitionController;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)pagedActionSheetControllerDismissPressed:(id)arg1;
- (void)cancelSelection;
- (void)muteOrUnmute;
- (void)unfollow;
- (void)blockOrUnblock;
- (void)copyProfileURL;
- (void)openTwitterProfile;
- (void)showReportActions;
- (void)showBlockActions;
- (void)reportAsSpam;
- (void)reportAbusiveProfile;
- (void)reportNotInterested;
- (id)initWithLoggedInUser:(id)arg1 user:(id)arg2 broadcastID:(id)arg3 fromFollow:(_Bool)arg4 readOnly:(_Bool)arg5 hostViewName:(id)arg6 followshipChangeDelegate:(id)arg7;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

