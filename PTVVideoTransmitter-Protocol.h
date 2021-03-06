//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary;
@protocol PTVRTPStatusDelegate;

@protocol PTVVideoTransmitter <NSObject>
- (NSDictionary *)getStatistics;
- (_Bool)connectedAndRunning;
- (void)drainQueue:(void (^)(void))arg1;
- (void)resetInputs;
- (void)pushMetadata:(NSDictionary *)arg1 pts:(double)arg2;
- (double)makeNTPfor:(double)arg1;
- (double)translateTime:(double)arg1;
- (void)noteTemporalDiscontinuity:(double)arg1;
- (void)setCaptureTime:(double)arg1;
- (void)getAndResetBytesSent:(long long *)arg1 dropped:(long long *)arg2 queueLength:(long long *)arg3;
- (void)shutdown;
- (void)startConnection;
- (_Bool)onData:(NSArray *)arg1 time:(double)arg2 input:(int)arg3 decodeAt:(double)arg4;
- (int)addInput:(_Bool)arg1 config:(NSData *)arg2;
- (void)setDelegate:(id <PTVRTPStatusDelegate>)arg1;
@end

