//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/TFNStatusBarAnimatable-Protocol.h>

@class TFNTwitterAccount;

__attribute__((visibility("hidden")))
@interface _TtC9T1Twitter25DashContentViewController : TFNItemsDataViewController <TFNStatusBarAnimatable>
{
    // Error parsing type: , name: sectionSpacerHeight
    // Error parsing type: , name: account
    // Error parsing type: , name: spheresFeatureSwitches
    // Error parsing type: , name: statusBarShouldHide
    // Error parsing type: , name: delegate
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: fadingHeaderDividerView
    // Error parsing type: , name: fadingFooterDividerView
    // Error parsing type: , name: lastContentOffset
    // Error parsing type: , name: cachedSections
    // Error parsing type: , name: $__lazy_storage_$_meItem
    // Error parsing type: , name: $__lazy_storage_$_topicsItem
    // Error parsing type: , name: $__lazy_storage_$_spheresItem
    // Error parsing type: , name: $__lazy_storage_$_bookmarksItem
    // Error parsing type: , name: $__lazy_storage_$_momentsItem
    // Error parsing type: , name: cachedFollowerRequestsItem
    // Error parsing type: , name: cachedTeamsInvitationItem
    // Error parsing type: , name: $__lazy_storage_$_revenueSpacer
    // Error parsing type: , name: $__lazy_storage_$_adsPromoteModeItem
    // Error parsing type: , name: $__lazy_storage_$_adsCompanionItem
    // Error parsing type: , name: $__lazy_storage_$_utilitiesSpacer
    // Error parsing type: , name: $__lazy_storage_$_settingsItem
    // Error parsing type: , name: cachedFeatureSwitchAppReviewItem
    // Error parsing type: , name: $__lazy_storage_$_helpItem
    // Error parsing type: , name: visiblePanelIDs
}

- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)teamsInvitationDidUpdateWithNotification:(id)arg1;
- (void)dataSourceDidInvalidateWithNotification:(id)arg1;
- (void)accountUserDidUpdateWithNotification:(id)arg1;
- (void)update:(_Bool)arg1;
- (_Bool)shouldSelectItem:(id)arg1 atIndexPath:(id)arg2;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) _Bool statusBarShouldHide; // @synthesize statusBarShouldHide;
@property(nonatomic, retain) TFNTwitterAccount *account; // @synthesize account;

@end
