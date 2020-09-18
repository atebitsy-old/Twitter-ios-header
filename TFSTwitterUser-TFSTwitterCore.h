//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterUser.h>

#import <TFSTwitterCore/TFSTwitterCanonicalUser-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString, TFSTwitterEntityMedia, TFSTwitterEntitySet, TFSTwitterPlace, TFSTwitterRelationship, TFSTwitterUserDesignatorInfo, TFSTwitterUserExtendedProfile, TFSTwitterUserReference;

@interface TFSTwitterUser (TFSTwitterCore) <TFSTwitterCanonicalUser>
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
@property(nonatomic, readonly) NSNumber *isProfileBioTranslatableNumber;
@property(nonatomic, readonly) _Bool isProfileBioTranslatable;
@property(nonatomic, readonly) NSDate *updatedTimestamp;
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
@end

