//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebRTC/NSObject-Protocol.h>

@class RTCVideoFrame, UIView;

@protocol RTCMTLRenderer <NSObject>
- (_Bool)addRenderingDestination:(UIView *)arg1;
- (void)drawFrame:(RTCVideoFrame *)arg1;
@end
