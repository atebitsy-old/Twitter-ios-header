//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol JBLineChartLinesViewDataSource;

@interface JBLineChartLinesView : UIView
{
    _Bool _animated;
    id <JBLineChartLinesViewDataSource> _dataSource;
    long long _selectedLineIndex;
}

@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) long long selectedLineIndex; // @synthesize selectedLineIndex=_selectedLineIndex;
@property(nonatomic) id <JBLineChartLinesViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)fireCallback:(CDUnknownBlockType)arg1;
- (id)basicPathAnimationFromBezierPath:(id)arg1 toBezierPath:(id)arg2;
- (id)gradientLineLayerForLineIndex:(unsigned long long)arg1 filled:(_Bool)arg2;
- (id)shapeLineLayerForLineIndex:(unsigned long long)arg1 filled:(_Bool)arg2;
- (id)bezierPathForLineChartLine:(id)arg1 filled:(_Bool)arg2;
- (void)setSelectedLineIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (void)reloadDataAnimated:(_Bool)arg1;
- (void)reloadDataAnimated:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

