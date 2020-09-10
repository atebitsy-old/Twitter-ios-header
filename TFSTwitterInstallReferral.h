//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/TFSModel-Protocol.h>

@class NSString;

@interface TFSTwitterInstallReferral : NSObject <TFSModel>
{
    NSString *_campaignID;
    long long _listID;
    NSString *_listOwnerScreenName;
    NSString *_listSlug;
    long long _promotedAccountID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long promotedAccountID; // @synthesize promotedAccountID=_promotedAccountID;
@property(readonly, copy, nonatomic) NSString *listSlug; // @synthesize listSlug=_listSlug;
@property(readonly, copy, nonatomic) NSString *listOwnerScreenName; // @synthesize listOwnerScreenName=_listOwnerScreenName;
@property(readonly, nonatomic) long long listID; // @synthesize listID=_listID;
@property(readonly, copy, nonatomic) NSString *campaignID; // @synthesize campaignID=_campaignID;
- (id)description;
- (_Bool)isValid;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithJSONData:(id)arg1 error:(id *)arg2;
- (id)init;

@end

