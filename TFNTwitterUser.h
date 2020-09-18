//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/T1ActivityModel-Protocol.h>
#import <T1Twitter/TFNTwitterUserContext-Protocol.h>
#import <T1Twitter/TFSModel-Protocol.h>
#import <T1Twitter/TFSTwitterCanonicalUser-Protocol.h>
#import <T1Twitter/TFSTwitterScribableItem-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, TFNTwitterCanonicalUser, TFNTwitterSuggestsInfo, TFSTwitterEntityMedia, TFSTwitterEntitySet, TFSTwitterPlace, TFSTwitterPromotedContent, TFSTwitterRelationship, TFSTwitterUserDesignatorInfo, TFSTwitterUserExtendedProfile, TFSTwitterUserReference;
@protocol TFNTwitterStatusSocialContext, TFNTwitterTimelineEntryContext;

@interface TFNTwitterUser : NSObject <T1ActivityModel, NSCoding, TFSTwitterScribableItem, TFSModel, TFSTwitterCanonicalUser, TFNTwitterUserContext>
{
    _Bool _hasRecordedImpression;
    _Bool _isTestUser;
    TFSTwitterPromotedContent *_promotedContent;
    TFNTwitterSuggestsInfo *_suggestsInfo;
    id <TFNTwitterStatusSocialContext> _socialContext;
    id <TFNTwitterTimelineEntryContext> _timelineEntryContext;
    TFNTwitterCanonicalUser *_canonicalUser;
}

