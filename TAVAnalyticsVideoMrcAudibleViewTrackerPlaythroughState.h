//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TAVAnalyticsPlayedRangesTracker;

@interface TAVAnalyticsVideoMrcAudibleViewTrackerPlaythroughState : NSObject
{
    _Bool _visibilityAtLeast50PercentAndAudible;
    _Bool _firedAudibleMRCView;
    TAVAnalyticsPlayedRangesTracker *_playedRangesTracker;
    CDStruct_1b6d18a9 _continuousDurationWhileVisibilityAtLeast50PercentAndAudible;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool firedAudibleMRCView; // @synthesize firedAudibleMRCView=_firedAudibleMRCView;
@property(nonatomic) CDStruct_1b6d18a9 continuousDurationWhileVisibilityAtLeast50PercentAndAudible; // @synthesize continuousDurationWhileVisibilityAtLeast50PercentAndAudible=_continuousDurationWhileVisibilityAtLeast50PercentAndAudible;
@property(nonatomic) _Bool visibilityAtLeast50PercentAndAudible; // @synthesize visibilityAtLeast50PercentAndAudible=_visibilityAtLeast50PercentAndAudible;
@property(retain, nonatomic) TAVAnalyticsPlayedRangesTracker *playedRangesTracker; // @synthesize playedRangesTracker=_playedRangesTracker;
- (void)updateWithPlaybackState:(id)arg1;
- (id)init;

@end

