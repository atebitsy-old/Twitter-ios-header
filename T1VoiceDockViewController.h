//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1Dockable-Protocol.h>
#import <T1Twitter/T1DockingControllerDelegate-Protocol.h>
#import <T1Twitter/T1URTConversationTimelineObserver-Protocol.h>
#import <T1Twitter/T1VoiceDockViewDelegate-Protocol.h>
#import <T1Twitter/TAVPlaybackObserver-Protocol.h>

@class NSArray, NSString, T1URTConversationTimeline, T1URTTimelineCursorTableRowAdapter, T1VoiceStatusViewModel, TAVPlayer, TFNTwitterAccount, UIView;
@protocol TFNTwitterCardDataSource;

@interface T1VoiceDockViewController : TFNViewController <TAVPlaybackObserver, T1URTConversationTimelineObserver, T1VoiceDockViewDelegate, T1Dockable, T1DockingControllerDelegate>
{
    T1VoiceStatusViewModel *_viewModel;
    TFNTwitterAccount *_account;
    TAVPlayer *_player;
    T1URTConversationTimeline *_timeline;
    T1URTTimelineCursorTableRowAdapter *_cursorAdapter;
    NSArray *_timelineVoiceViewModels;
    NSArray *_timelinePlayers;
}

+ (id)currentVoiceDockViewController;
+ (id)new;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *timelinePlayers; // @synthesize timelinePlayers=_timelinePlayers;
@property(retain, nonatomic) NSArray *timelineVoiceViewModels; // @synthesize timelineVoiceViewModels=_timelineVoiceViewModels;
@property(retain, nonatomic) T1URTTimelineCursorTableRowAdapter *cursorAdapter; // @synthesize cursorAdapter=_cursorAdapter;
@property(retain, nonatomic) T1URTConversationTimeline *timeline; // @synthesize timeline=_timeline;
@property(retain, nonatomic) TAVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) T1VoiceStatusViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (long long)_t1_handleSkipBackwardCommand:(id)arg1;
- (long long)_t1_handleSkipForwardCommand:(id)arg1;
- (long long)_t1_handleChangePlaybackPositionCommand:(id)arg1;
- (long long)_t1_handlePauseCommand:(id)arg1;
- (long long)_t1_handlePlayCommand:(id)arg1;
- (void)_t1_updateControlCenterWithPlaybackState:(id)arg1;
- (void)_t1_removeControlCenter;
- (void)_t1_attachControlCenter;
- (void)voiceDockView:(id)arg1 didSeekToTimeSecs:(double)arg2;
- (void)voiceDockViewCloseButtonWasTapped:(id)arg1;
- (void)voiceDockViewPlayPauseButtonWasTapped:(id)arg1;
- (void)voiceDockViewWasTapped:(id)arg1;
@property(readonly, nonatomic) long long dockableStyle;
@property(readonly, nonatomic) NSString *playerIdentifier;
@property(readonly, nonatomic) _Bool isDockedVideoPlaying;
@property(readonly, nonatomic) _Bool isDockedVideoPaused;
- (void)muteDockedVideo:(_Bool)arg1;
- (void)pauseDockedVideo;
- (void)playDockedVideo;
@property(readonly, nonatomic) _Bool dockedViewContainsVideo;
@property(readonly, nonatomic) long long dockedViewSwipeAction;
@property(readonly, nonatomic) long long dockedViewTapAction;
@property(readonly, nonatomic) CDUnknownBlockType undockActionBlock;
@property(readonly, nonatomic) UIView *dockableView;
- (void)_t1_logClickActionOnElement:(id)arg1;
- (id)scribeParameters;
- (id)scribeSection;
- (id)scribePage;
- (void)_t1_seekPlayerToTimeSecs:(double)arg1;
- (void)_t1_togglePlayer;
- (void)_t1_attachPlayerWithTime:(CDStruct_1b6d18a9)arg1;
- (id)_t1_voiceStatusesCorrespondingToStatus:(id)arg1 inTimelineItems:(id)arg2;
- (void)timelineDidUpdate:(id)arg1;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)_t1_skipToNextClip;
- (id)_t1_calculateNextViewModel;
- (double)_t1_calculatePreviousDuration;
- (double)_t1_calculateTotalDuration;
- (void)_t1_updateView;
- (void)_t1_reloadTimeline;
- (id)_t1_voiceDockView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) id <TFNTwitterCardDataSource> cardDataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

