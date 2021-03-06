//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/PTVTwitterCameraCaptureDelegate-Protocol.h>
#import <T1Twitter/T1CameraCaptureCameraModeConfirmationViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1CameraCaptureCameraModeRecordViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1CameraCaptureViewControllerCameraSessionDelegate-Protocol.h>
#import <T1Twitter/TFNSwappingContainerViewControllerHelperDelegate-Protocol.h>

@class NSString, T1CameraCaptureCameraModeConfirmationViewController, T1CameraCaptureCameraModeRecordViewController, T1CameraCaptureCameraScribeValue, T1CameraCaptureOutput, T1CameraCaptureViewController, TFNSwappingContainerViewControllerHelper, TFSReferencedFile, TFSTwitterScribeContext, UIView, UIViewController;

@interface T1CameraCaptureCameraModeViewController : TFNViewController <T1CameraCaptureCameraModeConfirmationViewControllerDelegate, T1CameraCaptureCameraModeRecordViewControllerDelegate, T1CameraCaptureViewControllerCameraSessionDelegate, TFNSwappingContainerViewControllerHelperDelegate, PTVTwitterCameraCaptureDelegate>
{
    _Bool _recordingReachedMinimumThreshold;
    TFSTwitterScribeContext *_scribeContext;
    unsigned long long _captureMode;
    T1CameraCaptureViewController *_captureViewController;
    unsigned long long _state;
    TFNSwappingContainerViewControllerHelper *_containerViewControllerHelper;
    T1CameraCaptureCameraModeRecordViewController *_recordViewController;
    T1CameraCaptureCameraModeConfirmationViewController *_confirmationViewController;
    unsigned long long _recordingState;
    TFSReferencedFile *_referencedRecordingWorkingDirectory;
    double _initialCameraZoomValueForRecording;
    T1CameraCaptureCameraScribeValue *_initialCameraScribeValue;
    T1CameraCaptureOutput *_captureOutput;
}

- (void).cxx_destruct;
@property(retain, nonatomic) T1CameraCaptureOutput *captureOutput; // @synthesize captureOutput=_captureOutput;
@property(retain, nonatomic) T1CameraCaptureCameraScribeValue *initialCameraScribeValue; // @synthesize initialCameraScribeValue=_initialCameraScribeValue;
@property(nonatomic) double initialCameraZoomValueForRecording; // @synthesize initialCameraZoomValueForRecording=_initialCameraZoomValueForRecording;
@property(retain, nonatomic) TFSReferencedFile *referencedRecordingWorkingDirectory; // @synthesize referencedRecordingWorkingDirectory=_referencedRecordingWorkingDirectory;
@property(nonatomic) _Bool recordingReachedMinimumThreshold; // @synthesize recordingReachedMinimumThreshold=_recordingReachedMinimumThreshold;
@property(nonatomic) unsigned long long recordingState; // @synthesize recordingState=_recordingState;
@property(retain, nonatomic) T1CameraCaptureCameraModeConfirmationViewController *confirmationViewController; // @synthesize confirmationViewController=_confirmationViewController;
@property(retain, nonatomic) T1CameraCaptureCameraModeRecordViewController *recordViewController; // @synthesize recordViewController=_recordViewController;
@property(retain, nonatomic) TFNSwappingContainerViewControllerHelper *containerViewControllerHelper; // @synthesize containerViewControllerHelper=_containerViewControllerHelper;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) __weak T1CameraCaptureViewController *captureViewController; // @synthesize captureViewController=_captureViewController;
@property(nonatomic) unsigned long long captureMode; // @synthesize captureMode=_captureMode;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
- (void)cameraCaptureCameraModeConfirmationController:(id)arg1 didAddAttachment:(id)arg2;
- (void)cameraCaptureCameraModeConfirmationControllerDidCancel:(id)arg1;
- (void)_t1_main_didCapturePhotoImageData:(id)arg1;
- (void)twitterCameraCaptureDidCapturePhoto:(id)arg1 error:(id)arg2;
- (void)_t1_main_didCaptureVideoURL:(id)arg1;
- (void)twitterCameraCaptureDidRenderVideoURL:(id)arg1 error:(id)arg2;
- (void)twitterCameraCaptureShouldBeginPostCaptureTransition:(id)arg1;
- (void)twitterCameraCaptureVideoTimeDidTickWithDuration:(float)arg1;
- (void)twitterCameraCaptureVideoReachedMaximumThreshold;
- (void)twitterCameraCaptureVideoReachedMinimumThreshold;
- (void)_t1_main_capturePhoto;
- (void)_t1_main_stopRecording;
- (void)_t1_main_requestStopRecording;
- (void)_t1_main_startRecording;
- (void)cameraCaptureViewController:(id)arg1 didChangeCameraSessionState:(unsigned long long)arg2;
- (void)cameraCaptureCameraModeRecordViewController:(id)arg1 didChangeZoomScale:(double)arg2;
- (void)cameraCaptureCameraModeRecordViewControllerDidStopRecording:(id)arg1;
- (void)cameraCaptureCameraModeRecordViewControllerDidStartRecording:(id)arg1;
- (void)viewControllerDidDismissAnimated:(_Bool)arg1;
- (void)viewControllerWillPresentAnimated:(_Bool)arg1;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)tfn_viewControllerWillSwapWithTransitionCoordinator:(id)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIViewController *contentViewController;
- (void)_t1_main_purgeWorkingDirectoryAndCaputedData;
- (void)_t1_main_updateCaptureViewController;
- (void)_t1_main_updateConfirmationViewController;
- (void)_t1_main_updateRecordingViewController;
- (void)_t1_main_updateRecordingState;
- (id)_t1_main_loadConfirmationViewController;
- (id)_t1_main_loadRecordViewController;
- (void)_t1_main_updateContentViewControllerAnimated:(_Bool)arg1;
- (id)initWithCaptureViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *swappingContainerView;

@end

