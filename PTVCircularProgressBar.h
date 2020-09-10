//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSDate, NSTimer, UIBezierPath, UILabel;

@interface PTVCircularProgressBar : UIView
{
    _Bool _shouldScaleCountdownLabelUp;
    UIBezierPath *_circularPath;
    UILabel *_countdownLabel;
    NSTimer *_countdownLabelTransformTimer;
    CAShapeLayer *_progressShapeLayer;
    double _lineWidth;
    NSDate *_endDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) CAShapeLayer *progressShapeLayer; // @synthesize progressShapeLayer=_progressShapeLayer;
@property(retain, nonatomic) NSTimer *countdownLabelTransformTimer; // @synthesize countdownLabelTransformTimer=_countdownLabelTransformTimer;
@property(nonatomic) _Bool shouldScaleCountdownLabelUp; // @synthesize shouldScaleCountdownLabelUp=_shouldScaleCountdownLabelUp;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
- (void)updateCountdownLabelTransform;
- (void)updateCountdownTransformIfNeeded;
- (void)updateCountdownLabel;
- (void)clearTimersAndAnimations;
- (void)reset;
- (void)startProgressBarWithEndDate:(id)arg1;
@property(readonly, nonatomic) UIBezierPath *circularPath; // @synthesize circularPath=_circularPath;
- (void)dealloc;
- (id)initWithLineWidth:(double)arg1 countdownLabelFontSize:(double)arg2;

@end
