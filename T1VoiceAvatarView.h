//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, T1AvatarImageView, TIPImagePipeline, UIColor, UIImage;
@protocol TFSTwitterCanonicalUser;

@interface T1VoiceAvatarView : UIView
{
    _Bool _ambientAnimationEnabled;
    UIColor *_circlesColor;
    T1AvatarImageView *_profileImageView;
    NSArray *_circlesLayers;
    NSLayoutConstraint *_avatarMaxWidthConstraint;
    NSString *_userID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSLayoutConstraint *avatarMaxWidthConstraint; // @synthesize avatarMaxWidthConstraint=_avatarMaxWidthConstraint;
@property(retain, nonatomic) NSArray *circlesLayers; // @synthesize circlesLayers=_circlesLayers;
@property(retain, nonatomic) T1AvatarImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(retain, nonatomic) UIColor *circlesColor; // @synthesize circlesColor=_circlesColor;
@property(nonatomic, getter=ambientAnimationIsEnabled) _Bool ambientAnimationEnabled; // @synthesize ambientAnimationEnabled=_ambientAnimationEnabled;
- (void)tfx_voicePlaybackCircleOpacityFactorParameterChanged;
- (void)tfx_voicePlaybackCircleCountParameterChanged;
- (void)_t1_animateExpandAndFade;
- (void)_t1_animatePing;
- (void)_t1_animateFocus;
- (unsigned long long)_t1_ambientCircleCount;
- (_Bool)_t1_isAmbientlyAnimating;
- (void)stopAmbientAnimations;
- (void)beginAmbientAnimation;
- (void)animateCirclesForAudioLevel:(double)arg1;
- (void)setAudioLevel:(id)arg1;
@property(retain, nonatomic) UIImage *avatarImage;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline;
@property(retain, nonatomic) id <TFSTwitterCanonicalUser> user;
@property(nonatomic) double maximumAvatarWidth;
- (void)layoutSubviews;
- (id)_t1_individualCircleColor;
- (void)setupCircles;
- (void)setupProfileImageView:(id)arg1;
- (id)initWithImagePipeline:(id)arg1;

@end
