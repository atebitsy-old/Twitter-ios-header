//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeSDK/PTVAVEncoderDelegate-Protocol.h>
#import <PeriscopeSDK/PTVVideoProcessorDelegate-Protocol.h>

@class NSData, NSDate, NSString, PTVAudioVisualizerModel, PTVRecordToFile, PTVTwitterMediaRender, PTVVideoProcessor, PTVVideoProcessorDisplayView;
@protocol PTVCompositedVideoDelegate, PTVEncodedOutputDelegate, PTVLiveVideoEncoder;

@interface PTVEncodePipeline : NSObject <PTVVideoProcessorDelegate, PTVAVEncoderDelegate>
{
    id _weakSelf;
    struct CGSize _targetSize;
    NSObject *_lockForBroadcasting;
    _Bool _broadcasting;
    int _videoKBytesPerSecond;
    int _gopLen;
    int _frameRate;
    CDUnknownBlockType _JPEGCallback;
    CDUnknownBlockType _pixelBufferCallback;
    NSData *_audioConfig;
    id <PTVCompositedVideoDelegate> _compositedDelegate;
    int _hqBitrate;
    int _hqGopLength;
    struct CGSize _hqVideoSize;
    _Bool _videoFlipped;
    _Bool _dualEncoder;
    _Bool _pipelineActive;
    _Bool _primaryEncoderActive;
    _Bool _secondaryEncoderActive;
    _Bool _updateVideoSettings;
    _Bool _recording;
    PTVAudioVisualizerModel *_audioVisualizerModel;
    id <PTVEncodedOutputDelegate> _delegate;
    double _imageRotation;
    PTVVideoProcessor *_videoProcessor;
    id <PTVLiveVideoEncoder> _primaryVideoEncoder;
    id <PTVLiveVideoEncoder> _secondaryVideoEncoder;
    PTVTwitterMediaRender *_twitterMediaRender;
    double _lastCameraFrame;
    NSDate *_lastFrameArrival;
    double _lastAudio;
    NSDate *_lastAudioArrival;
    PTVRecordToFile *_fileRecorder;
    PTVVideoProcessorDisplayView *_videoProcessorDisplayView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PTVVideoProcessorDisplayView *videoProcessorDisplayView; // @synthesize videoProcessorDisplayView=_videoProcessorDisplayView;
@property(retain, nonatomic) PTVRecordToFile *fileRecorder; // @synthesize fileRecorder=_fileRecorder;
@property _Bool recording; // @synthesize recording=_recording;
@property _Bool updateVideoSettings; // @synthesize updateVideoSettings=_updateVideoSettings;
@property(retain) NSDate *lastAudioArrival; // @synthesize lastAudioArrival=_lastAudioArrival;
@property double lastAudio; // @synthesize lastAudio=_lastAudio;
@property(retain) NSDate *lastFrameArrival; // @synthesize lastFrameArrival=_lastFrameArrival;
@property double lastCameraFrame; // @synthesize lastCameraFrame=_lastCameraFrame;
@property(nonatomic) _Bool secondaryEncoderActive; // @synthesize secondaryEncoderActive=_secondaryEncoderActive;
@property(nonatomic) _Bool primaryEncoderActive; // @synthesize primaryEncoderActive=_primaryEncoderActive;
@property(retain, nonatomic) PTVTwitterMediaRender *twitterMediaRender; // @synthesize twitterMediaRender=_twitterMediaRender;
@property(retain, nonatomic) id <PTVLiveVideoEncoder> secondaryVideoEncoder; // @synthesize secondaryVideoEncoder=_secondaryVideoEncoder;
@property(retain, nonatomic) id <PTVLiveVideoEncoder> primaryVideoEncoder; // @synthesize primaryVideoEncoder=_primaryVideoEncoder;
@property(nonatomic) _Bool pipelineActive; // @synthesize pipelineActive=_pipelineActive;
@property(retain, nonatomic) PTVVideoProcessor *videoProcessor; // @synthesize videoProcessor=_videoProcessor;
@property(nonatomic) double imageRotation; // @synthesize imageRotation=_imageRotation;
@property(readonly, nonatomic) _Bool dualEncoder; // @synthesize dualEncoder=_dualEncoder;
@property(nonatomic) __weak id <PTVEncodedOutputDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PTVAudioVisualizerModel *audioVisualizerModel; // @synthesize audioVisualizerModel=_audioVisualizerModel;
- (double)videoDuration;
@property double freeSpaceLimitinMB;
- (_Bool)canSaveToCameraRoll;
- (void)deleteSavedClips;
- (void)combineAndSaveToCameraRoll:(CDUnknownBlockType)arg1;
- (void)renderVideo:(id)arg1 withWorkingFolder:(id)arg2 muteAudio:(_Bool)arg3 captureOrientation:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setRecordingDelegate:(id)arg1;
- (id)getClipURLs;
- (void)onSecondaryEncoderOutput:(id)arg1 pts:(double)arg2 sample:(struct opaqueCMSampleBuffer *)arg3;
- (void)onVideoParams:(id)arg1;
- (void)onPrimaryEncoderOutput:(id)arg1 pts:(double)arg2 sample:(struct opaqueCMSampleBuffer *)arg3;
- (void)pushMetadata:(id)arg1 pts:(double)arg2 forEncoder:(id)arg3;
- (double)makeNTPfor:(double)arg1;
- (_Bool)shouldSaveHighQuality;
- (void)videoProcessor:(id)arg1 didRenderBufferHQ:(struct __CVBuffer *)arg2 withPresentationTime:(CDStruct_1b6d18a9)arg3 captureContext:(CDStruct_4508418e)arg4;
- (void)encodePixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)videoProcessor:(id)arg1 didRenderBuffer:(struct __CVBuffer *)arg2 withPresentationTime:(CDStruct_1b6d18a9)arg3 captureContext:(CDStruct_4508418e)arg4;
- (void)removeSwitchboardAsset;
- (void)updateSwitchboardAssetAttributes:(struct PTVSwitchboardAssetAttributes)arg1;
- (void)displaySwitchboardAsset:(id)arg1 withAttributes:(struct PTVSwitchboardAssetAttributes)arg2;
- (void)clearCanvasAnimated:(_Bool)arg1;
- (void)enqueueSketchPoints:(id)arg1;
- (void)onAudioData:(id)arg1 pts:(double)arg2;
- (void)onAudioParams:(id)arg1 format:(struct opaqueCMFormatDescription *)arg2;
- (void)videoSource:(id)arg1 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 captureContext:(CDStruct_4508418e)arg3;
- (void)setVideoPreviewLayer:(id)arg1;
- (void)requestKeyFrame;
- (void)captureNextSampleBuffer:(CDUnknownBlockType)arg1;
- (void)captureNextJPEG:(CDUnknownBlockType)arg1;
- (void)setHQVideoEncoderBitrate:(int)arg1 videoSize:(struct CGSize)arg2 frameRate:(int)arg3 gopLength:(int)arg4;
@property int frameRate;
@property int gopLen;
@property int videoKBytesPerSecond;
- (void)resetVideoEncoder;
- (void)processiPhoneCameraMetadataObjects:(id)arg1;
@property(nonatomic) _Bool mirrorRecordedVideo;
@property(nonatomic) _Bool mirrorVideoPreview;
@property(nonatomic) _Bool omitVideoDuringFramebufferDisplay;
@property(nonatomic) double viewOrientation;
@property(nonatomic) float videoZoom;
@property(nonatomic) struct CGSize targetSize;
@property(readonly) double encodedRotation;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)makeActive;
- (void)setMetadata:(id)arg1 immediate:(_Bool)arg2;
- (void)shutdown;
- (void)stopSecondaryEncoder;
- (void)startSecondaryEncoder;
- (void)stopPrimaryEncoder;
- (void)startPrimaryEncoder;
- (void)resetCallbacks;
- (void)checkActive;
@property(nonatomic) __weak id <PTVCompositedVideoDelegate> compositedDelegate;
@property _Bool broadcasting;
- (void)finishRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pauseRecording;
- (void)startRecording;
- (void)rebuildVideoProcessor;
- (id)initWithDelegate:(id)arg1 compositedDelegate:(id)arg2 targetSize:(struct CGSize)arg3 dualEncoder:(_Bool)arg4 videoProcessorDisplayView:(id)arg5 audioVisualizerModel:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

