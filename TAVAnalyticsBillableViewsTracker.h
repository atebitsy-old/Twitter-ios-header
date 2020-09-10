//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/TAVAnalyticsTracker-Protocol.h>

@class NSMutableDictionary, NSNotificationCenter, NSString;
@protocol TAVAnalyticsEventSink;

@interface TAVAnalyticsBillableViewsTracker : NSObject <TAVAnalyticsTracker>
{
    id <TAVAnalyticsEventSink> _sink;
    NSMutableDictionary *_playthroughStates;
    NSNotificationCenter *_notificationCenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) NSMutableDictionary *playthroughStates; // @synthesize playthroughStates=_playthroughStates;
@property(retain, nonatomic) id <TAVAnalyticsEventSink> sink; // @synthesize sink=_sink;
- (_Bool)shouldFireBillableViewWithPlaythroughState:(id)arg1;
- (_Bool)shouldFireThresholdViewWithSessionState:(id)arg1 playthroughState:(id)arg2;
- (_Bool)shouldFirePlayFromTapWithSessionState:(id)arg1;
- (void)processState:(id)arg1;
- (id)private_playthroughStateForPlaythroughID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

