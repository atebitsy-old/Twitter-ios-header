//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1ScrollingSegmentedViewControllerDataSource-Protocol.h>
#import <T1Twitter/T1ScrollingSegmentedViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNTooltipDelegate-Protocol.h>

@class NSArray, NSString, T1ScrollingHorizontalLabelTitleView, T1ScrollingSegmentedViewController, TFNBarButtonItem, TFNTwitterAccount, TFNTwitterHomeTimeline;

@interface T1HomeTimelineContainerViewController : TFNViewController <T1ScrollingSegmentedViewControllerDataSource, T1ScrollingSegmentedViewControllerDelegate, TFNTooltipDelegate>
{
    _Bool _layoutSubviewsDone;
    _Bool _didLayoutBarItems;
    NSArray *_timelineViewControllers;
    TFNTwitterAccount *_account;
    T1ScrollingSegmentedViewController *_contentViewController;
    T1ScrollingHorizontalLabelTitleView *_labelBarTitleView;
    TFNBarButtonItem *_timelineContentPreferencesButton;
    unsigned long long _spheresFetchRetryCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didLayoutBarItems; // @synthesize didLayoutBarItems=_didLayoutBarItems;
@property(nonatomic) unsigned long long spheresFetchRetryCount; // @synthesize spheresFetchRetryCount=_spheresFetchRetryCount;
@property(nonatomic, getter=isLayoutSubviewsDone) _Bool layoutSubviewsDone; // @synthesize layoutSubviewsDone=_layoutSubviewsDone;
@property(retain, nonatomic) TFNBarButtonItem *timelineContentPreferencesButton; // @synthesize timelineContentPreferencesButton=_timelineContentPreferencesButton;
@property(retain, nonatomic) T1ScrollingHorizontalLabelTitleView *labelBarTitleView; // @synthesize labelBarTitleView=_labelBarTitleView;
@property(retain, nonatomic) T1ScrollingSegmentedViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSArray *timelineViewControllers; // @synthesize timelineViewControllers=_timelineViewControllers;
- (_Bool)activeTimelineIsScrolledToTop;
- (void)_t1_refreshSphereViewControllerIfNeeded:(id)arg1;
- (void)refreshTimelineAtIndex:(long long)arg1;
- (_Bool)attemptToNavigateToTimelineWithListID:(long long)arg1;
- (void)userDidChangeRankingForListID:(long long)arg1;
- (void)reconstructTimelineViewControllerIfNeededForPinnedListDataModel:(id)arg1;
- (void)updateTimelineViewControllersForPinnedListModels:(id)arg1;
- (_Bool)_homeTimelineIsEmptyAfterLoading;
- (_Bool)_homeTimelineisEmpty;
@property(readonly, nonatomic) TFNTwitterHomeTimeline *homeTimeline;
- (void)_t1_showToastForTimelineSwitchWithDuration:(double)arg1;
- (void)_t1_processAutoSwitchedToTopWithLoadSource:(long long)arg1;
- (void)_t1_checkForAutomaticSwitchToTop;
- (id)_t1_scribeSectionForTimelineAtIndex:(long long)arg1;
@property(nonatomic) long long selectedIndex;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_t1_loadContentViewControllerIfNeeded:(id)arg1 indexChanged:(_Bool)arg2;
- (void)segmentedViewController:(id)arg1 willSelectContentViewController:(id)arg2 atIndex:(long long)arg3 indexChanged:(_Bool)arg4;
- (double)preferredMaximumBarHeightInSegmentedViewController:(id)arg1;
- (void)segmentedViewController:(id)arg1 didSelectContentViewController:(id)arg2 atIndex:(long long)arg3 indexChanged:(_Bool)arg4 userGestureType:(long long)arg5;
- (id)segmentedViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (id)segmentedViewController:(id)arg1 accessibilityLabelAtIndex:(long long)arg2;
- (id)segmentedViewController:(id)arg1 titleAtIndex:(long long)arg2;
- (long long)numberOfEntriesForSegmentedViewController:(id)arg1;
- (_Bool)t1_showsActionButton;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)_t1_action_didTapHomeTimelineContextItemButton:(id)arg1;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)tfn_navigationControllerDidLayoutBarItems;
- (void)t1_appSplitModeDidChangeFromPrevious:(long long)arg1 toCurrent:(long long)arg2;
- (_Bool)t1_showsPeopleAction;
- (_Bool)t1_showsToggleSideBarAction;
- (_Bool)t1_showsDashAction;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (void)_t1_fakeRecurringTaskForegroundRefresh:(id)arg1;
- (void)_t1_updateRightBarItemsIfNeeded;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)_t1_updateTitleAndLabelBarIfNeeded;
- (id)initWithAccount:(id)arg1 timeline:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

