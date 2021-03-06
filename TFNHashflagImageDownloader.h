//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/TIPImageFetchDelegate-Protocol.h>

@class NSMutableDictionary, NSString, TFNHashflagImageCache, TIPImagePipeline;

@interface TFNHashflagImageDownloader : NSObject <TIPImageFetchDelegate>
{
    TIPImagePipeline *_imagePipeline;
    TFNHashflagImageCache *_cache;
    NSMutableDictionary *_hashflagOperations;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
- (void)tip_imageFetchOperation:(id)arg1 didFailToLoadFinalImage:(id)arg2;
- (void)tip_imageFetchOperation:(id)arg1 didLoadFinalImage:(id)arg2;
- (void)downloadImageForHashflag:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithImagePipeline:(id)arg1 cache:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

