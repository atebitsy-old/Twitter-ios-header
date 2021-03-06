//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/PTVTwitterCameraCommonDelegate-Protocol.h>
#import <T1Twitter/T1CameraAccountGeoDataProviderUpdaterDelegate-Protocol.h>
#import <T1Twitter/T1CameraEventHashtagsFetcherDelegate-Protocol.h>
#import <T1Twitter/T1CameraModeSelectorViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1CameraPlacesFetcherDelegate-Protocol.h>
#import <T1Twitter/T1CameraServiceAuthorizationViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNSwappingContainerViewControllerHelperDelegate-Protocol.h>
#import <T1Twitter/TFNTooltipDelegate-Protocol.h>
#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, PTVAPIResponseErrorInfo, PTVTwitterCameraViewController, T1BroadcastingFeatures, T1CameraAccountGeoDataProviderUpdater, T1CameraCaptureContext, T1CameraCapturePresentation, T1CameraContentContainerView, T1CameraEventHashtagsFetcher, T1CameraFetchResult, T1CameraModeSelectorViewController, T1CameraPlacesFetcher, T1CameraServiceAuthorizationViewController, T1PeriscopeAccount, TFNSwappingContainerViewControllerHelper, TFNTwitterAccount, TFSTimer, TFSTwitterScribeContext, UIButton, UIImageView, UILayoutGuide, UIPinchGestureRecognizer, UITapGestureRecognizer, UIView, UIViewController;
@protocol T1CameraCaptureViewControllerDelegate;

@interface T1CameraCaptureViewController : TFNViewController <PTVTwitterCameraCommonDelegate, T1CameraAccountGeoDataProviderUpdaterDelegate, T1CameraEventHashtagsFetcherDelegate, T1CameraModeSelectorViewControllerDelegate, T1CameraPlacesFetcherDelegate, T1CameraServiceAuthorizationViewControllerDelegate, TFNSwappingContainerViewControllerHelperDelegate, TFNTooltipDelegate, UIGestureRecognizerDelegate>
{
    _Bool _cameraControlsHidden;
    _Bool _controlsHidden;
    _Bool _disablesDismissal;
    _Bool _cameraHidden;
    _Bool _disablesCameraGesturs;
    _Bool _viewFullyLoaded;
    _Bool _presented;
    _Bool _fullyPresented;
    _Bool _transitioningMode;
    _Bool _dismissed;
    _Bool _lastCameraViewImageEnabled;
    NSString *_initialCompositionText;
    id <T1CameraCaptureViewControllerDelegate> _delegate;
    T1CameraCaptureContext *_context;
    TFNTwitterAccount *_account;
    unsigned long long _mode;
    TFSTwitterScribeContext *_scribeContext;
    T1CameraCapturePresentation *_currentCapturePresentation;
    unsigned long long _authorizationState;
    NSArray *_availableModeNumbers;
    NSArray *_availableModeLabels;
    UILayoutGuide *_viewLayoutMarginsGuide;
    PTVTwitterCameraViewController *_cameraViewController;
    T1PeriscopeAccount *_periscopeAccount;
    T1BroadcastingFeatures *_broadcastingFeatures;
    PTVAPIResponseErrorInfo *_periscopeAccountAuthenticationErrorInfo;
    unsigned long long _cameraSessionMode;
    unsigned long long _cameraSessionState;
    TFSTimer *_stopCameraSessionTimer;
    long long _cameraSessionCaptureOrientation;
    UIImageView *_lastCameraViewImageView;
    id _updatingLastCameraViewImageTag;
    T1CameraContentContainerView *_cameraContainerView;
    UIView *_gradientView;
    TFNSwappingContainerViewControllerHelper *_containerViewControllerHelper;
    UIView *_contentView;
    UILayoutGuide *_contentViewLayoutMarginsGuide;
    UITapGestureRecognizer *_contentViewDoubleTapGestureRecognizer;
    UITapGestureRecognizer *_contentViewTapGestureRecognizer;
    UITapGestureRecognizer *_contentViewDualTouchTapGestureRecognizer;
    UIPinchGestureRecognizer *_contentViewPinchGestureRecognizer;
    double _initialCameraZoomValueForContentViewPinchGesture;
    UIView *_controlsView;
    UILayoutGuide *_controlButtonsLayoutGuide;
    UIButton *_backButton;
    UILayoutGuide *_cameraButtonsLayoutGuide;
    NSLayoutConstraint *_cameraButtonsLayoutGuideTrailingAnchorConstraint;
    UIButton *_cameraGuestBroadcastingButton;
    UIButton *_cameraAudioScopeButton;
    NSLayoutConstraint *_cameraAudioScopeButtonTrailingAnchorConstraint;
    NSLayoutConstraint *_cameraAudioScopeButtonWithGuestBroadcastingButtonTrailingAnchorConstraint;
    UIButton *_cameraFlipButton;
    NSLayoutConstraint *_cameraFlipButtonTrailingAnchorConstraint;
    NSLayoutConstraint *_cameraFlipButtonWithAudioScopeButtonTrailingAnchorConstraint;
    UIButton *_cameraFlashButton;
    T1CameraModeSelectorViewController *_modeSelectorViewController;
    T1CameraServiceAuthorizationViewController *_serviceAuthorizationViewController;
    T1CameraAccountGeoDataProviderUpdater *_accountGeoDataProviderUpdater;
    T1CameraPlacesFetcher *_placesFetcher;
    T1CameraFetchResult *_currentPlacesFetchResult;
    T1CameraEventHashtagsFetcher *_eventHashtagsFetcher;
    T1CameraFetchResult *_currentEventHashtagsFetchResult;
}

+ (void)loadCanPresentWithTraitCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)canPresentWithTraitCollection:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) T1CameraFetchResult *currentEventHashtagsFetchResult; // @synthesize currentEventHashtagsFetchResult=_currentEventHashtagsFetchResult;
@property(retain, nonatomic) T1CameraEventHashtagsFetcher *eventHashtagsFetcher; // @synthesize eventHashtagsFetcher=_eventHashtagsFetcher;
@property(retain, nonatomic) T1CameraFetchResult *currentPlacesFetchResult; // @synthesize currentPlacesFetchResult=_currentPlacesFetchResult;
@property(retain, nonatomic) T1CameraPlacesFetcher *placesFetcher; // @synthesize placesFetcher=_placesFetcher;
@property(retain, nonatomic) T1CameraAccountGeoDataProviderUpdater *accountGeoDataProviderUpdater; // @synthesize accountGeoDataProviderUpdater=_accountGeoDataProviderUpdater;
@property(retain, nonatomic) T1CameraServiceAuthorizationViewController *serviceAuthorizationViewController; // @synthesize serviceAuthorizationViewController=_serviceAuthorizationViewController;
@property(retain, nonatomic) T1CameraModeSelectorViewController *modeSelectorViewController; // @synthesize modeSelectorViewController=_modeSelectorViewController;
@property(retain, nonatomic) UIButton *cameraFlashButton; // @synthesize cameraFlashButton=_cameraFlashButton;
@property(retain, nonatomic) NSLayoutConstraint *cameraFlipButtonWithAudioScopeButtonTrailingAnchorConstraint; // @synthesize cameraFlipButtonWithAudioScopeButtonTrailingAnchorConstraint=_cameraFlipButtonWithAudioScopeButtonTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cameraFlipButtonTrailingAnchorConstraint; // @synthesize cameraFlipButtonTrailingAnchorConstraint=_cameraFlipButtonTrailingAnchorConstraint;
@property(retain, nonatomic) UIButton *cameraFlipButton; // @synthesize cameraFlipButton=_cameraFlipButton;
@property(retain, nonatomic) NSLayoutConstraint *cameraAudioScopeButtonWithGuestBroadcastingButtonTrailingAnchorConstraint; // @synthesize cameraAudioScopeButtonWithGuestBroadcastingButtonTrailingAnchorConstraint=_cameraAudioScopeButtonWithGuestBroadcastingButtonTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cameraAudioScopeButtonTrailingAnchorConstraint; // @synthesize cameraAudioScopeButtonTrailingAnchorConstraint=_cameraAudioScopeButtonTrailingAnchorConstraint;
@property(retain, nonatomic) UIButton *cameraAudioScopeButton; // @synthesize cameraAudioScopeButton=_cameraAudioScopeButton;
@property(retain, nonatomic) UIButton *cameraGuestBroadcastingButton; // @synthesize cameraGuestBroadcastingButton=_cameraGuestBroadcastingButton;
@property(retain, nonatomic) NSLayoutConstraint *cameraButtonsLayoutGuideTrailingAnchorConstraint; // @synthesize cameraButtonsLayoutGuideTrailingAnchorConstraint=_cameraButtonsLayoutGuideTrailingAnchorConstraint;
@property(retain, nonatomic) UILayoutGuide *cameraButtonsLayoutGuide; // @synthesize cameraButtonsLayoutGuide=_cameraButtonsLayoutGuide;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UILayoutGuide *controlButtonsLayoutGuide; // @synthesize controlButtonsLayoutGuide=_controlButtonsLayoutGuide;
@property(retain, nonatomic) UIView *controlsView; // @synthesize controlsView=_controlsView;
@property(nonatomic) double initialCameraZoomValueForContentViewPinchGesture; // @synthesize initialCameraZoomValueForContentViewPinchGesture=_initialCameraZoomValueForContentViewPinchGesture;
@property(retain, nonatomic) UIPinchGestureRecognizer *contentViewPinchGestureRecognizer; // @synthesize contentViewPinchGestureRecognizer=_contentViewPinchGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *contentViewDualTouchTapGestureRecognizer; // @synthesize contentViewDualTouchTapGestureRecognizer=_contentViewDualTouchTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *contentViewTapGestureRecognizer; // @synthesize contentViewTapGestureRecognizer=_contentViewTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *contentViewDoubleTapGestureRecognizer; // @synthesize contentViewDoubleTapGestureRecognizer=_contentViewDoubleTapGestureRecognizer;
@property(retain, nonatomic) UILayoutGuide *contentViewLayoutMarginsGuide; // @synthesize contentViewLayoutMarginsGuide=_contentViewLayoutMarginsGuide;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) TFNSwappingContainerViewControllerHelper *containerViewControllerHelper; // @synthesize containerViewControllerHelper=_containerViewControllerHelper;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) T1CameraContentContainerView *cameraContainerView; // @synthesize cameraContainerView=_cameraContainerView;
@property(retain, nonatomic) id updatingLastCameraViewImageTag; // @synthesize updatingLastCameraViewImageTag=_updatingLastCameraViewImageTag;
@property(retain, nonatomic) UIImageView *lastCameraViewImageView; // @synthesize lastCameraViewImageView=_lastCameraViewImageView;
@property(nonatomic, getter=isLastCameraViewImageEnabled) _Bool lastCameraViewImageEnabled; // @synthesize lastCameraViewImageEnabled=_lastCameraViewImageEnabled;
@property(nonatomic) long long cameraSessionCaptureOrientation; // @synthesize cameraSessionCaptureOrientation=_cameraSessionCaptureOrientation;
@property(retain, nonatomic) TFSTimer *stopCameraSessionTimer; // @synthesize stopCameraSessionTimer=_stopCameraSessionTimer;
@property(nonatomic) unsigned long long cameraSessionState; // @synthesize cameraSessionState=_cameraSessionState;
@property(nonatomic) unsigned long long cameraSessionMode; // @synthesize cameraSessionMode=_cameraSessionMode;
@property(retain, nonatomic) PTVAPIResponseErrorInfo *periscopeAccountAuthenticationErrorInfo; // @synthesize periscopeAccountAuthenticationErrorInfo=_periscopeAccountAuthenticationErrorInfo;
@property(retain, nonatomic) T1BroadcastingFeatures *broadcastingFeatures; // @synthesize broadcastingFeatures=_broadcastingFeatures;
@property(retain, nonatomic) T1PeriscopeAccount *periscopeAccount; // @synthesize periscopeAccount=_periscopeAccount;
@property(retain, nonatomic) PTVTwitterCameraViewController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
@property(retain, nonatomic) UILayoutGuide *viewLayoutMarginsGuide; // @synthesize viewLayoutMarginsGuide=_viewLayoutMarginsGuide;
@property(nonatomic, getter=isDismissed) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(nonatomic, getter=isTransitioningMode) _Bool transitioningMode; // @synthesize transitioningMode=_transitioningMode;
@property(retain, nonatomic) NSArray *availableModeLabels; // @synthesize availableModeLabels=_availableModeLabels;
@property(retain, nonatomic) NSArray *availableModeNumbers; // @synthesize availableModeNumbers=_availableModeNumbers;
@property(nonatomic) unsigned long long authorizationState; // @synthesize authorizationState=_authorizationState;
@property(nonatomic, getter=isFullyPresented) _Bool fullyPresented; // @synthesize fullyPresented=_fullyPresented;
@property(nonatomic, getter=isPresented) _Bool presented; // @synthesize presented=_presented;
@property(retain, nonatomic) T1CameraCapturePresentation *currentCapturePresentation; // @synthesize currentCapturePresentation=_currentCapturePresentation;
@property(nonatomic, getter=isViewFullyLoaded) _Bool viewFullyLoaded; // @synthesize viewFullyLoaded=_viewFullyLoaded;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) T1CameraCaptureContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <T1CameraCaptureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)disablesCameraGesturs;
- (_Bool)isCameraHidden;
- (_Bool)disablesDismissal;
- (_Bool)isControlsHidden;
- (_Bool)isCameraControlsHidden;
- (void)setInitialCompositionText:(id)arg1;
- (id)initialCompositionText;
- (void)tooltipDidTap:(id)arg1;
- (void)cameraEventHashtagsFetcher:(id)arg1 didFetchCurrentEventHashtags:(id)arg2 error:(id)arg3;
- (void)cameraPlacesFetcher:(id)arg1 didFetchCurrentPlaces:(id)arg2 error:(id)arg3;
- (void)_t1_main_updateEventHashtags;
- (void)_t1_main_updatePlaces;
- (void)cameraAccountGeoDataProviderUpdater:(id)arg1 didUpdateCurrentLocation:(id)arg2 error:(id)arg3;
- (void)_t1_main_updateModeWithIndex:(unsigned long long)arg1;
- (void)cameraModeSelectorViewController:(id)arg1 didSelectModeAtIndex:(unsigned long long)arg2;
- (void)cameraModeSelectorViewController:(id)arg1 willSelectModeAtIndex:(unsigned long long)arg2;
- (void)twitterCameraCommonMotioDidChangeCaptureOrientation:(long long)arg1;
- (void)twitterCameraCommonLiveCameraSessionDidStart;
- (void)twitterCameraCommonCaptureSessionDidStop;
- (void)twitterCameraCommonCaptureSessionDidStart;
- (void)resetCamera;
- (void)_t1_main_cameraControllerDidChangeRecording;
- (void)cleanupPostBroadcastIfNeeded;
- (void)stopBroadcast;
- (void)startBroadcastWithTitle:(id)arg1 location:(id)arg2 twitterInviteeUserIDs:(id)arg3;
- (void)associateTweetIDWithCurrentBroadcast:(id)arg1;
- (void)selectFrontFacingCamera;
- (void)capturePhoto;
- (void)abortVideoRecording;
- (void)stopVideoRecording;
- (void)startVideoRecordingWithMaximumDuration:(double)arg1 workingDirectory:(id)arg2;
- (_Bool)isCameraRecording;
- (void)showInformationalChatMessage:(id)arg1;
- (void)didDoubleTapPreBroadcast;
- (double)cameraZoomValue;
- (void)setCameraZoomValue:(double)arg1;
- (void)checkinCameraViewController;
- (id)checkoutCameraViewControllerWithLiveDelegate:(id)arg1;
- (id)checkoutCameraViewControllerWithCaptureDelegate:(id)arg1;
- (void)_t1_main_updateAuthorizationState;
- (void)cameraServiceAuthorizationViewController:(id)arg1 didChangeAuthorizationState:(unsigned long long)arg2;
- (void)cameraServiceAuthorizationViewControllerDidTapDismiss:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_t1_gesture_contentViewDidPinch:(id)arg1;
- (void)_t1_gesture_contentViewDidDoubleTap:(id)arg1;
- (void)_t1_gesture_contentViewDidDualTouchTap:(id)arg1;
- (void)_t1_gesture_contentViewDidTap:(id)arg1;
- (void)_t1_main_updateCameraFlash;
- (void)_t1_action_cameraFlashButtonDidTouchUpInside:(id)arg1;
- (void)_t1_main_updateCameraDevicePosition;
- (void)_t1_main_flipCameraDevicePosition;
- (void)_t1_action_cameraFlipButtonDidTouchUpInside:(id)arg1;
- (void)_t1_main_updateForAudioButtonSelectedAnimated:(_Bool)arg1;
- (void)_t1_action_cameraAudioScopeButtonDidTouchUpInside:(id)arg1;
- (void)_t1_main_triggerGuestBroadcastingTooltipWithLabel:(id)arg1 event:(id)arg2;
- (void)_t1_main_updateForGuestBroadcastingButtonSelectedAnimated:(_Bool)arg1;
- (void)_t1_action_cameraGuestBroadcastingButtonDidTouchUpInside:(id)arg1;
- (void)dismissWithResult:(id)arg1;
- (void)_t1_action_backButtonDidTouchUpInside:(id)arg1;
@property(readonly, nonatomic) UIView *swappingContainerView;
- (void)viewControllerDidDismissAnimated:(_Bool)arg1;
- (void)viewControllerDidPresentAnimated:(_Bool)arg1;
- (void)_t1_main_resetCameraIfNeeded;
- (void)viewControllerWillPresentAnimated:(_Bool)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)_t1_main_currentScribeContext;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)_t1_main_preferredCapturePresentation;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)_t1_main_updateServiceAuthorizationViewAnimated:(_Bool)arg1;
- (void)_t1_main_updateServiceAuthorizationViewController;
- (void)_t1_main_loadServiceAuthorizationViewControllerWithConstraints:(id)arg1;
- (void)_t1_main_updateContentViewLayoutMargins;
- (void)_t1_main_loadContentViewLayoutMarginsGuideWithConstraints:(id)arg1;
- (void)_t1_main_updateModeSelectorViewWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_updateModeSelectorViewControllerUserInteractionEnabled;
- (void)_t1_main_updateModeSelectorViewControllerModeWidth;
- (void)_t1_main_loadModeSelectorViewControllerWithConstraints:(id)arg1;
- (void)_t1_main_updateCameraFlashButtonWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_loadCameraFlashButtonWithConstraints:(id)arg1;
- (void)_t1_main_updateCameraFlipButtonWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_loadCameraFlipButtonWithConstraints:(id)arg1;
- (void)_t1_main_updateCameraAudioScopeButtonWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_loadCameraAudioScopeButtonWithConstraints:(id)arg1;
- (void)_t1_main_updateCameraGuestBroadcastingButtonWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_loadCameraGuestBroadcastingButtonWithConstraints:(id)arg1;
- (void)_t1_main_loadCameraButtonsLayoutGuideWithConstraints:(id)arg1;
- (void)_t1_main_updateBackButtonWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_loadBackButtonWithConstraints:(id)arg1;
- (void)_t1_main_loadControlButtonsLayoutGuideWithConstraints:(id)arg1;
- (void)_t1_main_loadControlsViewWithConstraints:(id)arg1;
- (void)_t1_main_loadContentView;
- (void)_t1_main_updateGradientViewWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_loadGradientViewWithConstraints:(id)arg1;
- (void)_t1_main_loadLastCameraViewImageView;
- (void)_t1_main_removeCameraViewController;
- (void)_t1_main_addCameraViewController;
- (void)_t1_main_loadCameraViewController;
- (void)_t1_main_loadCameraContainerViewWithConstraint:(id)arg1;
- (void)_t1_main_loadViewLayoutMarginsGuideWithConstraints:(id)arg1;
- (void)viewDidLoad;
- (id)cameraScribeValue;
- (void)_t1_main_updateContentViewGestures;
- (void)setDisablesCameraGesturs:(_Bool)arg1;
- (void)_t1_main_updateCameraView;
- (void)setCameraHidden:(_Bool)arg1;
- (void)setDisablesDismissal:(_Bool)arg1;
@property(readonly, nonatomic, getter=isDismissable) _Bool dismissable;
- (void)_t1_main_resetLastCameraViewImage;
- (void)_t1_main_cancelUpdatingLastCameraViewImage;
- (void)_t1_main_hideLastCameraViewImageAnimated;
- (void)_t1_main_updateLastCameraViewImageCompletion:(CDUnknownBlockType)arg1;
- (void)_t1_main_showLastCameraViewImage;
- (_Bool)isGuestBroadcastingEnabled;
- (void)_t1_main_updateCameraControlsWithAnimationOptions:(unsigned long long)arg1;
- (void)_t1_main_updateControlsWithAnimationOptions:(unsigned long long)arg1;
- (void)setControlsHidden:(_Bool)arg1 withAnimationOptions:(unsigned long long)arg2;
- (void)setControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setControlsHidden:(_Bool)arg1;
- (void)setCameraControlsHidden:(_Bool)arg1 withAnimationOptions:(unsigned long long)arg2;
- (void)setCameraControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCameraControlsHidden:(_Bool)arg1;
- (void)_t1_main_scribeDeviceOrientationDidChange;
- (void)_t1_main_updateCameraControlButtonsOrientationAnimated:(_Bool)arg1;
- (void)_t1_main_stopCameraSession;
- (void)_t1_timer_stopCameraSessionTimerDidFire:(id)arg1;
- (_Bool)_t1_main_invalidateStopCameraSessionTimer;
- (void)_t1_main_scheduleStopCameraSessionTimer;
- (void)_t1_main_startCameraSessionLive;
- (void)_t1_main_startCameraSessionCamera;
- (void)_t1_main_startCameraSession;
- (void)_t1_main_updateAccountCurrentLocation;
- (void)requestsUpdateCurrentLocationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_t1_main_updateEventHashtagsFetcher;
- (void)_t1_main_updatePlacesFetcher;
- (void)_t1_main_updateAccountGeoDataProviderUpdater;
- (void)_t1_main_authenticatePeriscope;
- (void)_t1_main_updateBroadcastingFeatures;
@property(readonly, nonatomic) UIViewController *contentViewController;
- (void)_t1_main_updateCameraSessionMode;
- (id)_t1_main_loadReactModeViewController;
- (id)_t1_main_loadLiveModeViewController;
- (id)_t1_main_loadCameraModeViewController;
- (id)_t1_main_loadOrUpdateCameraModeViewController;
- (void)_t1_main_updateContentViewControllerAnimated:(_Bool)arg1;
- (void)_t1_main_updateForActiveModeAnimated:(_Bool)arg1;
- (void)setMode:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)initWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

