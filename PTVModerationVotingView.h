//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol PTVModerationVotingViewDelegate;

@interface PTVModerationVotingView : UIView
{
    id <PTVModerationVotingViewDelegate> _delegate;
    UILabel *_instructionsLabel;
    UILabel *_waitingStatusLabel;
    UILabel *_messageLabel;
    UIButton *_learnMoreButton;
    UIImageView *_avatarImage;
    UIView *_messageContainerView;
    UIView *_dividingLine;
    UIView *_progressBar;
    UIView *_waitingBar;
    UIView *_topMask;
    UIButton *_guiltyButton;
    UIButton *_innocentButton;
    UIButton *_notSureButton;
    double _progressPercentage;
    NSString *_message;
    unsigned long long _reportType;
    double _votingDuration;
    long long _votingState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *dividingLine; // @synthesize dividingLine=_dividingLine;
@property(readonly, nonatomic) UILabel *waitingStatusLabel; // @synthesize waitingStatusLabel=_waitingStatusLabel;
@property(nonatomic) long long votingState; // @synthesize votingState=_votingState;
@property(nonatomic) double votingDuration; // @synthesize votingDuration=_votingDuration;
@property(nonatomic) unsigned long long reportType; // @synthesize reportType=_reportType;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void)waitingBarAlphaState:(_Bool)arg1;
- (void)progressBarAlphaState;
- (void)labelsAndButtonsAlphaState;
- (_Bool)showingMessage;
- (double)waitingLabelOriginY:(struct CGSize)arg1;
- (double)dividingLineOriginY:(struct CGSize)arg1;
- (double)maxVotingButtonLabelHeightForModerationVotingViewSize:(struct CGSize)arg1;
- (double)maxVotingButtonLabelHeight;
- (void)_setGuiltyButtonTitle;
- (void)learnMoreButtonPressed;
- (void)notSurePressed;
- (void)innocentPressed;
- (void)guiltyPressed;
- (id)initWithMessage:(id)arg1 delegate:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutStatusLabelsAndMessage:(double)arg1;
- (void)layoutProgressBarWithVotingButtonHeight:(double)arg1;
- (void)layoutSubviews;

@end

