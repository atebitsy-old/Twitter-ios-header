//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNAttributedTextModel, TFNLayoutMetrics, TFNTwitterAccount;
@protocol TFNDirectMessageCardAttachment, TFNDirectMessageEntry, TFNDirectMessageMediaAttachment, TFNDirectMessageTweetAttachment;

@interface T1DirectMessageEntryMetricsComputationParameters : NSObject
{
    _Bool _isOutgoingMessage;
    _Bool _shouldRenderCard;
    _Bool _isLastInGroup;
    _Bool _shouldRenderInterstitial;
    _Bool _shouldShowSupersizedEmoji;
    id <TFNDirectMessageEntry> _messageEntry;
    TFNTwitterAccount *_account;
    TFNAttributedTextModel *_textModel;
    TFNAttributedTextModel *_interstitialTextModel;
    TFNAttributedTextModel *_seenByParticipantNamesTextModel;
    id <TFNDirectMessageMediaAttachment> _mediaAttachment;
    id <TFNDirectMessageTweetAttachment> _tweetAttachment;
    id <TFNDirectMessageCardAttachment> _cardAttachment;
    double _maxContentWidth;
    double _maxTextWidth;
    TFNLayoutMetrics *_layoutMetrics;
    long long _ctasCount;
    struct CGSize _textSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldShowSupersizedEmoji; // @synthesize shouldShowSupersizedEmoji=_shouldShowSupersizedEmoji;
@property(readonly, nonatomic) _Bool shouldRenderInterstitial; // @synthesize shouldRenderInterstitial=_shouldRenderInterstitial;
@property(readonly, nonatomic) long long ctasCount; // @synthesize ctasCount=_ctasCount;
@property(readonly, nonatomic) _Bool isLastInGroup; // @synthesize isLastInGroup=_isLastInGroup;
@property(readonly, nonatomic) _Bool shouldRenderCard; // @synthesize shouldRenderCard=_shouldRenderCard;
@property(readonly, nonatomic) TFNLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(readonly, nonatomic) struct CGSize textSize; // @synthesize textSize=_textSize;
@property(readonly, nonatomic) double maxTextWidth; // @synthesize maxTextWidth=_maxTextWidth;
@property(readonly, nonatomic) double maxContentWidth; // @synthesize maxContentWidth=_maxContentWidth;
@property(readonly, nonatomic) id <TFNDirectMessageCardAttachment> cardAttachment; // @synthesize cardAttachment=_cardAttachment;
@property(readonly, nonatomic) id <TFNDirectMessageTweetAttachment> tweetAttachment; // @synthesize tweetAttachment=_tweetAttachment;
@property(readonly, nonatomic) id <TFNDirectMessageMediaAttachment> mediaAttachment; // @synthesize mediaAttachment=_mediaAttachment;
@property(readonly, nonatomic) TFNAttributedTextModel *seenByParticipantNamesTextModel; // @synthesize seenByParticipantNamesTextModel=_seenByParticipantNamesTextModel;
@property(readonly, nonatomic) TFNAttributedTextModel *interstitialTextModel; // @synthesize interstitialTextModel=_interstitialTextModel;
@property(readonly, nonatomic) TFNAttributedTextModel *textModel; // @synthesize textModel=_textModel;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) _Bool isOutgoingMessage; // @synthesize isOutgoingMessage=_isOutgoingMessage;
@property(readonly, nonatomic) id <TFNDirectMessageEntry> messageEntry; // @synthesize messageEntry=_messageEntry;
- (id)initWithMessageEntry:(id)arg1 textModel:(id)arg2 interstitialTextModel:(id)arg3 seenByParticipantNamesTextModel:(id)arg4 mediaAttachment:(id)arg5 tweetAttachment:(id)arg6 cardAttachment:(id)arg7 textSize:(struct CGSize)arg8 outgoing:(_Bool)arg9 lastInGroup:(_Bool)arg10 shouldRenderCard:(_Bool)arg11 shouldRenderInterstitial:(_Bool)arg12 ctasCount:(long long)arg13 maxContentWidth:(double)arg14 maxTextWidth:(double)arg15 layoutMetrics:(id)arg16 account:(id)arg17 shouldShowSupersizedEmoji:(_Bool)arg18;

@end

