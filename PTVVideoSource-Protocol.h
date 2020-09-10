//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class AVCaptureVideoPreviewLayer, NSObject;
@protocol PTVVideoSourceDelegate;

@protocol PTVVideoSource <NSObject>
@property(readonly) _Bool canSetFocusPoint;
@property(readonly) _Bool cameraValid;
@property(readonly) long long cameraType;
@property(readonly) struct CGSize previewSize;
@property(readonly) struct CGSize imageSize;
@property(readonly) _Bool audioPresent;
@property int audioRate;
@property _Bool mute;
@property(readonly) long long cameraState;
@property(readonly) double frameRate;
@property(readonly) _Bool hasOpticalZoom;
@property(readonly) float maxZoomFactor;
@property float zoomFactor;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property(readonly) double cameraOrientation;
@property(readonly) _Bool suppliesOrientation;
@property(retain) NSObject<PTVVideoSourceDelegate> *delegate;
@property(readonly, nonatomic) long long preferredOrientation;
- (void)resetFocusAndExposure;
- (void)setFocusAndExposure:(struct CGPoint)arg1;
- (void)setCameraPosition:(long long)arg1;
- (_Bool)canSwitchToPosition:(long long)arg1;
- (_Bool)setInterfaceOrientation:(long long)arg1;
- (void)requestAudioFrequency:(int)arg1;
- (void)stopEncoding;
- (_Bool)startEncoding;
- (void)startCamera;
- (void)shutdown;
- (void)startShutdown;
- (void)resumeCapture;
- (void)pauseCapture;

@optional
@property(readonly) _Bool isEncoding;
@property(readonly) long long captureOrientation;
@property long long audioOutputMode;
@property(readonly) _Bool receivingSilentAudio;
- (void)updateCaptureOrientationWithAngle:(double)arg1;
- (void)setTorchMode:(long long)arg1;
- (void)setPhotoFlashMode:(long long)arg1;
- (void)capturePhotoWithCompletion:(void (^)(NSData *, NSError *))arg1;
@end

