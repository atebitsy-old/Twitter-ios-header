//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSString, T1AppSplitSideBarExpandingActionButtonView, T1TabBarViewController, UIImageView, UIView;
@protocol T1AppSplitSideBarViewControllerDelegate;

@interface T1AppSplitSideBarViewController : TFNViewController <TFNLayoutMetricsEnvironment>
{
    UIImageView *_iconView;
    id <T1AppSplitSideBarViewControllerDelegate> _delegate;
    T1TabBarViewController *_tabBarViewController;
    T1AppSplitSideBarExpandingActionButtonView *_actionButtonView;
}

+ (struct CGSize)preferredContentSizeForDisplayMode:(long long)arg1 tabCount:(long long)arg2 layoutMetrics:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) T1AppSplitSideBarExpandingActionButtonView *actionButtonView; // @synthesize actionButtonView=_actionButtonView;
@property(readonly, nonatomic) T1TabBarViewController *tabBarViewController; // @synthesize tabBarViewController=_tabBarViewController;
@property(nonatomic) __weak id <T1AppSplitSideBarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_t1_iconTapped:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIView *dashSourceView;
@property(nonatomic) long long displayMode;
- (id)initWithTabBarViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
