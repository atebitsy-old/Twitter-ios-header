//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterImagePipeline/TIPRenderImageFormat-Protocol.h>

@class NSString;

@interface TIPRenderImageFormatInternal : NSObject <TIPRenderImageFormat>
{
    _Bool _prefersExtendedRange;
    _Bool _opaque;
    double _scale;
    struct CGSize _renderSize;
}

@property(nonatomic) struct CGSize renderSize; // @synthesize renderSize=_renderSize;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool opaque; // @synthesize opaque=_opaque;
@property(nonatomic) _Bool prefersExtendedRange; // @synthesize prefersExtendedRange=_prefersExtendedRange;
- (id)initWithRendererFormat:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

