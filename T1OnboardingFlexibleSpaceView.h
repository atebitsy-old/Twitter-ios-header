//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSIndexPath, TFNFlexibleSpaceHelper;
@protocol T1OnboardingFlexibleSpaceViewDelegate;

@interface T1OnboardingFlexibleSpaceView : UIView
{
    id <T1OnboardingFlexibleSpaceViewDelegate> _delegate;
    NSIndexPath *_indexPath;
    long long _orientation;
    TFNFlexibleSpaceHelper *_helper;
    CDUnknownBlockType _minimumLengthCalculator;
    CDUnknownBlockType _weightCalculator;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType weightCalculator; // @synthesize weightCalculator=_weightCalculator;
@property(copy, nonatomic) CDUnknownBlockType minimumLengthCalculator; // @synthesize minimumLengthCalculator=_minimumLengthCalculator;
- (struct CGSize)sizeThatFitsSize:(struct CGSize)arg1 layoutMetrics:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFlexibleSpaceHelper:(id)arg1 indexPath:(id)arg2 orientation:(long long)arg3 delegate:(id)arg4 minimumLengthCalculator:(CDUnknownBlockType)arg5 weightCalculator:(CDUnknownBlockType)arg6;
- (id)initWithFlexibleSpaceHelper:(id)arg1 indexPath:(id)arg2 minimumLength:(double)arg3 weight:(double)arg4 orientation:(long long)arg5 delegate:(id)arg6;

@end

