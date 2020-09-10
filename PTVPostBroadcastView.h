//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PeriscopeSDK/PTVBroadcastControllerObserver-Protocol.h>
#import <PeriscopeSDK/PTVBroadcasterSurveyViewDelegate-Protocol.h>
#import <PeriscopeSDK/PTVStarSelectionViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableSet, NSString, PTVBroadcastController, PTVBroadcasterSurveyMiniView, PTVBroadcasterSurveyView, PTVPostBroadcastButton, PTVPostBroadcastReplayButton, PTVVerticalButton;
@protocol PTVPostBroadcastViewDelegate;

@interface PTVPostBroadcastView : UIView <PTVBroadcastControllerObserver, PTVBroadcasterSurveyViewDelegate, PTVStarSelectionViewDelegate>
{
    NSMutableSet *_unsortedVisibleButtons;
    NSArray *_orderedButtons;
    NSArray *_visibleButtons;
    NSLayoutConstraint *_buttonContainerHeightConstraint;
    _Bool _isShowingSurvey;
    _Bool _shouldRemoveMiniSurvey;
    id <PTVPostBroadcastViewDelegate> _delegate;
    PTVBroadcastController *_broadcastController;
    PTVPostBroadcastReplayButton *_watchReplayButton;
    PTVVerticalButton *_broadcastDetailsButton;
    PTVVerticalButton *_watchLiveButton;
    PTVPostBroadcastButton *_broadcastEditButton;
    PTVVerticalButton *_moderationReportButton;
    PTVBroadcasterSurveyMiniView *_miniSurveyView;
    PTVBroadcasterSurveyView *_surveyView;
    UIView *_buttonContainer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldRemoveMiniSurvey; // @synthesize shouldRemoveMiniSurvey=_shouldRemoveMiniSurvey;
@property(readonly, nonatomic) UIView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property(readonly, nonatomic) PTVBroadcasterSurveyView *surveyView; // @synthesize surveyView=_surveyView;
@property(readonly, nonatomic) PTVBroadcasterSurveyMiniView *miniSurveyView; // @synthesize miniSurveyView=_miniSurveyView;
@property(readonly, nonatomic) PTVVerticalButton *moderationReportButton; // @synthesize moderationReportButton=_moderationReportButton;
@property(readonly, nonatomic) PTVPostBroadcastButton *broadcastEditButton; // @synthesize broadcastEditButton=_broadcastEditButton;
@property(readonly, nonatomic) PTVVerticalButton *watchLiveButton; // @synthesize watchLiveButton=_watchLiveButton;
@property(readonly, nonatomic) PTVVerticalButton *broadcastDetailsButton; // @synthesize broadcastDetailsButton=_broadcastDetailsButton;
@property(readonly, nonatomic) PTVPostBroadcastReplayButton *watchReplayButton; // @synthesize watchReplayButton=_watchReplayButton;
@property(nonatomic) _Bool isShowingSurvey; // @synthesize isShowingSurvey=_isShowingSurvey;
@property(readonly, nonatomic) PTVBroadcastController *broadcastController; // @synthesize broadcastController=_broadcastController;
@property(nonatomic) __weak id <PTVPostBroadcastViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)starSelectionDidChange:(id)arg1;
- (void)surveyTappedSettingsLink;
- (void)surveySubmitPressed;
- (void)surveySkipped;
- (void)surveyCompleted;
- (void)updateMiniSurvey;
- (void)_dismissSurvey;
- (void)_showSurveyWithStarRating:(unsigned long long)arg1;
- (void)showSurveyIfRequired;
- (void)didPressShowSurvey;
- (void)didPressModerationReportButton;
- (void)didPressEditBroadcastButton;
- (void)didPressWatchLiveButton;
- (void)didPressBroadcastDetailsButton;
- (void)didPressWatchReplayButton;
- (void)updateButtonVisibilityForCurrentPlaybackMode;
- (void)updateBroadcastEditButtonState;
- (void)updateReplayButtonState;
- (void)updateButtonStates;
- (void)didUpdatePlaybackPointFrom:(id)arg1;
- (void)_setButtonView:(id)arg1 visible:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setModerationEventCount:(unsigned long long)arg1;
@property(nonatomic) unsigned long long replayAvailabilityState;
@property(nonatomic) unsigned long long replayControlsState;
- (id)initWithDelegate:(id)arg1 broadcastController:(id)arg2;
- (void)broadcastController:(id)arg1 didUpdatePlaybackPointFrom:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

