//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterImagePipeline/TIPDisabledExternalMutabilityOperation.h>

@class TIPImagePipeline, TIPImageStoreHydrationOperation;
@protocol TIPImageStoreRequest;

@interface TIPImageStoreOperation : TIPDisabledExternalMutabilityOperation
{
    TIPImageStoreHydrationOperation *_hydrationOperation;
    id <TIPImageStoreRequest> _request;
    TIPImagePipeline *_pipeline;
    CDUnknownBlockType _storeCompletionBlock;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType storeCompletionBlock; // @synthesize storeCompletionBlock=_storeCompletionBlock;
@property(readonly, nonatomic) TIPImagePipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(readonly, nonatomic) id <TIPImageStoreRequest> request; // @synthesize request=_request;
- (void)main;
- (void)setHydrationDependency:(id)arg1;
- (id)initWithRequest:(id)arg1 pipeline:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_getEntryContextWithImageURL:(id)arg1 imageContainer:(id)arg2 imageFilePath:(id)arg3 imageData:(id)arg4;
- (id)_getImageContainer;
- (id)_getImageFilePath;
- (id)_getImageData;

@end
