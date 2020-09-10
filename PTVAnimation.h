//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVAnimation : NSObject
{
    CDUnknownBlockType _block;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _curve;
    double _duration;
    double _currentTime;
}

+ (id)animationWithDuration:(double)arg1 curve:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)advanceToStart;
- (void)advanceTo:(double)arg1;
- (void)advanceBy:(double)arg1;
- (void)complete;
@property(readonly, nonatomic, getter=hasCompleted) _Bool completed;
- (double)valueAtPoint:(double)arg1;
- (double)valueAfterDuration:(double)arg1;
- (double)currentValue;
- (id)initWithDuration:(double)arg1 curve:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

@end

