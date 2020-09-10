//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TPXStopWatch : NSObject
{
    double _referenceTime;
    double _elapsedTime;
    _Bool _running;
    double _lapTime;
}

+ (id)stopWatch;
@property(readonly, nonatomic) double lapTime; // @synthesize lapTime=_lapTime;
@property(readonly, nonatomic) double elapsedTime;
- (void)updateElapsedTime;
- (double)recordLapTime;
- (void)restart;
- (void)stop;
- (void)start;
- (id)init;

@end

