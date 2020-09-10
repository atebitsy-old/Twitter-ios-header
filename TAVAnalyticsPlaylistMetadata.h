//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/NSCopying-Protocol.h>
#import <TwitterAVCore/NSMutableCopying-Protocol.h>

@class NSDictionary, NSString, TAVAnalyticsMediaIdentifier, TAVAnalyticsPromotedMetadata, TAVAnalyticsVideoAdServerMetadata, TVDIAnalyticsOwnerIdentifier;

@interface TAVAnalyticsPlaylistMetadata : NSObject <NSMutableCopying, NSCopying>
{
    NSString *_contentID;
    TVDIAnalyticsOwnerIdentifier *_ownerID;
    NSDictionary *_videos;
    TAVAnalyticsVideoAdServerMetadata *_adServerMetadata;
    NSDictionary *_baseScribeItem;
    TAVAnalyticsPromotedMetadata *_promotedContent;
    TAVAnalyticsMediaIdentifier *_contentMediaIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TAVAnalyticsMediaIdentifier *contentMediaIdentifier; // @synthesize contentMediaIdentifier=_contentMediaIdentifier;
@property(copy, nonatomic) TAVAnalyticsPromotedMetadata *promotedContent; // @synthesize promotedContent=_promotedContent;
@property(copy, nonatomic) NSDictionary *baseScribeItem; // @synthesize baseScribeItem=_baseScribeItem;
@property(copy, nonatomic) TAVAnalyticsVideoAdServerMetadata *adServerMetadata; // @synthesize adServerMetadata=_adServerMetadata;
@property(readonly, copy, nonatomic) NSDictionary *videos; // @synthesize videos=_videos;
@property(retain, nonatomic) TVDIAnalyticsOwnerIdentifier *ownerID; // @synthesize ownerID=_ownerID;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContentID:(id)arg1 ownerID:(id)arg2 videos:(id)arg3 adServerMetadata:(id)arg4 baseScribeItem:(id)arg5 promotedContent:(id)arg6 contentMediaIdentifier:(id)arg7;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
