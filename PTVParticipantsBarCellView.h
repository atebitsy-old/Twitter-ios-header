//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class PTVHeartView, PTVParticipantsBarAvatarView, PTVTypingLetterAnimator;
@protocol PTVParticipantsBarCellViewDelegate;

@interface PTVParticipantsBarCellView : UICollectionViewCell
{
    PTVParticipantsBarCellView *_weakSelf;
    double _lastHeartBeatStartedAt;
    PTVTypingLetterAnimator *_typingLetterAnimator;
    id <PTVParticipantsBarCellViewDelegate> _delegate;
    PTVHeartView *_heartView;
    PTVParticipantsBarAvatarView *_avatarView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PTVParticipantsBarAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) PTVHeartView *heartView; // @synthesize heartView=_heartView;
@property(nonatomic) __weak id <PTVParticipantsBarCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fadeOutAfterDelay:(double)arg1;
- (void)showTypingAnimation;
- (void)animateHeartBeatWithCompletion:(CDUnknownBlockType)arg1;
- (void)didFinishHeartBeatStartedAt:(double)arg1;
- (void)beatHeart;
- (void)showHeartView:(_Bool)arg1;
- (struct CGRect)frameForHeartView;
- (void)setImageEntity:(id)arg1 formatType:(unsigned long long)arg2;
- (void)setShowGiftingProgress:(_Bool)arg1;
- (void)setGiftingProgress:(double)arg1 withParticipantIndex:(long long)arg2;
- (void)configureWithParticipant:(id)arg1;
- (void)handleLongPress;
- (void)handleTap;
- (void)applyLayoutAttributes:(id)arg1;
- (void)_participantBarCellViewInit;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
