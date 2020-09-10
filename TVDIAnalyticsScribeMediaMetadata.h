//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVDIAnalyticsScribe/NSCoding-Protocol.h>
#import <TVDIAnalyticsScribe/TBase-Protocol.h>

@class NSString, TVDIAnalyticsScribePublisherIdentifier;

@interface TVDIAnalyticsScribeMediaMetadata : NSObject <TBase, NSCoding>
{
    _Bool _broadcastIdIsSet;
    _Bool _twitterPublisherIdIsSet;
    _Bool _publisherIdentifierIsSet;
    NSString *_broadcastId;
    long long _twitterPublisherId;
    TVDIAnalyticsScribePublisherIdentifier *_publisherIdentifier;
}

+ (id)instanceWithPublisherIdentifier:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool publisherIdentifierIsSet; // @synthesize publisherIdentifierIsSet=_publisherIdentifierIsSet;
@property(retain, nonatomic) TVDIAnalyticsScribePublisherIdentifier *publisherIdentifier; // @synthesize publisherIdentifier=_publisherIdentifier;
@property(readonly, nonatomic) _Bool twitterPublisherIdIsSet; // @synthesize twitterPublisherIdIsSet=_twitterPublisherIdIsSet;
@property(nonatomic) long long twitterPublisherId; // @synthesize twitterPublisherId=_twitterPublisherId;
@property(readonly, nonatomic) _Bool broadcastIdIsSet; // @synthesize broadcastIdIsSet=_broadcastIdIsSet;
@property(copy, nonatomic) NSString *broadcastId; // @synthesize broadcastId=_broadcastId;
- (id)validateNonOptionalFields;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPublisherIdentifier:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

