//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterImagePipeline/TIPDisabledExternalMutabilityOperation.h>

@class NSError, TIPImagePipeline;
@protocol TIPImageStoreRequest, TIPImageStoreRequestHydrater;

@interface TIPImageStoreHydrationOperation : TIPDisabledExternalMutabilityOperation
{
    id <TIPImageStoreRequest> _request;
    TIPImagePipeline *_pipeline;
    id <TIPImageStoreRequestHydrater> _hydrater;
    // Error parsing type: AB, name: _isFinished
    // Error parsing type: AB, name: _isExecuting
    // Error parsing type: AB, name: _didStart
    NSError *_error;
    id <TIPImageStoreRequest> _hydratedRequest;
}

- (void).cxx_destruct;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;

@end

