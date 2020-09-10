//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1TwitterSocialContext-Protocol.h>
#import <T1Twitter/T1UserViewModel-Protocol.h>

@class NSArray, NSDictionary, NSString, TFNTwitterUser, TFSTwitterEntityMedia, TFSTwitterPromotedContent, TFSTwitterRelationship, TFSTwitterUserReference, TFSURTUrl;
@protocol T1TwitterSocialContext, TFNTwitterTimelineEntryContext, TFNTwitterUserContext, TFSTwitterCanonicalUser;

@interface T1StandardUserViewModel : NSObject <T1TwitterSocialContext, T1UserViewModel>
{
    NSString *_socialText;
    TFNTwitterUser *_user;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
- (void)_userMutingDidUpdate:(id)arg1;
- (void)_userDidUpdate:(id)arg1;
@property(readonly, copy, nonatomic) TFSURTUrl *landingURL;
@property(readonly, copy, nonatomic) NSArray *allUserReferences;
@property(readonly, copy, nonatomic) NSString *socialBadgeName;
@property(readonly, copy, nonatomic) NSString *socialText; // @synthesize socialText=_socialText;
@property(readonly, copy, nonatomic) NSString *socialContextScribePage;
@property(readonly, copy, nonatomic) NSString *socialContextScribeElement;
@property(readonly, copy, nonatomic) NSString *activityTitle;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) id <TFNTwitterUserContext> context;
@property(readonly, nonatomic) TFSTwitterEntityMedia *profileBannerMediaEntity;
@property(readonly, nonatomic) TFSTwitterEntityMedia *profileImageMediaEntity;
@property(readonly, nonatomic) id <TFNTwitterTimelineEntryContext> timelineEntryContext;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem;
@property(readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property(readonly, nonatomic) _Bool usernameless;
@property(readonly, nonatomic) _Bool protectedUser;
@property(readonly, nonatomic) id <T1TwitterSocialContext> socialContext;
@property(readonly, nonatomic) _Bool showSocialBadge;
@property(readonly, nonatomic) unsigned long long bioDisplayType;
@property(readonly, copy, nonatomic) NSString *bioDisplayText;
@property(readonly, nonatomic) NSString *displayUsername;
@property(readonly, nonatomic) NSString *displayFullName;
@property(readonly, nonatomic, getter=isPromoted) _Bool promoted;
@property(readonly, nonatomic) TFSTwitterPromotedContent *promotedContent;
@property(readonly, nonatomic) TFSTwitterRelationship *relationship;
@property(readonly, nonatomic) unsigned int profileLinkColorHexTriplet;
@property(readonly, nonatomic) _Bool affiliated;
@property(readonly, nonatomic) _Bool verified;
@property(readonly, copy, nonatomic) NSString *designatorUrl;
@property(readonly, nonatomic) unsigned long long designatorLabelType;
@property(readonly, nonatomic) unsigned long long designatorIconType;
@property(readonly, copy, nonatomic) NSString *designatorImageUrl;
@property(readonly, copy, nonatomic) NSString *designatorString;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *scribeComponent;
@property(readonly, nonatomic) long long userID;
@property(readonly, nonatomic) id <TFSTwitterCanonicalUser> canonicalUser;
@property(readonly, nonatomic) TFSTwitterUserReference *userReference;
- (void)dealloc;
- (id)initWithCS2User:(id)arg1 socialText:(id)arg2;
- (id)initWithUser:(id)arg1;
- (id)initWithUser:(id)arg1 socialText:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long isCurrentlyFirstImpression;
@property(nonatomic) unsigned long long isDuplicateContentIDInstance;
@property(readonly, nonatomic) NSString *scribeElement;
@property(readonly) Class superclass;

@end

