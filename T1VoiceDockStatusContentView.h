//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1VoicePlaybackView.h>

#import <T1Twitter/T1VoiceDockableContent-Protocol.h>

@class NSLayoutConstraint, NSTimer, T1AmbientNotificationContainer, T1AvatarImageView, T1VoiceDockStatusViewModel, TAVPlaybackState, TFNBarProgressView, TFNPaddedButton, UIAccessibilityCustomAction, UIButton, UIImage, UILabel, UIStackView, UIView;
@protocol T1VoiceDockContainer, T1VoiceDockStatusContentViewDelegate;

@interface T1VoiceDockStatusContentView : T1VoicePlaybackView <T1VoiceDockableContent>
{
    UIView<T1VoiceDockContainer> *_dockContainer;
    id <T1VoiceDockStatusContentViewDelegate> _delegate;
    T1VoiceDockStatusViewModel *_viewModel;
    TFNBarProgressView *_progressView;
    TAVPlaybackState *_lastKnownPlaybackState;
    TFNPaddedButton *_progressThumbView;
    NSLayoutConstraint *_progressThumbViewCenterXConstraint;
    NSTimer *_hideProgressThumbViewTimer;
    UIButton *_backgroundButton;
    UIButton *_closeButton;
    UIButton *_playPauseButton;
    T1AvatarImageView *_imageView;
    UIStackView *_descriptionStackView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_topDivider;
    UIView *_controlSectionDivider;
    long long _lastKnownScrubGestureState;
    T1AmbientNotificationContainer *_playbackErrorNotificationContainer;
    UIAccessibilityCustomAction *_playPauseAccessibilityAction;
    struct CGPoint _progressThumbOriginalPosition;
}

+ (id)new;
- (void).cxx_destruct;
@property(retain, nonatomic) UIAccessibilityCustomAction *playPauseAccessibilityAction; // @synthesize playPauseAccessibilityAction=_playPauseAccessibilityAction;
@property(retain, nonatomic) T1AmbientNotificationContainer *playbackErrorNotificationContainer; // @synthesize playbackErrorNotificationContainer=_playbackErrorNotificationContainer;
@property(nonatomic) long long lastKnownScrubGestureState; // @synthesize lastKnownScrubGestureState=_lastKnownScrubGestureState;
@property(retain, nonatomic) UIView *controlSectionDivider; // @synthesize controlSectionDivider=_controlSectionDivider;
@property(retain, nonatomic) UIView *topDivider; // @synthesize topDivider=_topDivider;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIStackView *descriptionStackView; // @synthesize descriptionStackView=_descriptionStackView;
@property(retain, nonatomic) T1AvatarImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) NSTimer *hideProgressThumbViewTimer; // @synthesize hideProgressThumbViewTimer=_hideProgressThumbViewTimer;
@property(nonatomic) struct CGPoint progressThumbOriginalPosition; // @synthesize progressThumbOriginalPosition=_progressThumbOriginalPosition;
@property(retain, nonatomic) NSLayoutConstraint *progressThumbViewCenterXConstraint; // @synthesize progressThumbViewCenterXConstraint=_progressThumbViewCenterXConstraint;
@property(retain, nonatomic) TFNPaddedButton *progressThumbView; // @synthesize progressThumbView=_progressThumbView;
@property(retain, nonatomic) TAVPlaybackState *lastKnownPlaybackState; // @synthesize lastKnownPlaybackState=_lastKnownPlaybackState;
@property(retain, nonatomic) TFNBarProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) T1VoiceDockStatusViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <T1VoiceDockStatusContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)accessibilityActivate;
- (void)accessibilityElementDidLoseFocus;
- (void)_t1_updateAccessibilityWithProgress:(double)arg1;
- (void)_t1_updateAccessibilityIsPlaying:(_Bool)arg1;
- (void)_t1_resetAccessibilityCustomActions;
- (void)_t1_initAccessibility;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)_t1_hidePlaybackErrorIfNeeded;
- (void)_t1_showPlaybackError:(id)arg1;
@property(nonatomic) double progress;
- (_Bool)_t1_isScrubbing;
- (void)_t1_hideScrubbingAfterDelay:(double)arg1;
- (void)_t1_setScrubbingVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)handleSwipeGesture:(struct CGPoint)arg1 state:(long long)arg2;
@property(readonly, nonatomic, getter=isExpandable) _Bool expandable;
@property(readonly, nonatomic) double expandedHeight;
@property(readonly, nonatomic) double minimumHeight;
@property(nonatomic) __weak UIView<T1VoiceDockContainer> *dockContainer; // @synthesize dockContainer=_dockContainer;
- (void)_t1_reportGenericTap;
- (void)_t1_handleDockViewTap;
- (void)_t1_handlePlayPauseButton;
- (void)_t1_handleCloseButton;
@property(readonly, nonatomic) UIImage *avatarImage;
- (void)dealloc;
- (id)initWithImagePipeline:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
