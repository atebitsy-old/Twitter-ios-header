//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSURL, PTVProfileImageView, PTVTintedImageView, PTVVipBadgeView, UIColor, UIImageView, UILabel;

@interface PTVChatCommentTableViewCellContentView : UIView
{
    _Bool _useLargeChatFont;
    UIView *_avatarColoredBackground;
    PTVProfileImageView *_avatarImage;
    UIImageView *_replyImage;
    UIImageView *_blockImage;
    PTVTintedImageView *_candyImageView;
    PTVVipBadgeView *_vipBadgeImage;
    UILabel *_chatLabel;
    long long _participantIndex;
    _Bool _isReplyComment;
    NSURL *_profileImageURL;
    _Bool _isShowingReportIcon;
    _Bool _mutedForCarousel;
    NSString *_username;
    NSString *_displayName;
    NSString *_message;
    long long _blockState;
    UILabel *_usernameLabel;
    UIColor *_participantColor;
    unsigned long long _vipBadgeStatus;
    long long _candyDisplayStyle;
    UIView *_avatarReportIconBackground;
    UIImageView *_avatarReportIcon;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *avatarReportIcon; // @synthesize avatarReportIcon=_avatarReportIcon;
@property(readonly, nonatomic) UIView *avatarReportIconBackground; // @synthesize avatarReportIconBackground=_avatarReportIconBackground;
@property(nonatomic, getter=isMutedForCarousel) _Bool mutedForCarousel; // @synthesize mutedForCarousel=_mutedForCarousel;
@property(nonatomic) long long candyDisplayStyle; // @synthesize candyDisplayStyle=_candyDisplayStyle;
@property(nonatomic) unsigned long long vipBadgeStatus; // @synthesize vipBadgeStatus=_vipBadgeStatus;
@property(retain, nonatomic) UIImageView *vipBadgeImage; // @synthesize vipBadgeImage=_vipBadgeImage;
@property(readonly, nonatomic) UIColor *participantColor; // @synthesize participantColor=_participantColor;
@property(readonly, nonatomic) UIImageView *candyImageView; // @synthesize candyImageView=_candyImageView;
@property(readonly, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(nonatomic) long long blockState; // @synthesize blockState=_blockState;
@property(nonatomic) _Bool isShowingReportIcon; // @synthesize isShowingReportIcon=_isShowingReportIcon;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void)refreshColor;
- (void)alphaState;
- (void)executeState;
- (void)setUseLargeChatFont:(_Bool)arg1;
- (void)setIsReplyComment:(_Bool)arg1;
- (void)setProfileImageURL:(id)arg1;
- (void)setProfileImageEntity:(id)arg1 type:(unsigned long long)arg2;
- (void)fontSizeDidChange;
- (void)setParticipantIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutWithUsernameLabelSize:(struct CGSize)arg1;
- (void)dealloc;
- (long long)candyStyleForMessage:(id)arg1;
- (void)configureVisualDebuggerIfNeeded:(id)arg1;
- (void)configureWithChatMessage:(id)arg1;

@end

