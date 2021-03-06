//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1SlideshowViewControllerDataSource-Protocol.h>

@class NSArray, NSString;

@interface T1DirectMessageConversationSlideshowDataSource : NSObject <T1SlideshowViewControllerDataSource>
{
    unsigned long long _initialSlideIndex;
    CDUnknownBlockType _transitionObjectBlock;
    NSArray *_slideshowData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *slideshowData; // @synthesize slideshowData=_slideshowData;
@property(copy, nonatomic) CDUnknownBlockType transitionObjectBlock; // @synthesize transitionObjectBlock=_transitionObjectBlock;
@property(nonatomic) unsigned long long initialSlideIndex; // @synthesize initialSlideIndex=_initialSlideIndex;
- (id)slideshow:(id)arg1 sourceObjectForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 transitionObjectForSlideAtIndex:(long long)arg2;
- (long long)slideshow:(id)arg1 typeForSlideAtIndex:(long long)arg2;
- (_Bool)slideshow:(id)arg1 imageFetchRequestRequiresSigningForSlideAtIndex:(long long)arg2;
- (struct CGSize)slideshow:(id)arg1 imageDimensionsForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 imageURLStringForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 previewImageForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 mediaAssetForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 mediaForSlideAtIndex:(long long)arg2;
- (long long)numberOfSlidesInSlideshow:(id)arg1;
- (id)slideshow:(id)arg1 directMessagePlayableForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 statusForSlideAtIndex:(long long)arg2;
- (id)initWithMediaEntrySlideshowData:(id)arg1 transitionBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

