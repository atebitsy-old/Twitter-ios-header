//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1PillView.h>

@interface T1TimeDurationPillView : T1PillView
{
    _Bool _recording;
    unsigned long long _format;
    unsigned long long _state;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _completedTime;
    CDStruct_1b6d18a9 _warningTime;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic) unsigned long long format; // @synthesize format=_format;
@property(nonatomic) CDStruct_1b6d18a9 warningTime; // @synthesize warningTime=_warningTime;
@property(nonatomic) CDStruct_1b6d18a9 completedTime; // @synthesize completedTime=_completedTime;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
- (void)setViewCount:(long long)arg1 inPrimaryLabel:(_Bool)arg2;
- (void)_updateStateAnimated:(_Bool)arg1;
- (void)setFont:(id)arg1;
- (id)_formattedTime:(CDStruct_1b6d18a9)arg1;
- (void)setCurrentTime:(CDStruct_1b6d18a9)arg1 animated:(_Bool)arg2;
- (void)setRecording:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_t1_timeDurationPillView_initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
