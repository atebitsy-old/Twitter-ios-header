//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPI/NSObject-Protocol.h>

@class NSError, NSString;

@protocol TFSAuthAPIResponse <NSObject>
@property(readonly, nonatomic) unsigned long long startMachTime;
@property(readonly, nonatomic) unsigned long long authType;
@property(readonly, copy, nonatomic) NSString *accountID;
@property(readonly, nonatomic) long long statusCode;
@property(readonly, nonatomic) NSError *apiError;
@property(readonly, nonatomic) NSError *signError;
@property(readonly, nonatomic) _Bool success;
@end

