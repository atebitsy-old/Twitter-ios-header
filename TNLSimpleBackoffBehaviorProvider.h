//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkLayer/TNLBackoffBehaviorProvider-Protocol.h>

@class NSString;

@interface TNLSimpleBackoffBehaviorProvider : NSObject <TNLBackoffBehaviorProvider>
{
    double _serializeDuration;
    double _serialDelayDuration;
}

@property double serialDelayDuration; // @synthesize serialDelayDuration=_serialDelayDuration;
@property double serializeDuration; // @synthesize serializeDuration=_serializeDuration;
- (struct TNLBackoffBehavior_T)tnl_backoffBehaviorForURL:(id)arg1 responseHeaders:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

