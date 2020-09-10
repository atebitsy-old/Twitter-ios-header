//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <T1Twitter/T1FollowLiveFollowButtonsProtocol-Protocol.h>

@class NSString, T1BroadcastingFeatures, TFNTwitterAccount, TFNTwitterUser;

@interface T1PeriscopeUserModalFollowViewController : UIViewController <T1FollowLiveFollowButtonsProtocol>
{
    TFNTwitterAccount *_account;
    T1BroadcastingFeatures *_broadcastingFeatures;
    NSString *_username;
    TFNTwitterUser *_user;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) T1BroadcastingFeatures *broadcastingFeatures; // @synthesize broadcastingFeatures=_broadcastingFeatures;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (id)scribeComponent;
- (id)scribePage;
- (_Bool)followPromptViewCanShowLiveFollowButton:(id)arg1;
- (void)followLiveFollowButtonsView:(id)arg1 didTapLiveFollowForUser:(id)arg2;
- (void)followLiveFollowButtonsView:(id)arg1 didTapFollowForUser:(id)arg2;
- (void)private_failedToLoadUser;
- (void)private_reloadData;
- (void)private_userUpdated:(id)arg1;
- (unsigned long long)private_preferredButtonSize;
- (void)private_updateUserRelationshipIfNeeded;
- (void)private_loadUser;
- (void)loadView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 username:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

