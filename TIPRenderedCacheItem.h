//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TIPImageCacheEntry, UIImage;

@interface TIPRenderedCacheItem : NSObject
{
    id _weakifyDescriptor;
    UIImage *_weakifyImage;
    _Bool _dirty;
    NSString *_transformerIdentifier;
    TIPImageCacheEntry *_entry;
    struct CGSize _sourceImageDimensions;
}

- (void).cxx_destruct;

@end

