//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkLayer/TNLSafeOperation.h>

@interface TNLTimerOperation : TNLSafeOperation
{
    double _delay;
    // Error parsing type: AB, name: _finished
    // Error parsing type: AB, name: _executing
}

- (void)completeOperation;
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)run;
- (void)start;
- (id)init;
- (id)initWithDelay:(double)arg1;

@end

