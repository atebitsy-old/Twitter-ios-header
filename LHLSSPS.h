//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LHLSSPS : NSObject
{
    struct SeqParamSet _sps;
}

- (id).cxx_construct;
- (_Bool)frameNumWithSliceHeaderData:(id)arg1 frameNum:(int *)arg2;
- (void)cropOffsetsLeft:(int *)arg1 right:(int *)arg2 top:(int *)arg3 bottom:(int *)arg4;
@property(readonly, nonatomic) int frameNumBitDepth;
@property(readonly, nonatomic) int croppedHeight;
@property(readonly, nonatomic) int croppedWidth;
@property(readonly, nonatomic) int encodedHeight;
@property(readonly, nonatomic) int encodedWidth;
@property(readonly, nonatomic) int level;
@property(readonly, nonatomic) int constraintSetFlags;
@property(readonly, nonatomic) int profile;
- (id)initWithData:(id)arg1;

@end

