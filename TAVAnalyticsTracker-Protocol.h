//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSNotificationCenter, TAVAnalyticsSessionState, TVDIAnalyticsConfiguration;
@protocol TAVAnalyticsEventSink;

@protocol TAVAnalyticsTracker <NSObject>
@property(retain, nonatomic) id <TAVAnalyticsEventSink> sink;
- (void)processState:(TAVAnalyticsSessionState *)arg1;

@optional
- (void)setupWithConfiguration:(TVDIAnalyticsConfiguration *)arg1;
- (void)finish;
- (void)setNotificationCenter:(NSNotificationCenter *)arg1;
@end

