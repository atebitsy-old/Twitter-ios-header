//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1JumpBackToHomeTimelineBehavior-Protocol.h>
#import <T1Twitter/T1PickAndFilterPhotoFlowControllerDelegate-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>
#import <T1Twitter/UIDropInteractionDelegate-Protocol.h>

@class NSMutableArray, NSString, T1AddAvatarView, T1OnboardingFooterViewModel, T1OnboardingHeaderViewModel, T1PhotoSelection, T1PickAndFilterPhotoFlowController, T1ProfileAvatarImageView, TFNTwitterAccount, UIView;
@protocol T1AddAvatarViewControllerDelegate;

@interface T1AddAvatarViewController : TFNViewController <UIDropInteractionDelegate, TFNLayoutMetricsEnvironment, T1PickAndFilterPhotoFlowControllerDelegate, T1JumpBackToHomeTimelineBehavior>
{
    _Bool _userAddedAvatar;
    _Bool _navigationPushTransition;
    _Bool _requireAvatar;
    NSMutableArray *_customConstraints;
    NSString *_title;
    NSString *_subtitle;
    T1OnboardingFooterViewModel *_footerViewModel;
    T1OnboardingHeaderViewModel *_headerViewModel;
    id <T1AddAvatarViewControllerDelegate> _delegate;
    TFNTwitterAccount *_account;
    UIView *_headerView;
    T1AddAvatarView *_addAvatarView;
    T1ProfileAvatarImageView *_avatarImageView;
    T1PhotoSelection *_selectedAvatarPhoto;
    T1PickAndFilterPhotoFlowController *_photoPicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) T1PickAndFilterPhotoFlowController *photoPicker; // @synthesize photoPicker=_photoPicker;
@property(retain, nonatomic) T1PhotoSelection *selectedAvatarPhoto; // @synthesize selectedAvatarPhoto=_selectedAvatarPhoto;
@property(retain, nonatomic) T1ProfileAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) T1AddAvatarView *addAvatarView; // @synthesize addAvatarView=_addAvatarView;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)private_userDataSourceDidUpdate;
- (void)private_updateAvatarImageView;
- (void)private_updateNextButton;
- (id)_scribeElement;
- (id)scribeSection;
- (id)scribePage;
- (void)_t1_dropImage:(id)arg1;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)pickAndFilterPhotoFlowController:(id)arg1 removePhotoType:(long long)arg2;
- (void)pickAndFilterPhotoFlowController:(id)arg1 userDidCancelPhotoType:(long long)arg2;
- (void)pickAndFilterPhotoFlowController:(id)arg1 userDidSelectPhoto:(id)arg2 type:(long long)arg3;
- (_Bool)tfn_logoTitleViewShown;
- (long long)tfn_preferredToolbarVisibility;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)_updateConstraints;
- (void)layoutGuidesDidChange:(long long)arg1;
- (void)viewDidLoad;
- (void)_addAvatarPhoto:(id)arg1;
- (void)_nextTapped;
- (void)_skipTapped;
- (void)_avatarTapped:(id)arg1;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 title:(id)arg2 subtitle:(id)arg3 nextLabel:(id)arg4 skipLabel:(id)arg5 delegate:(id)arg6 requireAvatar:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

