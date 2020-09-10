//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterImagePipeline/NSObject-Protocol.h>

@class NSString, NSURL, TIPImageContainer;

@protocol TIPImageFetchResult <NSObject>
@property(readonly, copy, nonatomic) NSString *imageIdentifier;
@property(readonly, nonatomic) _Bool imageWasTransformed;
@property(readonly, nonatomic) _Bool imageIsTreatedAsPlaceholder;
@property(readonly, nonatomic) struct CGSize imageOriginalDimensions;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) long long imageSource;
@property(readonly, nonatomic) TIPImageContainer *imageContainer;
@end
