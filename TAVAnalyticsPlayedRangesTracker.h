//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TAVAnalyticsPlayedRangesTracker : NSObject
{
    unsigned int _currentTimeRangeIdentifier;
    unsigned int _initialTimeRangeIdentifier;
    CDStruct_1b6d18a9 _lastUpdateChange;
    CDStruct_1b6d18a9 _totalPlayedDuration;
    CDStruct_1b6d18a9 _playedRangeStart;
    CDStruct_e83c9415 _currentTimeRange;
    CDStruct_e83c9415 _initialIgnoredTimeRange;
}

@property(nonatomic) unsigned int initialTimeRangeIdentifier; // @synthesize initialTimeRangeIdentifier=_initialTimeRangeIdentifier;
@property(nonatomic) CDStruct_1b6d18a9 playedRangeStart; // @synthesize playedRangeStart=_playedRangeStart;
@property(nonatomic) CDStruct_1b6d18a9 totalPlayedDuration; // @synthesize totalPlayedDuration=_totalPlayedDuration;
@property(nonatomic) CDStruct_e83c9415 initialIgnoredTimeRange; // @synthesize initialIgnoredTimeRange=_initialIgnoredTimeRange;
@property(nonatomic) CDStruct_e83c9415 currentTimeRange; // @synthesize currentTimeRange=_currentTimeRange;
@property(nonatomic) unsigned int currentTimeRangeIdentifier; // @synthesize currentTimeRangeIdentifier=_currentTimeRangeIdentifier;
@property(nonatomic) CDStruct_1b6d18a9 lastUpdateChange; // @synthesize lastUpdateChange=_lastUpdateChange;
- (id)description;
- (void)updateWithCurrentTimeRangeIdentifier:(unsigned int)arg1 currentTimeRange:(CDStruct_e83c9415)arg2;
@property(readonly, nonatomic) CDStruct_1b6d18a9 playedDuration;
- (id)initWithInitialIgnoredTimeRange:(CDStruct_e83c9415)arg1 currentTimeRangeIdentifier:(unsigned int)arg2;
- (id)init;
- (void)updateWithPlaybackState:(id)arg1;
- (id)initWithPlaybackState:(id)arg1;

@end
