//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1DockingVisibilityControllerDelegate-Protocol.h>
#import <T1Twitter/TFNFloatingViewDelegate-Protocol.h>
#import <T1Twitter/TFNHapticFeedback-Protocol.h>
#import <T1Twitter/TFNInterfaceOrientationChangeListenerDelegate-Protocol.h>
#import <T1Twitter/TFNTooltipDelegate-Protocol.h>

@class NSString, T1DockingVisibilityController, T1TwitterTooltip, TFNInterfaceOrientationChangeListener, TFNTwitterAccount, TFNViewController, UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator, UIView, UIWindow;
@protocol T1Dockable, T1DockingControllerDelegate, T1DockingControllerUserInteractionDelegate;

@interface T1DockingController : NSObject <TFNFloatingViewDelegate, T1DockingVisibilityControllerDelegate, TFNTooltipDelegate, TFNInterfaceOrientationChangeListenerDelegate, TFNHapticFeedback>
{
    _Bool _playerWasPlayingWhenHidden;
    _Bool _dockedViewTransitioning;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    id <T1DockingControllerDelegate> _delegate;
    id <T1DockingControllerUserInteractionDelegate> _interactionDelegate;
    TFNViewController<T1Dockable> *_dockableViewController;
    TFNTwitterAccount *_account;
    UIView *_dockedView;
    UIWindow *_dockingWindow;
    T1DockingVisibilityController *_visibilityController;
    TFNInterfaceOrientationChangeListener *_interfaceOrientationChangeListener;
    T1TwitterTooltip *_swipeToDismissTooltip;
}

+ (struct CGSize)calculateFloatingDockedViewSizeInSuperviewSize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isDockedViewTransitioning) _Bool dockedViewTransitioning; // @synthesize dockedViewTransitioning=_dockedViewTransitioning;
@property(nonatomic) _Bool playerWasPlayingWhenHidden; // @synthesize playerWasPlayingWhenHidden=_playerWasPlayingWhenHidden;
@property(retain, nonatomic) T1TwitterTooltip *swipeToDismissTooltip; // @synthesize swipeToDismissTooltip=_swipeToDismissTooltip;
@property(retain, nonatomic) TFNInterfaceOrientationChangeListener *interfaceOrientationChangeListener; // @synthesize interfaceOrientationChangeListener=_interfaceOrientationChangeListener;
@property(retain, nonatomic) T1DockingVisibilityController *visibilityController; // @synthesize visibilityController=_visibilityController;
@property(nonatomic) __weak UIWindow *dockingWindow; // @synthesize dockingWindow=_dockingWindow;
@property(nonatomic) __weak UIView *dockedView; // @synthesize dockedView=_dockedView;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TFNViewController<T1Dockable> *dockableViewController; // @synthesize dockableViewController=_dockableViewController;
@property(nonatomic) __weak id <T1DockingControllerUserInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(nonatomic) __weak id <T1DockingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // @synthesize impactFeedbackGenerator=_impactFeedbackGenerator;
- (void)_t1_sendScribeWithAction:(id)arg1;
- (void)performHapticFeedback:(unsigned long long)arg1;
- (void)prepareHapticFeedback:(unsigned long long)arg1;
- (void)interfaceOrientationChangeListener:(id)arg1 didObserveInterfaceOrientationChange:(long long)arg2;
- (void)dockingVisibilityController:(id)arg1 changeDockingViewVisiblity:(_Bool)arg2;
- (void)floatingView:(id)arg1 didReleaseOnArea:(struct CGRect)arg2;
- (void)floatingView:(id)arg1 didMoveOnArea:(struct CGRect)arg2;
- (void)floatingView:(id)arg1 didPickupOnArea:(struct CGRect)arg2;
- (void)didSwipeFloatingView:(id)arg1;
- (void)didTapFloatingView:(id)arg1;
- (void)tooltipDidTap:(id)arg1;
- (id)_t1_scribeActionByUndockUserAction:(long long)arg1;
- (id)_t1_scribeActionWithDockUserAction:(long long)arg1;
- (void)_t1_dismissTooltipIfVisible;
- (void)_t1_showSwipeToDismissTooltipIfNeeded;
- (void)_t1_createDockedViewWithAnimationTransition:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_cleanDockedView;
- (void)_t1_removeDockedView;
- (void)_t1_reset;
- (void)_t1_createDockedView;
- (long long)dockableStyle;
- (void)_t1_showDockedView:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGRect)_t1_calculateTabBarPinnedDockedViewFrame;
- (id)_t1_tabBarIntegration;
- (struct CGRect)_t1_calculateFloatingDockedViewFrame;
@property(readonly, nonatomic) double dockedViewBottomTabBarHeight;
@property(readonly, nonatomic) struct CGPoint dockedViewReleasedDestinationPosition;
@property(readonly, nonatomic) struct CGRect dockedViewFrame;
- (void)_t1_updateDockedViewFrame;
- (void)layoutDockedView;
- (void)undockOrDismissCurrentDockedViewIfNeededAnimated:(_Bool)arg1;
- (void)undockOrDismissCurrentDockedViewIfNeeded;
- (void)undockViewWithUserAction:(long long)arg1;
- (void)dismissCurrentDockedViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissCurrentDockedView;
- (void)updateDockedViewVisibilityNoLongerConsideringViewController:(id)arg1;
- (void)updateDockedViewVisibilityConsideringViewController:(id)arg1;
- (void)updateDockedViewVisibilityWithVisibleViewController:(id)arg1 animated:(_Bool)arg2;
- (void)dockViewController:(id)arg1 onWindow:(id)arg2 delegate:(id)arg3 userAction:(long long)arg4 animationTransition:(long long)arg5;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UINotificationFeedbackGenerator *notificationFeedbackGenerator;
@property(readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property(readonly) Class superclass;

@end

