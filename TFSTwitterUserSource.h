//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSNumber, NSString, TFSTwitterAccountUserDetails, TFSTwitterEntityMedia, TFSTwitterEntitySet, TFSTwitterPlace, TFSTwitterRelationship, TFSTwitterUserAssimilatable, TFSTwitterUserDesignatorInfo, TFSTwitterUserExtendedProfile, TFSTwitterUserReference;

@interface TFSTwitterUserSource : NSObject
{
    // Error parsing type: , name: twitterUser
    // Error parsing type: , name: updateEventDispatcher
    // Error parsing type: , name: partial
    // Error parsing type: , name: accountUserDetails
    // Error parsing type: , name: _displayUsername
    // Error parsing type: , name: _displayFullName
    // Error parsing type: , name: modelContext
    // Error parsing type: , name: observer
}

- (void).cxx_destruct;
- (id)init;
- (id)assimilateTwitterUserSource:(id)arg1;
- (_Bool)shouldAssimilateWithTwitterUserSource:(id)arg1;
- (void)setModelContext:(id)arg1 cs2Transaction:(id)arg2;
@property(nonatomic, readonly) TFSTwitterUserAssimilatable *assimilatable;
@property(nonatomic, readonly) _Bool accountCanDM;
@property(nonatomic, readonly) _Bool hasFreshFullRelationship;
@property(nonatomic, readonly) _Bool hasFreshRelationship;
@property(nonatomic, readonly) _Bool hasBannerImageURL;
@property(nonatomic, readonly) unsigned long long designatorLabelType;
@property(nonatomic, readonly) unsigned long long designatorIconType;
@property(nonatomic, readonly) NSString *designatorUrl;
@property(nonatomic, readonly) NSString *designatorImageUrl;
@property(nonatomic, readonly) NSString *designatorString;
@property(nonatomic, readonly) _Bool affiliated;
@property(nonatomic, readonly) long long profileImageState;
@property(nonatomic, readonly) NSString *displayFullName;
@property(nonatomic, readonly) NSString *displayUsername;
@property(nonatomic, readonly) TFSTwitterUserReference *userReference;
@property(nonatomic, readonly) NSNumber *userIDNumber;
@property(nonatomic, readonly) NSDate *updatedTimestamp;
@property(nonatomic, readonly) _Bool hasBirdwatchNotes;
@property(nonatomic, readonly) NSNumber *isProfileBioTranslatableNumber;
@property(nonatomic, readonly) _Bool isProfileBioTranslatable;
@property(nonatomic, readonly) TFSTwitterRelationship *relationship;
@property(nonatomic, readonly) TFSTwitterUserDesignatorInfo *highlightedDesignatorInfo;
@property(nonatomic, readonly) TFSTwitterUserExtendedProfile *extendedProfile;
@property(nonatomic, readonly) NSNumber *hasExtendedProfileBirthdayNumber;
@property(nonatomic, readonly) _Bool hasExtendedProfileBirthday;
@property(nonatomic, readonly) NSNumber *usernamelessNumber;
@property(nonatomic, readonly) _Bool usernameless;
@property(nonatomic, readonly) TFSTwitterPlace *structuredLocation;
@property(nonatomic, readonly) _Bool hasStructuredLocation;
@property(nonatomic, readonly) NSArray *withheldInCountries;
@property(nonatomic, readonly) TFSTwitterEntitySet *withheldBioEntities;
@property(nonatomic, readonly) NSString *withheldBio;
@property(nonatomic, readonly) NSString *location;
@property(nonatomic, readonly) TFSTwitterEntitySet *bioEntities;
@property(nonatomic, readonly) NSString *bio;
@property(nonatomic, readonly) TFSTwitterEntityMedia *profileBannerMediaEntity;
@property(nonatomic, readonly) NSNumber *profileLinkColorHexTripletNumber;
@property(nonatomic, readonly) unsigned int profileLinkColorHexTriplet;
@property(nonatomic, readonly) NSNumber *profileInterstitialTypeNumber;
@property(nonatomic, readonly) long long profileInterstitialType;
@property(nonatomic, readonly) NSNumber *translatorTypeNumber;
@property(nonatomic, readonly) long long translatorType;
@property(nonatomic, readonly) NSNumber *nsfwNumber;
@property(nonatomic, readonly) _Bool nsfw;
@property(nonatomic, readonly) NSDate *createdDate;
@property(nonatomic, readonly) NSNumber *pinnedTweetIDNumber;
@property(nonatomic, readonly) NSNumber *favoritesCountNumber;
@property(nonatomic, readonly) NSNumber *mediaCountNumber;
@property(nonatomic, readonly) NSNumber *statusesCountNumber;
@property(nonatomic, readonly) NSNumber *followersFastNumber;
@property(nonatomic, readonly) long long numberOfFollowersFast;
@property(nonatomic, readonly) NSNumber *followersNormalNumber;
@property(nonatomic, readonly) long long numberOfFollowersNormal;
@property(nonatomic, readonly) NSNumber *followersNumber;
@property(nonatomic, readonly) long long numberOfFollowers;
@property(nonatomic, readonly) NSNumber *followingNumber;
@property(nonatomic, readonly) long long numberOfFollowing;
@property(nonatomic, readonly) TFSTwitterEntitySet *urlEntities;
@property(nonatomic, readonly) NSString *url;
@property(nonatomic, readonly) NSNumber *suspendedNumber;
@property(nonatomic, readonly) _Bool suspended;
@property(nonatomic, readonly) TFSTwitterEntityMedia *profileImageMediaEntity;
@property(nonatomic, readonly) _Bool protectedUser;
@property(nonatomic, readonly) long long identityType;
@property(nonatomic, readonly) _Bool verified;
@property(nonatomic, readonly) NSString *fullName;
@property(nonatomic, readonly) NSString *username;
@property(nonatomic, readonly) long long userID;
- (id)initWithUser:(id)arg1 accountUserDetails:(id)arg2;
- (id)initWithUser:(id)arg1;
- (id)initWithUserID:(long long)arg1 username:(id)arg2 fullName:(id)arg3 profileImageMediaEntity:(id)arg4 verified:(_Bool)arg5 identityType:(long long)arg6 protected:(_Bool)arg7 partial:(_Bool)arg8 url:(id)arg9 urlEntities:(id)arg10 suspended:(id)arg11 numberOfFollowing:(id)arg12 numberOfFollowers:(id)arg13 numberOfFollowersNormal:(id)arg14 numberOfFollowersFast:(id)arg15 statusesCountNumber:(id)arg16 mediaCountNumber:(id)arg17 favoritesCountNumber:(id)arg18 pinnedTweetIDNumber:(id)arg19 createdDate:(id)arg20 nsfw:(id)arg21 translatorType:(id)arg22 profileInterstitialType:(id)arg23 profileLinkColorHexTriplet:(id)arg24 profileBannerMediaEntity:(id)arg25 bio:(id)arg26 bioEntities:(id)arg27 location:(id)arg28 withheldBio:(id)arg29 withheldBioEntities:(id)arg30 withheldInCountries:(id)arg31 hasStructuredLocation:(_Bool)arg32 structuredLocation:(id)arg33 usernameless:(id)arg34 hasExtendedProfileBirthday:(id)arg35 extendedProfile:(id)arg36 highlightedDesignatorInfo:(id)arg37 relationship:(id)arg38 isProfileBioTranslatable:(id)arg39 hasBirdwatchNotes:(id)arg40 lastUpdated:(id)arg41 accountUserDetails:(id)arg42;
@property(nonatomic, readonly) TFSTwitterAccountUserDetails *accountUserDetails;
@property(nonatomic) _Bool partial; // @synthesize partial;
@property(nonatomic, readonly) id updateEventDispatcher; // @synthesize updateEventDispatcher;

@end

