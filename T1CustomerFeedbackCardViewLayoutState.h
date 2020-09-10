//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardViewLayoutState.h>

@class NSString;

@interface T1CustomerFeedbackCardViewLayoutState : T1CardViewLayoutState
{
    unsigned long long _lastFeedbackState;
    unsigned long long _lastFeedbackType;
    NSString *_lastPrivacyUrl;
    NSString *_lastTitle;
    struct CGRect _topBorderViewFrame;
    struct CGRect _closeButtonFrame;
    struct CGRect _titleLabelFrame;
    struct CGRect _ratingViewFrame;
    struct CGRect _addCommentButtonFrame;
    struct CGRect _tweetButtonFrame;
    struct CGRect _privacyPolicyTextFrame;
    struct CGRect _bottomBorderViewFrame;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *lastTitle; // @synthesize lastTitle=_lastTitle;
@property(copy, nonatomic) NSString *lastPrivacyUrl; // @synthesize lastPrivacyUrl=_lastPrivacyUrl;
@property(nonatomic) unsigned long long lastFeedbackType; // @synthesize lastFeedbackType=_lastFeedbackType;
@property(nonatomic) unsigned long long lastFeedbackState; // @synthesize lastFeedbackState=_lastFeedbackState;
@property(nonatomic) struct CGRect bottomBorderViewFrame; // @synthesize bottomBorderViewFrame=_bottomBorderViewFrame;
@property(nonatomic) struct CGRect privacyPolicyTextFrame; // @synthesize privacyPolicyTextFrame=_privacyPolicyTextFrame;
@property(nonatomic) struct CGRect tweetButtonFrame; // @synthesize tweetButtonFrame=_tweetButtonFrame;
@property(nonatomic) struct CGRect addCommentButtonFrame; // @synthesize addCommentButtonFrame=_addCommentButtonFrame;
@property(nonatomic) struct CGRect ratingViewFrame; // @synthesize ratingViewFrame=_ratingViewFrame;
@property(nonatomic) struct CGRect titleLabelFrame; // @synthesize titleLabelFrame=_titleLabelFrame;
@property(nonatomic) struct CGRect closeButtonFrame; // @synthesize closeButtonFrame=_closeButtonFrame;
@property(nonatomic) struct CGRect topBorderViewFrame; // @synthesize topBorderViewFrame=_topBorderViewFrame;
- (_Bool)isLayoutStateValidForCardContext:(id)arg1;

@end

