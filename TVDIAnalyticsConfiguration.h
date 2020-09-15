//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVDIAnalyticsConfiguration : NSObject
{
    _Bool _promotedAudibleViewEnabled;
    _Bool _shortFormCompleteEnabled;
    CDUnknownBlockType _timeProvider;
    double _heartbeatInterval;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shortFormCompleteEnabled; // @synthesize shortFormCompleteEnabled=_shortFormCompleteEnabled;
@property(readonly, nonatomic) _Bool promotedAudibleViewEnabled; // @synthesize promotedAudibleViewEnabled=_promotedAudibleViewEnabled;
@property(readonly, nonatomic) double heartbeatInterval; // @synthesize heartbeatInterval=_heartbeatInterval;
@property(readonly, copy, nonatomic) CDUnknownBlockType timeProvider; // @synthesize timeProvider=_timeProvider;
- (id)initWithHeartbeatInterval:(id)arg1 promotedAudibleViewEnabled:(_Bool)arg2 shortFormCompleteEnabled:(_Bool)arg3 timeProvider:(CDUnknownBlockType)arg4;

@end

