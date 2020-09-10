//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDate, NSString, TFNTwitterMomentAccess, TFNTwitterMomentAuthor, TFNTwitterMomentCapsuleCTA, TFNTwitterMomentCurationMetadata, TFNTwitterMomentEvent, TFNTwitterMomentPage, TFNTwitterMomentPremadeMomentData, TFNTwitterUser, TFSTwitterPromotedContent;

@protocol T1MomentViewModel <NSObject>
@property(nonatomic, readonly) TFNTwitterMomentAccess *momentAccess;
@property(nonatomic, readonly) TFNTwitterMomentPage *coverPage;
@property(nonatomic, readonly) TFNTwitterMomentCapsuleCTA *CTA;
@property(nonatomic, readonly) long long totalLikes;
@property(nonatomic, readonly) _Bool isLiked;
@property(nonatomic, readonly) long long visibilityMode;
@property(nonatomic, readonly) TFSTwitterPromotedContent *promotedContent;
@property(nonatomic, readonly) TFNTwitterMomentPremadeMomentData *premadeMomentData;
@property(nonatomic, readonly) TFNTwitterMomentCurationMetadata *curationMetadata;
@property(nonatomic, readonly) TFNTwitterMomentEvent *event;
@property(nonatomic, readonly) TFNTwitterUser *authorUser;
@property(nonatomic, readonly) TFNTwitterMomentAuthor *author;
@property(nonatomic, readonly) NSString *url;
- (_Bool)isSubscribed;
- (_Bool)canSubscribe;
@property(nonatomic, readonly) NSString *categoryString;
@property(nonatomic, readonly) NSString *durationString;
@property(nonatomic, readonly) NSDate *lastPublishTime;
@property(nonatomic, readonly) NSString *timeString;
- (_Bool)isSensitive;
- (_Bool)isLive;
@property(nonatomic, readonly) NSString *momentDescription;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) NSString *momentID;

// Remaining properties
@property(nonatomic, readonly) _Bool live;
@property(nonatomic, readonly) _Bool sensitive;
@property(nonatomic, readonly) _Bool subscribable;
@property(nonatomic, readonly) _Bool subscribed;
@end

