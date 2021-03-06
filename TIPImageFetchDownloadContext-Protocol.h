//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterImagePipeline/NSObject-Protocol.h>

@class NSObject, NSString, NSURLRequest;
@protocol OS_dispatch_queue, TIPImageFetchDownloadClient;

@protocol TIPImageFetchDownloadContext <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;
@property(readonly, nonatomic) id <TIPImageFetchDownloadClient> client;
@property(readonly, copy, nonatomic) NSString *authorization;
@property(readonly, copy, nonatomic) NSURLRequest *hydratedRequest;
@property(readonly, copy, nonatomic) NSURLRequest *originalRequest;
@end

