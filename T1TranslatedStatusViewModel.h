//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1StatusViewModel-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString, TFNTwitterCardData, TFNTwitterDisplayTextModel, TFNTwitterFeedbackInfo, TFNTwitterFeedbackModule, TFNTwitterGeotag, TFNTwitterStatus, TFNTwitterStatusConversationContext, TFNTwitterSuggestsInfo, TFSTwitterAutoTranslation, TFSTwitterCameraMoment, TFSTwitterConversationControl, TFSTwitterEntitySet, TFSTwitterMediaInfo, TFSTwitterTranslateTweetResponse, TFSTwitterVideoMonetizationSettings, TFSURTImageVariant, TFSURTRichText, UIColor;
@protocol T1PlayerFactoryIdentifiable, T1StatusViewModel, TFNTwitterAVPlayerSessionSource, TFNTwitterCardDataSource, TFNTwitterStatusConversationTreeContext;

@interface T1TranslatedStatusViewModel : NSObject <T1StatusViewModel>
{
    TFNTwitterDisplayTextModel *_displayTextModel;
    id <T1StatusViewModel> _underlyingViewModel;
    TFSTwitterTranslateTweetResponse *_translateTweetResponse;
    TFSTwitterAutoTranslation *_autoTranslation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFSTwitterAutoTranslation *autoTranslation; // @synthesize autoTranslation=_autoTranslation;
@property(retain, nonatomic) TFSTwitterTranslateTweetResponse *translateTweetResponse; // @synthesize translateTweetResponse=_translateTweetResponse;
@property(retain, nonatomic) id <T1StatusViewModel> underlyingViewModel; // @synthesize underlyingViewModel=_underlyingViewModel;
- (id)_encodedDisplayText;
- (id)_t1_displayTextModel;
- (id)displayTextModel;
- (id)_t1_displayTextModelForOptions:(unsigned long long)arg1;
- (id)displayTextURLRangesForOptions:(unsigned long long)arg1;
- (id)displayTextRangesForOptions:(unsigned long long)arg1;
- (id)displayTextPlaceRangesForOptions:(unsigned long long)arg1;
- (_Bool)displayTextMayHaveUndetectedHashflagsForOptions:(unsigned long long)arg1;
- (id)displayTextHashflagsForOptions:(unsigned long long)arg1;
- (id)displayTextForOptions:(unsigned long long)arg1;
- (id)attributedTextModelForOptions:(unsigned long long)arg1 width:(double)arg2 withFont:(id)arg3 boldFont:(id)arg4 lineHeight:(double)arg5 lineSpacing:(double)arg6 emptyLineMaxHeight:(double)arg7 darkBackground:(_Bool)arg8 defaultTextColor:(id)arg9 linkTextColor:(id)arg10 highlighted:(_Bool)arg11 truncationString:(id)arg12 cachingEnabled:(_Bool)arg13;
- (long long)attributedDisplayTextHeightForOptions:(unsigned long long)arg1 withWidth:(double)arg2 font:(id)arg3 boldFont:(id)arg4 lineHeight:(double)arg5 lineSpacing:(double)arg6 emptyLineMaxHeight:(double)arg7 darkBackground:(_Bool)arg8 defaultTextColor:(id)arg9 linkTextColor:(id)arg10 truncationString:(id)arg11 cachingEnabled:(_Bool)arg12;
- (id)accessibilityTextForOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *hiddenURLEntities;
@property(readonly, nonatomic) NSArray *hiddenMentionEntities;
- (id)usernames;
- (unsigned long long)displayTextOffset;
- (id)displayText;
- (id)fullText;
- (id)originalText;
- (id)entityForURL:(id)arg1;
- (id)updatedScribeParameters:(id)arg1;
- (void)syncLastDisplayCounts;
- (id)socialText;
- (id)socialContextURL;
- (id)socialBadgeName;
- (_Bool)isAttachmentTypePhotoOrVideo:(unsigned long long)arg1;
- (_Bool)hasTwitterMediaIncludingPartners:(unsigned long long)arg1 forAccount:(id)arg2;
- (_Bool)shouldShowQuotedTweetForAccount:(id)arg1;
@property(readonly, nonatomic) NSString *withheldScope;
@property(readonly, nonatomic) TFSTwitterVideoMonetizationSettings *videoMonetizationSettings;
@property(readonly, nonatomic) NSString *unifiedID;
@property(readonly, nonatomic) NSString *supplementalLanguage;
@property(readonly, nonatomic) TFNTwitterSuggestsInfo *suggestsInfo;
@property(readonly, nonatomic) NSString *statusItemViewModelDidUpdateNotificationName;
@property(readonly, nonatomic) _Bool shouldRenderAsAttachmentTombstone;
@property(readonly, nonatomic) _Bool shouldOmitCardLink;
@property(readonly, nonatomic, getter=displayAsSelfThreadTweet) _Bool selfThreadTweet;
@property(readonly, nonatomic) long long selfThreadID;
@property(readonly, nonatomic) NSDictionary *scribeParameters;
@property(readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem;
@property(readonly, nonatomic) NSString *scribeElement;
@property(readonly, nonatomic) NSString *scribeComponent;
@property(readonly, nonatomic) double score;
@property(readonly, nonatomic) NSString *ruxContext;
@property(readonly, nonatomic) NSString *retweetedByAccessibilityLabel;
@property(readonly, nonatomic) long long representedStatusID;
@property(readonly, nonatomic) TFNTwitterGeotag *representedGeotag;
@property(readonly, nonatomic) NSString *representedFromUserName;
@property(readonly, nonatomic) long long representedFromUserID;
@property(readonly, nonatomic) TFNTwitterCardData *representedCardData;
@property(readonly, nonatomic) unsigned long long replyBadgeType;
@property(readonly, copy, nonatomic) NSString *replyBadgeText;
@property(readonly, nonatomic) UIColor *replyBadgeBackgroundColor;
@property(readonly, nonatomic) id <T1StatusViewModel> quotedStatusViewModel;
- (id)promotedContent;
@property(readonly, nonatomic) unsigned long long primaryMediaType;
@property(readonly, nonatomic) _Bool primaryMediaRequiresAttribution;
@property(readonly, nonatomic) TFSTwitterMediaInfo *primaryMediaInfo;
@property(readonly, nonatomic) long long primaryCardType;
@property(readonly, nonatomic) id <TFNTwitterAVPlayerSessionSource> playerSessionSource;
@property(readonly, nonatomic) id <T1PlayerFactoryIdentifiable> playerFactoryIdentifiable;
@property(readonly, nonatomic) TFSURTRichText *outerTombstoneRichText;
@property(readonly, nonatomic) TFSURTRichText *outerTombstoneRichRevealText;
@property(readonly, nonatomic, getter=isOuterTombstoneDismissed) _Bool outerTombstoneDismissed;
@property(readonly, copy, nonatomic) NSString *momentID;
@property(readonly, nonatomic) id <T1StatusViewModel> mediaForwardViewModel;
@property(readonly, nonatomic) NSString *limitedActionsPolicy;
@property(readonly, nonatomic) long long lastDisplayQuoteCount;
@property(readonly, nonatomic) long long lastDisplayRetweetCount;
@property(readonly, nonatomic) long long lastDisplayReplyCount;
@property(readonly, nonatomic) long long lastDisplayFavoriteCount;
- (_Bool)isVoice;
- (_Bool)isYouTubeCard;
- (_Bool)isVine;
- (_Bool)isVideoPoll;
@property(readonly, nonatomic) _Bool isTweetedByAuthenticatedAccount;
- (_Bool)isSurvey;
@property(readonly, nonatomic) _Bool isSelfThreadStatus;
- (_Bool)isScheduledBroadcast;
@property(readonly, nonatomic) _Bool isRTBCreative;
@property(readonly, nonatomic) _Bool isRetweet;
@property(readonly, nonatomic) _Bool isReply;
@property(readonly, nonatomic) _Bool isQuoteStatus;
@property(readonly, nonatomic) _Bool isQuoted;
@property(readonly, nonatomic) _Bool isPromoted;
@property(readonly, nonatomic) _Bool isPossiblySensitiveViewModel;
- (_Bool)isPoll;
@property(readonly, nonatomic) _Bool isPoliticalAd;
- (_Bool)isPlayable;
@property(readonly, nonatomic) _Bool isPinned;
- (_Bool)isPhoto;
- (_Bool)isPeriscope;
- (_Bool)isNotADummyStatus;
- (_Bool)isMomentCard;
@property(readonly, nonatomic) _Bool isMediaEntityVideo;
- (_Bool)isLiveEvent;
@property(readonly, nonatomic) _Bool isLimitedActionsNonCompliantViewModel;
@property(readonly, nonatomic) _Bool isIssueAd;
@property(readonly, nonatomic) _Bool isIncompleteQuotedStatus;
- (_Bool)isGIF;
@property(readonly, nonatomic) _Bool isFromUserVerified;
@property(readonly, nonatomic) _Bool isFromUserUsernameless;
@property(readonly, nonatomic) _Bool isFromUserProtected;
@property(readonly, nonatomic) _Bool isFromUserAffiliated;
@property(readonly, nonatomic) _Bool isConversationStatus;
@property(readonly, nonatomic) _Bool isConversationSingleBranchedReplyStatus;
@property(readonly, nonatomic) _Bool isConversationRoot;
@property(readonly, nonatomic) _Bool isConversationPrecededByAncestor;
@property(readonly, nonatomic) _Bool isConversationMuted;
@property(readonly, nonatomic) _Bool isConversationAncestor;
- (_Bool)isBroadcast;
- (_Bool)isAmplifyCardVideo;
- (_Bool)isAdsVideoCard;
@property(readonly, nonatomic) TFSURTRichText *innerTombstoneRichText;
@property(readonly, nonatomic) TFSURTRichText *innerTombstoneRichRevealText;
@property(readonly, nonatomic, getter=isInnerTombstoneDismissed) _Bool innerTombstoneDismissed;
@property(readonly, nonatomic) NSArray *inlineMediaInfos;
@property(readonly, nonatomic) _Bool hasSoftIntervention;
@property(readonly, nonatomic) _Bool hasReplyBadgeIcon;
@property(readonly, nonatomic) _Bool hasReplyBadge;
@property(readonly, nonatomic) _Bool hasModeratedReplies;
@property(readonly, nonatomic) _Bool hasForwardPivot;
@property(readonly, nonatomic) TFNTwitterGeotag *geotag;
@property(readonly, nonatomic) NSString *fromUserName;
@property(readonly, nonatomic) long long fromUserID;
@property(readonly, nonatomic) NSString *fromUserFullName;
@property(readonly, nonatomic) UIColor *forwardPivotBackgroundColor;
@property(readonly, nonatomic) TFSURTRichText *forwardPivotSubtext;
@property(readonly, nonatomic) TFSURTRichText *forwardPivotText;
@property(readonly, nonatomic) NSString *forwardPivotLandingUrlString;
@property(readonly, nonatomic) TFSURTImageVariant *forwardPivotImageVariant;
@property(readonly, nonatomic) NSString *forwardPivotDisplayType;
@property(readonly, nonatomic) NSString *forwardPivotBadgeTextColorName;
@property(readonly, nonatomic) UIColor *forwardPivotBadgeTextColor;
@property(readonly, nonatomic) NSString *forwardPivotBadgeText;
@property(readonly, nonatomic) NSString *forwardPivotAccessibilityString;
@property(readonly, nonatomic, getter=isFillerTweet) _Bool fillerTweet;
@property(readonly, nonatomic) TFNTwitterFeedbackModule *feedbackModule;
@property(readonly, nonatomic) TFNTwitterFeedbackInfo *feedbackInfo;
@property(readonly, nonatomic) long long draftTweetID;
@property(readonly, nonatomic) long long displayQuoteCount;
@property(readonly, nonatomic) long long displayRetweetCount;
@property(readonly, nonatomic) long long displayReplyCount;
@property(readonly, nonatomic) long long displayFavoriteCount;
@property(readonly, nonatomic) NSDate *displayDate;
@property(readonly, nonatomic) _Bool displayAsWithheld;
@property(readonly, nonatomic) _Bool displayAsRetweeted;
@property(readonly, nonatomic) _Bool displayAsMomentTweet;
@property(readonly, nonatomic) _Bool displayAsMomentTimelineTweet;
@property(readonly, nonatomic) _Bool displayAsFollowForwardTweet;
@property(readonly, nonatomic) _Bool displayAsFavorited;
@property(readonly, nonatomic, getter=isDismissing) _Bool dismissing;
@property(readonly, nonatomic) unsigned long long dismissibleContentType;
@property(readonly, nonatomic, getter=isDismissible) _Bool dismissible;
@property(readonly, nonatomic) NSString *designatorUrl;
@property(readonly, nonatomic) NSString *designatorString;
@property(readonly, nonatomic) unsigned long long designatorLabelType;
@property(readonly, nonatomic) NSString *designatorImageUrl;
@property(readonly, nonatomic) unsigned long long designatorIconType;
@property(readonly, nonatomic) id <TFNTwitterStatusConversationTreeContext> conversationTreeContext;
@property(readonly, nonatomic) NSString *conversationSection;
@property(readonly, nonatomic) TFNTwitterStatusConversationContext *conversationContext;
@property(readonly, nonatomic) NSString *composerSource;
@property(readonly, nonatomic) id <TFNTwitterCardDataSource> cardDataSource;
@property(readonly, nonatomic) TFNTwitterCardData *cardData;
@property(readonly, nonatomic) TFSTwitterConversationControl *conversationControl;
@property(readonly, nonatomic) TFSTwitterCameraMoment *cameraMoment;
@property(readonly, nonatomic) unsigned long long autoExpandMode;
- (_Bool)allowDynamicAd;
@property(readonly, nonatomic) NSString *advertiserName;
@property(readonly, nonatomic, getter=isAdPreviewTweet) _Bool adPreviewTweet;
@property(readonly, nonatomic) TFNTwitterStatus *legacyStatus;
- (struct _NSRange)displayTextRange;
- (id)textRangeSet;
@property(readonly, nonatomic) TFSTwitterEntitySet *entities;
- (_Bool)isAutoTranslated;
@property(readonly, nonatomic) long long translationSource;
@property(readonly, nonatomic) NSString *translatedLanguage;
@property(readonly, nonatomic) NSString *translationType;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) long long statusID;
- (id)initWithTranslation:(id)arg1 autoTranslation:(id)arg2 forUnderlyingViewModel:(id)arg3;
- (id)initWithAutoTranslation:(id)arg1 forUnderlyingViewModel:(id)arg2;
- (id)initWithTranslateTweetResponse:(id)arg1 forUnderlyingViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long isCurrentlyFirstImpression;
@property(nonatomic) unsigned long long isDuplicateContentIDInstance;
@property(readonly) Class superclass;

@end

