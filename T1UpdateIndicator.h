//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <T1Twitter/TFNPillControlDelegate-Protocol.h>
#import <T1Twitter/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSString, NSTimer, T1UpdateIndicatorMask, TFNDataViewController, TFNPillControl, TIPImagePipeline;
@protocol T1UpdateIndicatorDelegate;

@interface T1UpdateIndicator : UIViewController <UIScrollViewDelegate, TFNPillControlDelegate>
{
    _Bool _isHiding;
    _Bool _pillShowing;
    T1UpdateIndicatorMask *_pillMask;
    double _pillPresentationLatestTime;
    long long _interfaceOrientation;
    _Bool _ignoreScrolling;
    double _pillOriginYFromPresentationOffset;
    TFNPillControl *_pillControl;
    TIPImagePipeline *_imagePipeline;
    id <T1UpdateIndicatorDelegate> _delegate;
    TFNDataViewController<T1UpdateIndicatorDelegate> *_controller;
    NSTimer *_displayTimer;
    NSMutableArray *_contentNotifications;
}

+ (id)_pillControlForContentNotification:(id)arg1 imagePipeline:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *contentNotifications; // @synthesize contentNotifications=_contentNotifications;
@property(retain, nonatomic) NSTimer *displayTimer; // @synthesize displayTimer=_displayTimer;
@property(nonatomic) __weak TFNDataViewController<T1UpdateIndicatorDelegate> *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <T1UpdateIndicatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(retain, nonatomic) TFNPillControl *pillControl; // @synthesize pillControl=_pillControl;
- (void)_configureTimerForDisplayDuration:(double)arg1;
- (void)_invalidateDisplayDurationTimer;
- (void)_displayDurationTimerDidFire:(id)arg1;
- (_Bool)canShowIfTableViewIsScrolledToTopWithContentNotification:(id)arg1;
- (_Bool)_t1_canController:(id)arg1 navigateToEntryID:(id)arg2;
- (_Bool)_t1_shouldControllerScrollToTop:(id)arg1;
- (void)_updatePillPosition;
- (void)_updateOrientation;
- (double)_presentationOffset;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_recreatePillControlForContentNotification:(id)arg1;
- (void)_hidePillControlFromTap:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_hidePillForTap:(_Bool)arg1 needsContentPositionUpdate:(_Bool)arg2;
- (void)_hidePillForTapNavigateToEntryIDIfNeeded:(id)arg1;
- (void)_hidePillForTapScrollTopIfNeeded;
- (void)_hideAnimated:(_Bool)arg1;
- (void)_moveToControllerIfNecessary;
- (_Bool)_hasSufficientTimePassedSincePreviousDisplay:(double)arg1;
- (id)_contentNotificationToDisplay;
- (_Bool)_canShowPillForContentNotification:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)pillControl:(id)arg1 animatedOffscreen:(_Bool)arg2 pillTapped:(_Bool)arg3 scrolled:(_Bool)arg4;
- (void)pillControlTapped:(id)arg1;
- (void)clearPendingContentNotifications;
- (id)pendingContentNotifications;
- (void)addContentNotifications:(id)arg1;
- (void)hide;
- (void)showIfNeeded;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

