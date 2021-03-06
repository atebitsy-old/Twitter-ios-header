//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PeriscopeSDK/PTVPageScrollViewDataSource-Protocol.h>
#import <PeriscopeSDK/UIScrollViewDelegate-Protocol.h>

@class NSString, PTVPageScrollView;

@interface PTVPageScrollViewController : UIViewController <PTVPageScrollViewDataSource, UIScrollViewDelegate>
{
    UIViewController *_currentViewController;
    UIViewController *_precedingViewController;
    UIViewController *_followingViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *followingViewController; // @synthesize followingViewController=_followingViewController;
@property(retain, nonatomic) UIViewController *precedingViewController; // @synthesize precedingViewController=_precedingViewController;
@property(retain, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void)didUpdateCurrentViewController:(id)arg1 precedingViewController:(id)arg2 followingViewController:(id)arg3;
- (void)willUpdateCurrentViewController:(id)arg1 precedingViewController:(id)arg2 followingViewController:(id)arg3;
- (void)didAdvanceToPageInDirection:(long long)arg1;
- (void)willAdvanceToPageInDirection:(long long)arg1;
- (void)didCompletePageTransitionFromPage:(id)arg1 direction:(long long)arg2;
- (void)didCancelTransitionToPage:(id)arg1 direction:(long long)arg2;
- (void)willCancelTransitionToPage:(id)arg1 direction:(long long)arg2;
- (void)didUpdatePageTransitionToPage:(id)arg1;
- (void)willBeginTransitionToPage:(id)arg1 direction:(long long)arg2;
- (void)advanceToPageInDirection:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)cachedPageViewControllerInDirection:(long long)arg1;
- (id)cachedViewControllerForPage:(id)arg1;
- (id)constructViewForPageViewController:(id)arg1;
- (id)viewForPageViewController:(id)arg1;
- (id)viewControllerAdjacentToViewController:(id)arg1 inDirection:(long long)arg2;
@property(readonly, nonatomic) UIViewController *transitioningViewController;
- (void)reloadAdjacentViewControllers;
- (void)_ptv_updateCurrentViewController:(id)arg1 precedingViewController:(id)arg2 followingViewController:(id)arg3;
- (void)_ptv_updateCurrentViewController:(id)arg1;
@property(readonly, nonatomic) PTVPageScrollView *pageScrollView;
- (void)pageScrollView:(id)arg1 didAdvanceToPageInDirection:(long long)arg2;
- (void)pageScrollView:(id)arg1 willAdvanceToPageInDirection:(long long)arg2;
- (void)pageScrollViewDidCompletePageTransition:(id)arg1 fromPage:(id)arg2 direction:(long long)arg3;
- (void)pageScrollView:(id)arg1 didCancelTransitionToPage:(id)arg2 direction:(long long)arg3;
- (void)pageScrollViewWillCancelPageTransition:(id)arg1;
- (void)pageScrollViewDidUpdatePageTransition:(id)arg1;
- (void)pageScrollView:(id)arg1 willBeginTransitionToPage:(id)arg2 direction:(long long)arg3;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

