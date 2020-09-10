//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVDIAnalyticsScribe/NSCoding-Protocol.h>
#import <TVDIAnalyticsScribe/TBase-Protocol.h>

@class NSString, TVDIAnalyticsScribeCtaUrlClick, TVDIAnalyticsScribeCtaUrlImpression, TVDIAnalyticsScribeCtaWatchClick, TVDIAnalyticsScribeCtaWatchImpression, TVDIAnalyticsScribeError, TVDIAnalyticsScribeHeartbeat, TVDIAnalyticsScribeIntentToPlay, TVDIAnalyticsScribeLoop, TVDIAnalyticsScribeMute, TVDIAnalyticsScribePause, TVDIAnalyticsScribePlay, TVDIAnalyticsScribePlayFromTap, TVDIAnalyticsScribePlayback25, TVDIAnalyticsScribePlayback50, TVDIAnalyticsScribePlayback75, TVDIAnalyticsScribePlayback95, TVDIAnalyticsScribePlaybackComplete, TVDIAnalyticsScribePlaybackStart, TVDIAnalyticsScribePlaybackStartupError, TVDIAnalyticsScribeReplay, TVDIAnalyticsScribeUnmute, TVDIAnalyticsScribeVideo6SecView, TVDIAnalyticsScribeVideoAdSkip, TVDIAnalyticsScribeVideoGroupmView, TVDIAnalyticsScribeVideoMrcAudibleView, TVDIAnalyticsScribeVideoMrcView, TVDIAnalyticsScribeVideoQualityView, TVDIAnalyticsScribeVideoView, TVDIAnalyticsScribeView2Second, TVDIAnalyticsScribeViewThreshold;

