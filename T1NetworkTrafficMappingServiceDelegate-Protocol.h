//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1NetworkTrafficMappingService, TNUTransactionMetrics;

@protocol T1NetworkTrafficMappingServiceDelegate <NSObject>
- (void)trafficMappingServiceDidThrottleProbe;
- (void)trafficMappingService:(T1NetworkTrafficMappingService *)arg1 didCaptureProbeMetrics:(TNUTransactionMetrics *)arg2;
- (void)trafficMappingServiceDidEncounterInvalidTrafficMap:(T1NetworkTrafficMappingService *)arg1;
- (void)trafficMappingServiceDidDiscardTrafficMap:(T1NetworkTrafficMappingService *)arg1;
- (void)trafficMappingServiceDidPurgeTrafficMap:(T1NetworkTrafficMappingService *)arg1;
- (void)trafficMappingServiceDidClearTrafficMap:(T1NetworkTrafficMappingService *)arg1;
- (void)trafficMappingServiceDidApplyTrafficMap:(T1NetworkTrafficMappingService *)arg1;
@end
