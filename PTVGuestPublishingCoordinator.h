//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeSDK/PTVCompositedVideoDelegate-Protocol.h>
#import <PeriscopeSDK/PTVGuestBroadcastingStatsCollectorDelegate-Protocol.h>
#import <PeriscopeSDK/PTVGuestCallerControllerObserver-Protocol.h>
#import <PeriscopeSDK/PTVGuestCoordinator-Protocol.h>
#import <PeriscopeSDK/PTVJanusClientDelegate-Protocol.h>
#import <PeriscopeSDK/PTVPipelineUser-Protocol.h>

@class NSArray, NSString, PTVGuestBroadcastingStatsCollector, PTVGuestCallerController, PTVGuestRoomConfiguration, PTVGuestView, PTVJanusClient, RTCAudioTrack, RTCMediaStream, RTCVideoCapturer, RTCVideoSource, TAVSharedAudioSessionConfigurationToken, UIViewController;
@protocol PTVGuestCoordinatorDelegate, PTVLoggedInUserProtocol, PTVPipelineOwner;

@interface PTVGuestPublishingCoordinator : NSObject <PTVJanusClientDelegate, PTVGuestBroadcastingStatsCollectorDelegate, PTVGuestCallerControllerObserver, PTVCompositedVideoDelegate, PTVPipelineUser, PTVGuestCoordinator>
{
    PTVGuestPublishingCoordinator *_weakSelf;
    unsigned long long _publisherRole;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    RTCVideoSource *_localVideoSource;
    RTCMediaStream *_guestMediaStream1;
    RTCMediaStream *_guestMediaStream2;
    RTCMediaStream *_guestMediaStream3;
    id <PTVPipelineOwner> _pipelineOwner;
    PTVGuestView *_localAudioGuestView;
    PTVGuestBroadcastingStatsCollector *_statsCollector;
    TAVSharedAudioSessionConfigurationToken *_sharedAudioSessionToken;
    _Bool _isObservingAVAudioSession;
    _Bool _isAudioScopeEnabled;
    UIViewController<PTVGuestCoordinatorDelegate> *_delegate;
    long long _loggedInUserParticipantIndex;
    PTVGuestRoomConfiguration *_configuration;
    PTVJanusClient *_janusClient;
    RTCVideoCapturer *_localCapturer;
    RTCAudioTrack *_localAudioOnlyTrack;
    long long _rtcVideoRotation;
    double _currentRotation;
    PTVGuestCallerController *_guestCallerController;
    NSString *_primaryUserId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *primaryUserId; // @synthesize primaryUserId=_primaryUserId;
@property(retain, nonatomic) PTVGuestCallerController *guestCallerController; // @synthesize guestCallerController=_guestCallerController;
@property double currentRotation; // @synthesize currentRotation=_currentRotation;
@property long long rtcVideoRotation; // @synthesize rtcVideoRotation=_rtcVideoRotation;
@property(retain, nonatomic) RTCAudioTrack *localAudioOnlyTrack; // @synthesize localAudioOnlyTrack=_localAudioOnlyTrack;
@property(retain) RTCVideoCapturer *localCapturer; // @synthesize localCapturer=_localCapturer;
@property(retain, nonatomic) PTVJanusClient *janusClient; // @synthesize janusClient=_janusClient;
@property(retain, nonatomic) PTVGuestRoomConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) _Bool isAudioScopeEnabled; // @synthesize isAudioScopeEnabled=_isAudioScopeEnabled;
@property(nonatomic) long long loggedInUserParticipantIndex; // @synthesize loggedInUserParticipantIndex=_loggedInUserParticipantIndex;
@property(nonatomic) __weak UIViewController<PTVGuestCoordinatorDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)toggleAudioVideoForUserID:(id)arg1;
- (_Bool)canToggleAudioVideoForUserID:(id)arg1;
- (void)visualizeIceConnectionState:(long long)arg1;
- (void)unobserveAVAudioSessionRouteChanges;
- (void)observeAVAudioSessionRouteChanges;
- (void)enforceAVAudioSessionVideoChatModeIfNeeded;
- (void)didSetPrimaryView:(id)arg1;
- (void)renderingDidChange:(_Bool)arg1 withUserID:(id)arg2;
- (void)broadcasterDidHangUpOnGuestID:(id)arg1;
- (void)broadcasterDidCancelCountdownForViewerID:(id)arg1;
@property(retain, nonatomic) NSArray *guestReconciliationArray;
- (id)guestParticipantUserForUserID:(id)arg1;
- (id)guestCallerSessionForUserID:(id)arg1;
- (id)loggedInUserGuestCallerSession;
- (void)restartSourcePipeline;
- (void)sourcePipelineBroadcastingStateDidChange;
- (void)rtcVideoRotationStateChanged;
- (void)handleInterfaceOrientation:(long long)arg1;
- (void)pipeline:(id)arg1 videoFrame:(struct __CVBuffer *)arg2 at:(CDStruct_1b6d18a9)arg3 captureContext:(CDStruct_4508418e)arg4;
- (void)publishingPipeline:(id)arg1 didReceiveLogEntry:(id)arg2;
- (void)updateVideoOrientation;
- (void)onCameraTypeChange:(long long)arg1;
- (void)noteCameraChange;
- (void)imageRotation:(double)arg1 immediate:(_Bool)arg2;
- (void)didChangeLocalAudioSource:(_Bool)arg1 isUsingHeadphones:(_Bool)arg2;
- (void)cameraRuntimeError;
- (void)cameraStartFailed;
- (void)cameraStartComplete;
- (void)attemptReconnect;
@property(retain) RTCVideoSource *localVideoSource;
- (long long)audioOutputMode;
- (void)disableWebRTCAudioSessionIfNeeded;
- (void)startPipeline;
- (void)removeLocalView;
- (void)insertVideoView;
- (void)removeGuestMediaStream:(id)arg1 withUserID:(id)arg2 shouldReshuffleGuestViews:(_Bool)arg3;
- (void)addGuestMediaStream:(id)arg1 withUserID:(id)arg2;
- (void)collectEndOfStreamStatsIfNeeded;
- (void)finishShutdownAfterLeaving;
- (void)shutdownWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeViews;
- (void)leaveBroadcastWithCompletion:(CDUnknownBlockType)arg1;
- (void)createAndJoinJanusClient;
- (void)joinBroadcast;
- (long long)participantIndexForUserID:(id)arg1;
- (id)usernameForUserID:(id)arg1;
- (id)userIDForGuestType:(unsigned long long)arg1;
@property(retain) NSObject<PTVPipelineOwner> *pipelineOwner;
- (id)sourcePipeline;
@property(readonly, nonatomic) _Bool isDisconnectedWithError;
@property(readonly, nonatomic) _Bool isPublishing;
- (id)initWithBroadcastWithPublisherRole:(unsigned long long)arg1 guestCallerController:(id)arg2 loggedInUser:(id)arg3;
- (void)guestBroadcastingStatsCollector:(id)arg1 didCollectEndOfStreamStats:(id)arg2;
- (void)guestBroadcastingStatsCollector:(id)arg1 didCollectPeriodicPlaybackStats:(id)arg2;
- (void)guestBroadcastingStatsCollector:(id)arg1 didCollectPeriodicPublishingStats:(id)arg2;
- (void)didStoreAndOutputLogEntry:(id)arg1;
- (void)didDestroyVideoRoom;
- (void)didUpdateIceConnectionState:(long long)arg1;
- (void)didChangePublishingLocalVideoAndAudioState;
- (void)didChangeWebRTCActiveState;
- (void)didChangePublishingState;
- (void)didChangeJanusState:(long long)arg1;
- (void)didUpdateLocalAudioLevel:(id)arg1;
- (void)didUpdateRemoteAudioLevel:(id)arg1 forUserId:(id)arg2;
- (void)didRemoveRemoteMediaStream:(id)arg1 userId:(id)arg2;
- (void)didReceiveRemoteMediaStream:(id)arg1 userId:(id)arg2;
- (id)endedMediaStream;
- (id)existingMediaStreamForUserId:(id)arg1;
- (void)didHangUpLocalJanusVideoRoomHandler;
- (void)didReceiveLocalAudioTrack:(id)arg1;
- (void)didCreateLocalVideoSource:(id)arg1;
- (void)guestCallerControllerDidAddOrRemoveLoggedInUserSession;
- (void)viewerCountdownWasCancelledByBroadcaster;
- (void)viewerCountdownWillBeCancelled;
- (void)didReconcileAndRemoveUserIDs:(id)arg1;
- (void)broadcasterDidClearUserForGuestBroadcasting:(id)arg1;
- (void)broadcasterDidUpdateIsMutedForGuestCallerSession:(id)arg1 isMuted:(_Bool)arg2;
- (void)broadcasterDidUpdateStateForGuestCallerSession:(id)arg1 fromState:(unsigned long long)arg2;
- (void)broadcasterDidRevertHangUpForGuestCallerSession:(id)arg1;
- (void)broadcasterWillHangUpOnGuestCallerSession:(id)arg1;
- (void)setRTPForwardParametersOnGuestCallerSession:(id)arg1;
- (void)viewerDidCompleteCountdown:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
