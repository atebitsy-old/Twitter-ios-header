//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class NSData, NSURLRequest;
@protocol PTVModelSessionTaskClient;

@protocol PTVModelSessionTaskContext <NSObject>
@property(readonly, nonatomic) id <PTVModelSessionTaskClient> ptv_client;
@property(readonly, nonatomic) NSData *ptv_uploadData;
@property(readonly, nonatomic) NSURLRequest *ptv_request;
@end