+ (void)asyncUpdateUsers:(id)arg1 withRelationships:(id)arg2;
+ (id)testUserWithFields:(id)arg1 socialContext:(id)arg2 suggestsInfo:(id)arg3;
+ (id)testUserWithFields:(id)arg1 socialContext:(id)arg2;
+ (id)testUserWithFields:(id)arg1;
+ (id)testUserWithUserID:(long long)arg1 username:(id)arg2 fullName:(id)arg3;
+ (id)testUserWithUserID:(long long)arg1 username:(id)arg2;
+ (id)testUserWithUsername:(id)arg1;
+ (id)testUserWithUserID:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterCanonicalUser *canonicalUser; // @synthesize canonicalUser=_canonicalUser;
@property(readonly, nonatomic) id <TFNTwitterTimelineEntryContext> timelineEntryContext; // @synthesize timelineEntryContext=_timelineEntryContext;
@property(readonly, nonatomic) id <TFNTwitterStatusSocialContext> socialContext; // @synthesize socialContext=_socialContext;
@property(readonly, nonatomic) TFNTwitterSuggestsInfo *suggestsInfo; // @synthesize suggestsInfo=_suggestsInfo;
@property(readonly, nonatomic) TFSTwitterPromotedContent *promotedContent; // @synthesize promotedContent=_promotedContent;
@property(readonly, nonatomic) _Bool isTestUser; // @synthesize isTestUser=_isTestUser;
- (id)scribeItemContentID;
- (id)scribeItemFirstImpressionID;
- (id)scribeParametersWithProfileID:(_Bool)arg1 scribeItem:(_Bool)arg2;
- (id)scribeParameters;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem;
@property(readonly, copy, nonatomic) NSString *scribeItemImpressionID;
- (void)_removeObserverForCanonicalUser;
- (void)_addObserverForCanonicalUser;
@property(readonly, nonatomic) TFSTwitterUserDesignatorInfo *highlightedDesignatorInfo;
@property(readonly, nonatomic) _Bool hasContextualInformation;
@property(readonly, copy, nonatomic) NSString *designatorUrl;
@property(readonly, nonatomic) unsigned long long designatorLabelType;
@property(readonly, nonatomic) unsigned long long designatorIconType;
@property(readonly, copy, nonatomic) NSString *designatorImageUrl;
@property(readonly, copy, nonatomic) NSString *designatorString;
@property(readonly, nonatomic) _Bool affiliated;
@property(readonly, nonatomic, getter=isPromoted) _Bool promoted;
@property(readonly, nonatomic) _Bool hasBannerImageURL;
@property(readonly, nonatomic) long long profileImageState;
- (id)bioDisplayText;
- (id)bioForProfileEditing;
- (id)urlForProfileEditing;
@property(readonly, nonatomic) NSString *twitterURLForEmail;
@property(readonly, nonatomic) NSString *twitterURL;
@property(readonly, copy, nonatomic) NSString *displayFullName;
@property(readonly, copy, nonatomic) NSString *displayUsername;
@property(readonly, nonatomic) NSNumber *userIDNumber;
@property(readonly, nonatomic) TFSTwitterUserReference *userReference;
@property(readonly, nonatomic) NSNumber *isProfileBioTranslatableNumber;
@property(readonly, nonatomic) _Bool isProfileBioTranslatable;
@property(readonly, nonatomic) _Bool hasFreshFullRelationship;
@property(readonly, nonatomic) _Bool hasFreshRelationship;
@property(readonly, nonatomic) TFSTwitterRelationship *relationship;
@property(nonatomic) _Bool couldBeStale;
@property(readonly, nonatomic) _Bool isPartialUser;
@property(readonly, nonatomic) TFSTwitterUserExtendedProfile *extendedProfile;
@property(readonly, nonatomic) _Bool hasExtendedProfileBirthday;
@property(readonly, nonatomic) long long translatorType;
@property(readonly, nonatomic) TFSTwitterEntitySet *withheldBioEntities;
@property(readonly, copy, nonatomic) NSString *withheldBio;
@property(readonly, copy, nonatomic) NSArray *withheldInCountries;
@property(readonly, nonatomic) _Bool nsfw;
@property(readonly, nonatomic) _Bool suspended;
@property(readonly, nonatomic) long long identityType;
@property(readonly, nonatomic) _Bool verified;
@property(readonly, nonatomic) _Bool protectedUser;
@property(readonly, copy, nonatomic) NSDate *createdDate;
@property(readonly, nonatomic) NSNumber *pinnedTweetIDNumber;
@property(readonly, nonatomic) NSNumber *favoritesCountNumber;
@property(readonly, nonatomic) NSNumber *mediaCountNumber;
@property(readonly, nonatomic) NSNumber *statusesCountNumber;
@property(readonly, nonatomic) long long numberOfFollowersFast;
@property(readonly, nonatomic) long long numberOfFollowersNormal;
@property(readonly, nonatomic) long long numberOfFollowers;
@property(readonly, nonatomic) long long numberOfFollowing;
@property(readonly, nonatomic) long long profileInterstitialType;
@property(readonly, nonatomic) unsigned int profileLinkColorHexTriplet;
@property(readonly, nonatomic) TFSTwitterEntityMedia *profileBannerMediaEntity;
@property(readonly, nonatomic) TFSTwitterEntityMedia *profileImageMediaEntity;
@property(readonly, nonatomic) _Bool hasStructuredLocation;
@property(readonly, nonatomic) TFSTwitterPlace *structuredLocation;
@property(readonly, copy, nonatomic) NSString *location;
@property(readonly, nonatomic) _Bool usernameless;
@property(readonly, nonatomic) TFSTwitterEntitySet *urlEntities;
@property(readonly, nonatomic) TFSTwitterEntitySet *bioEntities;
@property(readonly, copy, nonatomic) NSString *url;
@property(readonly, copy, nonatomic) NSString *bio;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, nonatomic) long long userID;
- (id)tfs_debugStrings;
- (void)asyncAddNumberOfFollowing:(long long)arg1;
- (long long)compareByWhetherOrNotFollowing:(id)arg1;
@property(readonly, nonatomic) _Bool accountCanDM;
@property(nonatomic) _Bool hasRecordedImpression; // @synthesize hasRecordedImpression=_hasRecordedImpression;
- (void)setBlockedByCurrentAccount:(_Bool)arg1;
- (void)setFollowRequestSentByCurrentAccount:(_Bool)arg1;
- (void)setFollowedByCurrentAccount:(_Bool)arg1;
- (void)asyncUpdateRelationship:(id)arg1;
- (void)replaceCanonicalUserForAssimilation:(id)arg1;
- (_Bool)isEqualToUserReference:(id)arg1;
- (void)setCanonicalUser:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithJSONDictionary:(id)arg1 fromGraphQL:(_Bool)arg2;
- (id)initWithUser:(id)arg1 promotedContent:(id)arg2 hasRecordedImpression:(_Bool)arg3 suggestsInfo:(id)arg4 socialContext:(id)arg5 timelineEntryContext:(id)arg6;
- (id)initWithUser:(id)arg1 suggestsInfo:(id)arg2 socialContext:(id)arg3 timelineEntryContext:(id)arg4;
- (id)initWithUser:(id)arg1 timelineEntryContext:(id)arg2;
- (id)initWithUser:(id)arg1 suggestsInfo:(id)arg2;
- (id)initWithUser:(id)arg1 socialContext:(id)arg2;
- (id)initWithUser:(id)arg1 promotedContent:(id)arg2;
- (id)initWithCS2User:(id)arg1 accountUserDetails:(id)arg2 promotedContent:(id)arg3 socialContext:(id)arg4;
- (id)initWithCS2User:(id)arg1;
- (id)initTestUserWithFields:(id)arg1 socialContext:(id)arg2 suggestsInfo:(id)arg3;
- (id)initTestUserWithFields:(id)arg1;
- (id)initTestUserWithUserID:(long long)arg1 username:(id)arg2 fullName:(id)arg3;
- (id)initTestUserWithUserID:(long long)arg1 username:(id)arg2;
- (id)initTestUserWithUsername:(id)arg1;
- (id)initWithCanonicalUser:(id)arg1;
- (id)init;
- (id)twitterURLForShareWithSParam:(unsigned long long)arg1;
- (id)scribeParameterID;
- (id)plainTextSubject;
- (id)plainTextBodyWithShareURLString:(id)arg1;
- (_Bool)canBeSharedViaShareSheetForAccount:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) unsigned long long isCurrentlyFirstImpression;
@property(nonatomic) unsigned long long isDuplicateContentIDInstance;
@property(readonly, nonatomic) _Bool isPromoted;
@property(readonly, nonatomic) NSString *scribeComponent;
@property(readonly, nonatomic) NSString *scribeElement;
@property(readonly) Class superclass;

@end