@interface TVDIAnalyticsScribeMediaEventType : NSObject <TBase, NSCoding>
{
    _Bool _intentToPlayIsSet;
    _Bool _playIsSet;
    _Bool _replayIsSet;
    _Bool _playback25IsSet;
    _Bool _playback50IsSet;
    _Bool _playback75IsSet;
    _Bool _playback95IsSet;
    _Bool _playbackCompleteIsSet;
    _Bool _viewThresholdIsSet;
    _Bool _playFromTapIsSet;
    _Bool _videoViewIsSet;
    _Bool _ctaWatchImpressionIsSet;
    _Bool _ctaUrlImpressionIsSet;
    _Bool _ctaWatchClickIsSet;
    _Bool _ctaUrlClickIsSet;
    _Bool _videoAdSkipIsSet;
    _Bool _videoMrcViewIsSet;
    _Bool _videoQualityViewIsSet;
    _Bool _playbackStartIsSet;
    _Bool _heartbeatIsSet;
    _Bool _playbackStartupErrorIsSet;
    _Bool _view2secondIsSet;
    _Bool _pauseIsSet;
    _Bool _videoGroupmViewIsSet;
    _Bool _errorIsSet;
    _Bool _loopIsSet;
    _Bool _muteIsSet;
    _Bool _unmuteIsSet;
    _Bool _video6secViewIsSet;
    _Bool _videoMrcAudibleViewIsSet;
    TVDIAnalyticsScribeIntentToPlay *_intentToPlay;
    TVDIAnalyticsScribePlay *_play;
    TVDIAnalyticsScribeReplay *_replay;
    TVDIAnalyticsScribePlayback25 *_playback25;
    TVDIAnalyticsScribePlayback50 *_playback50;
    TVDIAnalyticsScribePlayback75 *_playback75;
    TVDIAnalyticsScribePlayback95 *_playback95;
    TVDIAnalyticsScribePlaybackComplete *_playbackComplete;
    TVDIAnalyticsScribeViewThreshold *_viewThreshold;
    TVDIAnalyticsScribePlayFromTap *_playFromTap;
    TVDIAnalyticsScribeVideoView *_videoView;
    TVDIAnalyticsScribeCtaWatchImpression *_ctaWatchImpression;
    TVDIAnalyticsScribeCtaUrlImpression *_ctaUrlImpression;
    TVDIAnalyticsScribeCtaWatchClick *_ctaWatchClick;
    TVDIAnalyticsScribeCtaUrlClick *_ctaUrlClick;
    TVDIAnalyticsScribeVideoAdSkip *_videoAdSkip;
    TVDIAnalyticsScribeVideoMrcView *_videoMrcView;
    TVDIAnalyticsScribeVideoQualityView *_videoQualityView;
    TVDIAnalyticsScribePlaybackStart *_playbackStart;
    TVDIAnalyticsScribeHeartbeat *_heartbeat;
    TVDIAnalyticsScribePlaybackStartupError *_playbackStartupError;
    TVDIAnalyticsScribeView2Second *_view2second;
    TVDIAnalyticsScribePause *_pause;
    TVDIAnalyticsScribeVideoGroupmView *_videoGroupmView;
    TVDIAnalyticsScribeError *_error;
    TVDIAnalyticsScribeLoop *_loop;
    TVDIAnalyticsScribeMute *_mute;
    TVDIAnalyticsScribeUnmute *_unmute;
    TVDIAnalyticsScribeVideo6SecView *_video6secView;
    TVDIAnalyticsScribeVideoMrcAudibleView *_videoMrcAudibleView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool videoMrcAudibleViewIsSet; // @synthesize videoMrcAudibleViewIsSet=_videoMrcAudibleViewIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeVideoMrcAudibleView *videoMrcAudibleView; // @synthesize videoMrcAudibleView=_videoMrcAudibleView;
@property(readonly, nonatomic) _Bool video6secViewIsSet; // @synthesize video6secViewIsSet=_video6secViewIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeVideo6SecView *video6secView; // @synthesize video6secView=_video6secView;
@property(readonly, nonatomic) _Bool unmuteIsSet; // @synthesize unmuteIsSet=_unmuteIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeUnmute *unmute; // @synthesize unmute=_unmute;
@property(readonly, nonatomic) _Bool muteIsSet; // @synthesize muteIsSet=_muteIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeMute *mute; // @synthesize mute=_mute;
@property(readonly, nonatomic) _Bool loopIsSet; // @synthesize loopIsSet=_loopIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeLoop *loop; // @synthesize loop=_loop;
@property(readonly, nonatomic) _Bool errorIsSet; // @synthesize errorIsSet=_errorIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool videoGroupmViewIsSet; // @synthesize videoGroupmViewIsSet=_videoGroupmViewIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeVideoGroupmView *videoGroupmView; // @synthesize videoGroupmView=_videoGroupmView;
@property(readonly, nonatomic) _Bool pauseIsSet; // @synthesize pauseIsSet=_pauseIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribePause *pause; // @synthesize pause=_pause;
@property(readonly, nonatomic) _Bool view2secondIsSet; // @synthesize view2secondIsSet=_view2secondIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeView2Second *view2second; // @synthesize view2second=_view2second;
@property(readonly, nonatomic) _Bool playbackStartupErrorIsSet; // @synthesize playbackStartupErrorIsSet=_playbackStartupErrorIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribePlaybackStartupError *playbackStartupError; // @synthesize playbackStartupError=_playbackStartupError;
@property(readonly, nonatomic) _Bool heartbeatIsSet; // @synthesize heartbeatIsSet=_heartbeatIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeHeartbeat *heartbeat; // @synthesize heartbeat=_heartbeat;
@property(readonly, nonatomic) _Bool playbackStartIsSet; // @synthesize playbackStartIsSet=_playbackStartIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribePlaybackStart *playbackStart; // @synthesize playbackStart=_playbackStart;
@property(readonly, nonatomic) _Bool videoQualityViewIsSet; // @synthesize videoQualityViewIsSet=_videoQualityViewIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeVideoQualityView *videoQualityView; // @synthesize videoQualityView=_videoQualityView;
@property(readonly, nonatomic) _Bool videoMrcViewIsSet; // @synthesize videoMrcViewIsSet=_videoMrcViewIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeVideoMrcView *videoMrcView; // @synthesize videoMrcView=_videoMrcView;
@property(readonly, nonatomic) _Bool videoAdSkipIsSet; // @synthesize videoAdSkipIsSet=_videoAdSkipIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeVideoAdSkip *videoAdSkip; // @synthesize videoAdSkip=_videoAdSkip;
@property(readonly, nonatomic) _Bool ctaUrlClickIsSet; // @synthesize ctaUrlClickIsSet=_ctaUrlClickIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeCtaUrlClick *ctaUrlClick; // @synthesize ctaUrlClick=_ctaUrlClick;
@property(readonly, nonatomic) _Bool ctaWatchClickIsSet; // @synthesize ctaWatchClickIsSet=_ctaWatchClickIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeCtaWatchClick *ctaWatchClick; // @synthesize ctaWatchClick=_ctaWatchClick;
@property(readonly, nonatomic) _Bool ctaUrlImpressionIsSet; // @synthesize ctaUrlImpressionIsSet=_ctaUrlImpressionIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeCtaUrlImpression *ctaUrlImpression; // @synthesize ctaUrlImpression=_ctaUrlImpression;
@property(readonly, nonatomic) _Bool ctaWatchImpressionIsSet; // @synthesize ctaWatchImpressionIsSet=_ctaWatchImpressionIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeCtaWatchImpression *ctaWatchImpression; // @synthesize ctaWatchImpression=_ctaWatchImpression;
@property(readonly, nonatomic) _Bool videoViewIsSet; // @synthesize videoViewIsSet=_videoViewIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeVideoView *videoView; // @synthesize videoView=_videoView;
@property(readonly, nonatomic) _Bool playFromTapIsSet; // @synthesize playFromTapIsSet=_playFromTapIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribePlayFromTap *playFromTap; // @synthesize playFromTap=_playFromTap;
@property(readonly, nonatomic) _Bool viewThresholdIsSet; // @synthesize viewThresholdIsSet=_viewThresholdIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeViewThreshold *viewThreshold; // @synthesize viewThreshold=_viewThreshold;
@property(readonly, nonatomic) _Bool playbackCompleteIsSet; // @synthesize playbackCompleteIsSet=_playbackCompleteIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribePlaybackComplete *playbackComplete; // @synthesize playbackComplete=_playbackComplete;
@property(readonly, nonatomic) _Bool playback95IsSet; // @synthesize playback95IsSet=_playback95IsSet;
@property(retain, nonatomic) TVDIAnalyticsScribePlayback95 *playback95; // @synthesize playback95=_playback95;
@property(readonly, nonatomic) _Bool playback75IsSet; // @synthesize playback75IsSet=_playback75IsSet;
@property(retain, nonatomic) TVDIAnalyticsScribePlayback75 *playback75; // @synthesize playback75=_playback75;
@property(readonly, nonatomic) _Bool playback50IsSet; // @synthesize playback50IsSet=_playback50IsSet;
@property(retain, nonatomic) TVDIAnalyticsScribePlayback50 *playback50; // @synthesize playback50=_playback50;
@property(readonly, nonatomic) _Bool playback25IsSet; // @synthesize playback25IsSet=_playback25IsSet;
@property(retain, nonatomic) TVDIAnalyticsScribePlayback25 *playback25; // @synthesize playback25=_playback25;
@property(readonly, nonatomic) _Bool replayIsSet; // @synthesize replayIsSet=_replayIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeReplay *replay; // @synthesize replay=_replay;
@property(readonly, nonatomic) _Bool playIsSet; // @synthesize playIsSet=_playIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribePlay *play; // @synthesize play=_play;
@property(readonly, nonatomic) _Bool intentToPlayIsSet; // @synthesize intentToPlayIsSet=_intentToPlayIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribeIntentToPlay *intentToPlay; // @synthesize intentToPlay=_intentToPlay;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoMrcAudibleView:(id)arg1;
- (id)initWithVideo6SecView:(id)arg1;
- (id)initWithUnmute:(id)arg1;
- (id)initWithMute:(id)arg1;
- (id)initWithLoop:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithVideoGroupmView:(id)arg1;
- (id)initWithPause:(id)arg1;
- (id)initWithView2second:(id)arg1;
- (id)initWithPlaybackStartupError:(id)arg1;
- (id)initWithHeartbeat:(id)arg1;
- (id)initWithPlaybackStart:(id)arg1;
- (id)initWithVideoQualityView:(id)arg1;
- (id)initWithVideoMrcView:(id)arg1;
- (id)initWithVideoAdSkip:(id)arg1;
- (id)initWithCtaUrlClick:(id)arg1;
- (id)initWithCtaWatchClick:(id)arg1;
- (id)initWithCtaUrlImpression:(id)arg1;
- (id)initWithCtaWatchImpression:(id)arg1;
- (id)initWithVideoView:(id)arg1;
- (id)initWithPlayFromTap:(id)arg1;
- (id)initWithViewThreshold:(id)arg1;
- (id)initWithPlaybackComplete:(id)arg1;
- (id)initWithPlayback95:(id)arg1;
- (id)initWithPlayback75:(id)arg1;
- (id)initWithPlayback50:(id)arg1;
- (id)initWithPlayback25:(id)arg1;
- (id)initWithReplay:(id)arg1;
- (id)initWithPlay:(id)arg1;
- (id)initWithIntentToPlay:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

