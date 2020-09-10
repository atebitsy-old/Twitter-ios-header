//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/TAVAnalyticsTracker-Protocol.h>

@class NSString, TAVAnalyticsSessionState;
@protocol TAVAnalyticsEventSink;

@interface TAVAnalyticsPlayPauseEventTracker : NSObject <TAVAnalyticsTracker>
{
    id <TAVAnalyticsEventSink> _sink;
    TAVAnalyticsSessionState *_lastAnalyticsSessionState;
}

- (void).cxx_destruct;
@property(copy, nonatomic) TAVAnalyticsSessionState *lastAnalyticsSessionState; // @synthesize lastAnalyticsSessionState=_lastAnalyticsSessionState;
@property(retain, nonatomic) id <TAVAnalyticsEventSink> sink; // @synthesize sink=_sink;
- (void)processState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

