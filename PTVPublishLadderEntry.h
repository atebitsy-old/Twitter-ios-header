//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PTVPublishParams;

@interface PTVPublishLadderEntry : NSObject
{
    int _bandwidthLimit;
    PTVPublishParams *_publishParams;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PTVPublishParams *publishParams; // @synthesize publishParams=_publishParams;
@property(readonly, nonatomic) int bandwidthLimit; // @synthesize bandwidthLimit=_bandwidthLimit;
- (id)initWithParams:(id)arg1 andBandwidthLimit:(int)arg2;

@end

