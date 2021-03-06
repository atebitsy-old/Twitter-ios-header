//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSUUID;

@interface TFSTwitterPromotedSKAdNetworkMetadata : NSObject
{
    NSString *_networkID;
    NSString *_adNetworkSignature;
    NSUUID *_nonce;
    NSNumber *_campaignID;
    NSNumber *_timestamp;
    NSNumber *_destinationAppID;
    NSNumber *_sourceAppID;
    NSString *_version;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSNumber *sourceAppID; // @synthesize sourceAppID=_sourceAppID;
@property(readonly, nonatomic) NSNumber *destinationAppID; // @synthesize destinationAppID=_destinationAppID;
@property(readonly, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSNumber *campaignID; // @synthesize campaignID=_campaignID;
@property(readonly, nonatomic) NSUUID *nonce; // @synthesize nonce=_nonce;
@property(readonly, copy, nonatomic) NSString *adNetworkSignature; // @synthesize adNetworkSignature=_adNetworkSignature;
@property(readonly, copy, nonatomic) NSString *networkID; // @synthesize networkID=_networkID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithAdNetworkID:(id)arg1 campaignID:(id)arg2 timeStamp:(id)arg3 destinationAppID:(id)arg4 signature:(id)arg5 sourceAppId:(id)arg6 version:(id)arg7 nonce:(id)arg8;

@end

