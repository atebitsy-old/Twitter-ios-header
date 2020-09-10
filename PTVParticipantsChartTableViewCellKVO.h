//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVParticipantsChartTableViewCell.h>

#import <PeriscopeSDK/JBLineChartViewDataSource-Protocol.h>
#import <PeriscopeSDK/JBLineChartViewDelegate-Protocol.h>

@class NSArray, NSDate, NSString, NSTimer, PTVParticipantChartPointView;

@interface PTVParticipantsChartTableViewCellKVO : PTVParticipantsChartTableViewCell <JBLineChartViewDataSource, JBLineChartViewDelegate>
{
    PTVParticipantsChartTableViewCellKVO *_weakSelf;
    NSArray *_participantData;
    double _peakValue;
    double _peakBroadcastTime;
    unsigned long long _peakIndex;
    long long _liveOccupancy;
    PTVParticipantChartPointView *_peakPointView;
    PTVParticipantChartPointView *_livePointView;
    NSDate *_broadcastStartDate;
    NSTimer *_liveTimeTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *liveTimeTimer; // @synthesize liveTimeTimer=_liveTimeTimer;
- (id)livePointView;
- (id)peakPointView;
- (_Bool)shouldShowPeakLabel;
- (void)setLiveOccupancyValue:(unsigned long long)arg1;
- (void)setPeakValue:(double)arg1 broadcastTime:(double)arg2 atIndex:(unsigned long long)arg3;
- (void)setParticipantCountData:(id)arg1 animated:(_Bool)arg2;
- (void)setBroadcastStartDate:(id)arg1;
- (void)setIsLive:(_Bool)arg1;
- (void)updateLiveTime;
- (void)startOrStopLiveTimeTimerIfNeeded;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (long long)lineChartView:(id)arg1 fillColorStyleForLineAtLineIndex:(unsigned long long)arg2;
- (double)lineChartView:(id)arg1 widthForLineAtLineIndex:(unsigned long long)arg2;
- (id)lineChartView:(id)arg1 fillColorForLineAtLineIndex:(unsigned long long)arg2;
- (id)lineChartView:(id)arg1 colorForLineAtLineIndex:(unsigned long long)arg2;
- (double)lineChartView:(id)arg1 verticalValueForHorizontalIndex:(unsigned long long)arg2 atLineIndex:(unsigned long long)arg3;
- (id)lineChartView:(id)arg1 dotViewAtHorizontalIndex:(unsigned long long)arg2 atLineIndex:(unsigned long long)arg3;
- (_Bool)lineChartView:(id)arg1 showsDotsForLineAtLineIndex:(unsigned long long)arg2;
- (_Bool)lineChartView:(id)arg1 smoothLineAtLineIndex:(unsigned long long)arg2;
- (unsigned long long)lineChartView:(id)arg1 numberOfVerticalValuesAtLineIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfLinesInLineChartView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

